#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
{
    int Lheight = 0;
    int Rheigt = 0;

    Lheight = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
    Rheigt = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
    return(Lheight - Rheigt);
}