#include <iostream>
#include <cstring>
#include <chrono>
#include "InfixPostfix/InfixPostfix.h"
#include "PostfixParseTree/PostfixParseTree.h"
#include "TreeInfix/TreeInfix.h"

using namespace std;
using namespace std::chrono;

/**main function */
int main(){
    string formula; ///<variable that is assigned to user inputted logical formula is declared*/
    cin>>formula;

    auto start=high_resolution_clock::now();

    int len=formula.length(); ///< len = variable that is assigned the value of length of user inputted formula*/
    char forArray[len+1];  ///< defining character array of length len */
    ///copying formula parsed into string into character array
    strcpy(forArray,formula.c_str());
    
/// Conversion of infix formula  to postfix
/**
 * using class InfixPostfix and methods defined in it 
 * we convert user given infix statement to postfix statement */ 
    InfixPostfix infixPostfix(len,forArray);
    string postFix=infixPostfix.getPostFix();
    int l2=postFix.length();

/// Conversion of postfix to parse tree
/**
 * using class PostfixParseTree and its methods 
 * We convert the postfix expression derived from user given infix formula 
 * into a parse tree  */ 
    PostfixParseTree parseTree(l2,postFix);
    Node *rootedBinaryTree=parseTree.getTree();

///obtaining infix representation from parse tree
/**
 * using class TreeInfix and its associated methods 
 * we traverse the parse tree in such a way(in-order) that we
 * get the infix representation.  
*/
    TreeInfix treeInfix(rootedBinaryTree);
    string infixString=treeInfix.getInfix();
///here we print the derived postfix formula
///here we print the infix formula brought by in-order traversal of parse tree
    cout<<"Infix String is: "<<infixString<<endl;

     auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Run Time is " << duration.count() << " microseconds" << endl;

    return 0;
}