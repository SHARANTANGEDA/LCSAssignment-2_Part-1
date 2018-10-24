#include <iostream>
#include <cstring>
#include "InfixPostfix/InfixPostfix.h"
#include "PostfixParseTree/PostfixParseTree.h"
#include "TreeInfix/TreeInfix.h"

using namespace std;

/* main function */
int main(){
    string formula; /*<variable that is assigned to user inputted logical formula is declared*/
    cin>>formula;

    int len=formula.length(); /*< len = variable that is assigned the value of length of user inputted formula*/
    char forArray[len+1];  /*< defining character array of length len */
    ///copying formula parsed into string into character array
    strcpy(forArray,formula.c_str());
    
/// Conversion of infix formula  to postfix
/**
 * using class InfixPostfix and methods defined in it 
 * we convert user given infix statement to postfix statement */ 
    InfixPostfix infixPostfix(len,forArray);
    string postFix=infixPostfix.getPostFix();
    int l2=postFix.length();
    cout<<__LINE__<<endl;

/// Conversion of postfix to parse tree
/**
 * using class PostfixParseTree and its methods 
 * We convert the postfix expression derived from user given infix formula 
 * into a parse tree  */ 
    PostfixParseTree parseTree(l2,postFix);
    Node *rootedBinaryTree=parseTree.getTree();
    cout<<__LINE__<<endl;

///obtaining infix representation from parse tree
/**
 * using class TreeInfix and its associated methods 
 * we traverse the parse tree in such a way(in-order) that we
 * get the infix representation.  
*/
    TreeInfix treeInfix(rootedBinaryTree);
    string infixString=treeInfix.getInfix();
    cout<<__LINE__<<endl;
///here we print the derived postfix formula
    cout<<"1."<<postFix<<endl;
///here we print the infix formula brought by in-order traversal of parse tree 
    cout<<"2."<<infixString<<endl;
    return 0;
}