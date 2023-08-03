#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *NewNode;

    NewNode = malloc(sizeof(binary_tree_t));
    if(!NewNode)
        return(NULL);
    if(!parent)
        return(NULL);
    NewNode->n = value;
    NewNode->parent = parent;
    NewNode->left = parent->left;
    NewNode->right = NULL;
    parent->left = NewNode;

    if(NewNode->left)
        NewNode->left->parent = NewNode;

    return(NewNode);
}