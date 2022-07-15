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
