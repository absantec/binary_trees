#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in binary tree
 * @tree: Pointer to root node of tree to count number of nodes
 *
 * Return: The number of nodes, 0 if tree is NULL or pointer isn't node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
