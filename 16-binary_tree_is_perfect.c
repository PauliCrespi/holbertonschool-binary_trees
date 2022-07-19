#include "binary_trees.h"
/**
 *depth - height of tree
 *@tree : pointer to the root node of the tree to check
 *Return: level
 */
int depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}
/**
 *is_perfect - aux func
 *@tree : pointer to the root node of the tree to check
 *@d : int
 *@level : tree level
 *Return: int
 */
int is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect(tree->left, d, level + 1) &&
		is_perfect(tree->right, d, level + 1));
}
/**
 *binary_tree_is_perfect - checks if a binary tree is perfect
 *@tree : pointer to the root node of the tree to check
 *Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	d = depth(tree);
	return (is_perfect(tree, d, 0));
}
