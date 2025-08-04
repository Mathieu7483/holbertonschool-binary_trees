#include "binary_trees.h"
/**
*binary_tree_height - a function that measures the height of a binary tree
*@tree:  is a pointer to the root node of the tree to measure the height.
*Return: Height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lHeight, rHeight;

	if (tree == NULL)
	return (0);
	if (tree->left == NULL && tree->right == NULL)
	return (0);

lHeight = binary_tree_height(tree->left);
rHeight = binary_tree_height(tree->right);

if (lHeight > rHeight)
return (lHeight + 1);

else
return (rHeight + 1);
}
