#include "binary_trees.h"

/**
 *binary_tree_node - function that creates a binary tree node
 *@parent : pointer to the parent node of the node to create
 *@value : value to put in the new node
 *Return: binary_tree_node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL;

	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
		return (NULL);
	if (parent == NULL)
	{
		temp->left = NULL;
		temp->right = NULL;
		temp->n = value;
		parent = NULL;
	}
	else
	{
		temp->n = value;
		temp->parent = parent;
		temp->left = NULL;
		temp->right = NULL;
	}
	return (temp);
}
