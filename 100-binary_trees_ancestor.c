#include "binary_trees.h"
/**
 *binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *@first : is a pointer to the first node
 *@second : is a pointer to the second node
 *Return: binary_tree_t
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first
		, const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second->parent || second->parent == first->parent)
		return (second->parent);
	if (first->parent == second)
		return (first->parent);
	if (first->parent->parent == second->parent)
		return (second->parent);
	if (second->parent->parent == first->parent)
		return (first->parent);
	binary_trees_ancestor(first->parent, second->parent);
	return (NULL);
}
