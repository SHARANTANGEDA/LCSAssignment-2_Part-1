//
// Created by sharan on 22/10/18.
//

#ifndef ASSP1_POSTFIXPARSETREE_H
#define ASSP1_POSTFIXPARSETREE_H

#include <string>

using namespace std;
///creating a binary tree
/**
 * we create a data structure ,Node, that points to
 * the node to its left and the node to its right
 * this is the fundamental building block of a tree 
*/
struct Node {
    char data;
    Node *left;
    Node *right;
};


/// creating class PostfixParsetree
/**
 * this class contains the abstract methods that will be used to
 * convert a postfix expression to a parse tree
*/
class PostfixParseTree {
///<a member variable
    Node *tree;  /**<a  pointer variable of type node*/
public:
///constructor of class
/**
 * @param len an integer that is supposed to represent length of second parameter
 * @param s a string that is supposed to be a formula in postfix representation 
*/
    PostfixParseTree(int len,string s);
///method of class that returns a Boolean value
/**
 *checks whether given input character is a symbol or not
 * @param a a character
 * */ 
    bool isSymbol(char a);
///method of class that returns a pointer to a node
/**
 * @param store  a character
*/
    Node* newBranch(char store);
///method of class that returns a pointer to a node
    Node* getTree();

};


#endif //ASSP1_POSTFIXPARSETREE_H
