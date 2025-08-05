#include "binary_trees.h"
/**
*binary_tree_height - a function that measures the depth of a binary tree
*@tree:  is a pointer to the tree node of the tree to measure the depth.
*Return: Height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
return (0);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

if (left_height > right_height)
return (1 + left_height);
else
return (1 + right_height);
}
/**
*binary_tree_check_perfect - recursive function to see if it's a perfect tree
*@tree: is a pointer to the tree node of the tree to check
*@depth: depth
*@level: actual level
*Return: if perfect
*/
int binary_tree_check_perfect(const binary_tree_t *tree, int depth, int level)
{
if (tree == NULL)
return (1);
if (tree->left == NULL && tree->right == NULL)
return (depth == level + 1);
if (tree->left == NULL || tree->right == NULL)
return (0);

return (binary_tree_check_perfect(tree->left, depth, level + 1) &&
binary_tree_check_perfect(tree->right, depth, level + 1));
}

/**
*binary_tree_is_perfect - function that checks if a binary tree is perfect
*@tree: is a pointer to the tree node of the tree to check
*Return: 1 if perfect otherwise 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);
	depth = binary_tree_height(tree);
	return (binary_tree_check_perfect(tree, depth, 0));
}
