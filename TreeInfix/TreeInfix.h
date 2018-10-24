//
// Created by sharan on 22/10/18.
//

#ifndef ASSP1_TREEINFIX_H
#define ASSP1_TREEINFIX_H


#include "../PostfixParseTree/PostfixParseTree.h"

#include <string>
#include <sstream>
/// a class named TreeInFix
/**
 * this class contains member variable methods and variables used
 * to read a parse tree in order and give an infix order representation of tree. 
*/
class TreeInfix {
    string infix; ///< variable that stores infix notation in string format
    stringstream store;///< variable that is used to store intermediate values of infix notation(incomplete notations)
public:
    TreeInfix(Node *tree);///<constructor of class
    string getInfix();///< method of class that returns a string

    void traverseInOrder(Node *tree);///<method of class that returns void
};


#endif //ASSP1_TREEINFIX_H
