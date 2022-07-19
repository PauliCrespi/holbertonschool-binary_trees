#include "binary_trees.h"
/**
 *binary_tree_height - measures the height of a binary tree
 *@tree : pointer to the root node of the tree to measure the height
 *Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rheight, lheight;

	if (tree == NULL)
		return (0);
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);
	if (lheight >= rheight)
		return (lheight + 1);
	return (rheight + 1);
}
/**
 *CurrentLevel - aux func
 *@tree : pointer to the root node of the tree
 *@func : is a pointer to a function to call for each node
 *@level : height
 */

void CurrentLevel(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		CurrentLevel(tree->left, func, level - 1);
		CurrentLevel(tree->right, func, level - 1);
	}
}
/**
 *binary_tree_levelorder - level-order traversal
 *@tree : pointer to the root node of the tree
 *@func : is a pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h = 0, i = 1;

	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	h = (int)binary_tree_height(tree);
	for (i = 1; i <= h; i++)
		CurrentLevel(tree, func, i);
}
