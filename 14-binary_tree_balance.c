#include "binary_trees.h"
/**
* binary_tree_height - Measures the height of a binary tree
* @tree: pointer to the root node of the tree
* Return: height of the tree, 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height;
size_t right_height;
size_t max_height;
if (tree == NULL)
return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
if (left_height > right_height)
max_height = left_height;
else
max_height = right_height;
return (max_height + 1);
}

/**
*binary_tree_balance - a function that measures the height of a binary tree
*@tree:  is a pointer to the root node of the tree to measure the height.
*Return: Height
*/
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
{
	return (0);
}
return ((int)binary_tree_height(tree->left)
- (int)binary_tree_height(tree->right));
}
