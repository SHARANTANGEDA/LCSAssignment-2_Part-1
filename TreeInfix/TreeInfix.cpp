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
    reverse(infix.begin(),infix.end());
    cout<<infix<<endl;
}

//Recursively traverses through parse tree InOrder
void TreeInfix::traverseInOrder(Node *tree) {
    if(tree){
        traverseInOrder(tree->right);
        store<<tree->data;
        cout<<tree->data<<" hh"<<endl;
        traverseInOrder(tree->left);
    }

}

string TreeInfix ::getInfix() {
    return infix;
}