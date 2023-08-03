#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *NewNode;

    NewNode = malloc(sizeof(binary_tree_t));
    if(!NewNode)
        return(NULL);
    if(!parent)
        return(NULL);
    NewNode->n = value;
    NewNode->parent = parent;
    NewNode->right = parent->right;
    NewNode->left = NULL;
    parent->right = NewNode;

    if(NewNode->right)
        NewNode->right->parent = NewNode;

    return(NewNode);
}