#include "binary_trees.h"
/**
*binary_tree_size - a function that measures the height of a binary tree
*@tree:  is a pointer to the root node of the tree to measure the height.
*Return: Height
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizeleft, sizeright;

	if (tree == NULL)
	return (0);

	sizeleft = binary_tree_size(tree->left);
	sizeright = binary_tree_size(tree->right);

	return (sizeleft + sizeright + 1);
}
