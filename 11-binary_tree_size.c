#include "binary_trees.h"

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
