//
// Created by sharan on 22/10/18.
//

#ifndef ASSP1_TREEINFIX_H
#define ASSP1_TREEINFIX_H


#include "../PostfixParseTree/PostfixParseTree.h"

#include <string>
#include <sstream>
///a class named TreeInfix
/**
 * this class contains methods and variables used to traverse a parse tree
 *  and represent it as an infix formula
*/
class TreeInfix {
    string infix;  ///<member variable that contains final infix representation of tree
    stringstream store;///< member variable that is used to store intermediate(incomplete) values of infix representation of tree
    stringstream stream;///<member variable with similar utility as 'store' 
public:
    TreeInfix(Node *tree);///<constructor of class
    string getInfix();///<method of class that returns a string
    void traverseInOrder(Node *tree);///<method of class that returns void
};


#endif //ASSP1_TREEINFIX_H
