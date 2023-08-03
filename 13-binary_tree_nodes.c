#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if(!tree || (!tree->left && !tree->right) )
        return(0);
    return(binary_tree_size(tree) - binary_tree_leaves(tree));
}

size_t binary_tree_leaves(const binary_tree_t *tree)
{
    int Lleaf = 0;
    int Rleaf = 0;
    if(!tree)
        return(0);
    if(!tree->left && !tree->right)
        return(1);
    Lleaf += binary_tree_leaves(tree->left);
    Rleaf += binary_tree_leaves(tree->right);
    return(Lleaf + Rleaf);
}

size_t binary_tree_size(const binary_tree_t *tree)
{
    int Lheight = 0;
    int Rheight = 0;

    if(!tree)
        return(0);
    Lheight = binary_tree_size(tree->left);
    Rheight = binary_tree_size(tree->right);
    return(Lheight + Rheight + 1);
}

