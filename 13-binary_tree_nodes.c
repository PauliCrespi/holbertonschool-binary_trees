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
 *binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *@tree : pointer to the root node of the tree
 *Return: number of nodes with 1 or more childs
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t rheight, lheight;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (0);
	lheight = binary_tree_nodes(tree->left);
	rheight = binary_tree_nodes(tree->right);
	return (((rheight + 1) + (lheight + 1) - 1));
}
