#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if(!node || !node->parent)
        return(NULL);
    
    if(node->parent->left->n != node->n)
        return(node->parent->left);
    else
        return(node->parent->right);
}
