#include "binary_trees.h"
int binary_tree_is_full(const binary_tree_t *tree)
{
    if(!tree)
        return(0);

    if(!tree->left && !tree->right)
        return(1);

    if(tree->left && tree->right)
    {
        return(binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));
    }   
    return(0);
}