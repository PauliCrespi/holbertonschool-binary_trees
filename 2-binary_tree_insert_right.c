#include "binary_trees.h"

/**
 *binary_tree_insert_right - inserts a node as the left-child of another node
 *@parent : is a pointer to the node to insert the left-child in
 *@value : is the value to store in the new node
 *Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL, *node = NULL;

	if (parent == NULL)
		return (NULL);
	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
		return (NULL);
	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;
	if (parent->right != NULL)
	{
		node = parent->right;
		parent->right = temp;
		temp->right = node;
		temp->parent = parent;
		node->parent = temp;
	}
	else
	{
		parent->right = temp;
		temp->parent = parent;
	}
	return (temp);
}
