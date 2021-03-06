#include "binary_trees.h"
/**
 *binary_tree_is_leaf - check if node is a leaf
 *@node : node is a pointer to the node to check
 *Return: int
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL)
	{
		if (node->right == NULL)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
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
	if (binary_tree_is_leaf(tree))
		return (0);
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);
	if (lheight >= rheight)
		return (lheight + 1);
	return (rheight + 1);
}
