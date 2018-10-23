//
// Created by sharan on 22/10/18.
//

#ifndef ASSP1_TREEINFIX_H
#define ASSP1_TREEINFIX_H


#include "../PostfixParseTree/PostfixParseTree.h"

#include <string>
#include <sstream>

class TreeInfix {
    string infix;
    stringstream store;
public:
    TreeInfix(Node *tree);
    string getInfix();

    void traverseInOrder(Node *tree);
};


#endif //ASSP1_TREEINFIX_H
