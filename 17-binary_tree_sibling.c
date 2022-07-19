#include "binary_trees.h"
/**
 *binary_tree_sibling - finds the sibling of a node
 *@node : pointer to the node to find the sibling
 *Return: binary_tree_t
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int data = 0;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	data = node->n;
	if (node->parent != NULL)
		node = node->parent;
	if (node->left != NULL)
		node = node->left;
	if (node->n == data)
	{
		if (node->parent != NULL)
			node = node->parent;
		if (node->right != NULL)
			node = node->right;
	}
	return (node);
}
