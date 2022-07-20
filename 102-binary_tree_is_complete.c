#include "binary_trees.h"
/**
 *binary_tree_is_complete - check if a binary tree is complete
 *@tree : binary tree, root node
 *Return: 0 or 1
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right == NULL)
		return (0);
	if (tree->left == NULL && tree->right != NULL)
		return (0);
	return (binary_tree_is_complete(tree->left)
			&& binary_tree_is_complete(tree->right));
}
