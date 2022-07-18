#include "binary_trees.h"
/**
 *binary_tree_is_root - checks if a given node is a root
 *@node : is a pointer to the node to check
 *Return: 1 or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent != NULL)
	{
		return (0);
	}
	return (1);
}
/**
 *binary_tree_depth - measures the depth of a binary tree
 *@tree : pointer to the root node of the tree to measure the height
 *Return: height
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_root(tree))
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
