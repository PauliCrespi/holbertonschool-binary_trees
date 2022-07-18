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
	rheight = binary_tree_height(tree->right);
	lheight = binary_tree_height(tree->left);
	if (lheight >= rheight)
		return (1 + lheight);
	return (1 + rheight);
}
/**
 *binary_tree_balance - counts the nodes with at least 1 child in a binary tree
 *@tree : pointer to the root node of the tree
 *Return: number of nodes with 1 or more childs
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return ((int)binary_tree_height(tree->left)
			- (int)binary_tree_height(tree->right));
}
