#include <iostream>
#include <cstring>
#include "InfixPostfix/InfixPostfix.h"
#include "PostfixParseTree/PostfixParseTree.h"
#include "TreeInfix/TreeInfix.h"

using namespace std;



int main(){
    string formula;
    cin>>formula;

    int len=formula.length();
    char forArray[len+1];
    strcpy(forArray,formula.c_str());

    InfixPostfix infixPostfix(len,forArray);
    string postFix=infixPostfix.getPostFix();
    int l2=postFix.length();
    cout<<__LINE__<<endl;

    PostfixParseTree parseTree(l2,postFix);
    Node *rootedBinaryTree=parseTree.getTree();
    cout<<__LINE__<<endl;

    TreeInfix treeInfix(rootedBinaryTree);
    string infixString=treeInfix.getInfix();
    cout<<__LINE__<<endl;

    cout<<"1."<<postFix<<endl;
    cout<<"2."<<infixString<<endl;
    return 0;
}