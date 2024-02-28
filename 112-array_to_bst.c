#include "binary_trees.h"
/**
 * array_to_bst - the turns an array to a BST tree
 * @array: the array to be turned to BST tree
 * @size: the size of the array
 * Return: BST tree from the array
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t a = 0;
	bst_t *root;

	root = NULL;
	if (size == 0)
	{
		return (NULL);
	}
	for (; a < size; a++)
	{
		if (a == 0)
		{
			bst_insert(&root, array[a]);
		}
		else
		{
			bst_insert(&root, array[a]);
		}
	}
	return (root);
}
