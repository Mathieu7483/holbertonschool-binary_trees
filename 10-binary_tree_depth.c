#include "binary_trees.h"
/**
*binary_tree_depth - a function that measures the depth of a binary tree
*@tree:  is a pointer to the root node of the tree to measure the depth.
*Return: depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
