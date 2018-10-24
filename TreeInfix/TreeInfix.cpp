//
// Created by sharan on 22/10/18.re
//

#include <sstream>
#include <iostream>
#include <algorithm>
#include "TreeInfix.h"

TreeInfix::TreeInfix(Node *tree) {
    traverseInOrder(tree);

    infix=store.str();
}

//Recursively traverses through parse tree InOrder
void TreeInfix::traverseInOrder(Node *tree) {
    if(tree){
        traverseInOrder(tree->right);
        store<<tree->data;
        traverseInOrder(tree->left);
    }

}

string TreeInfix ::getInfix() {
    return infix;
}