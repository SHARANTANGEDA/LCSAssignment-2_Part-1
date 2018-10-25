//
// Created by sharan on 22/10/18.re
//

#include <sstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include "TreeInfix.h"
/**
 * @param tree a pointer to root node of a parse tree (a binary tree)
*/
TreeInfix::TreeInfix(Node *tree) {
    traverseInOrder(tree); 

    string s=store.str();

    vector<char> vec;

    for(int i=0;i<s.length();i++) {
        vec.push_back(s[i]);
    }

    for(auto i=vec.begin();i!=vec.end();i++) {
        if (( *i!= '~') && (*i!= 'V') && (*i!= '^') && (*i!= '>') && (*i!= ')') && (*i!= '(')) {
            vec.erase(i+1);
            vec.erase(i-1);
        }

    }

    for(auto i=vec.begin();i!=vec.end();i++) {
        stream<<*i;
    }
        infix=stream.str();

}

/**
 * Recursively traverses through parse tree in InOrder
 */
void TreeInfix::traverseInOrder(Node *tree) {

    if(tree){
        store<<"(";
        traverseInOrder(tree->right);


            store<<tree->data;
        traverseInOrder(tree->left);
        store<<")";
    }

}
/**
 * returns the infix representation of parse tree in string format 
*/
string TreeInfix ::getInfix() {
    return infix;
}

