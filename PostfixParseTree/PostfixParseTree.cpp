//
// Created by sharan on 22/10/18.
//

#include <string>
#include <cstring>
#include <stack>
#include <iostream>
#include "PostfixParseTree.h"
using namespace std;
/// 
PostfixParseTree ::PostfixParseTree(int len, string s) {
    char arr[len+1];
    strcpy(arr,s.c_str());
    Node *root;
    Node *b1,*b2;
    stack <Node *> stack1;
    cout<<"parseTreeClass "<<__LINE__<<endl;

    for (int i = 0; i < len; i++) {
        if((arr[i]!='~')&&(arr[i]!='>')&&(arr[i]!='V')&&(arr[i]!='^')) {
            cout<<"parseTreeClass "<<__LINE__<<endl;

            root=newBranch(arr[i]);
            stack1.push(root);
        }
        else if(arr[i]=='~') {
            cout<<"parseTreeClass "<<__LINE__<<endl;

            root=newBranch(arr[i]);
            cout<<"parseTreeClass "<<__LINE__<<endl;

            if(!stack1.empty()) {
                b1=stack1.top();
                stack1.pop();
            }




            cout<<"parseTreeClass "<<__LINE__<<endl;
            root->left=b1;
            root->right = NULL;
            stack1.push(root);
            cout<<"parseTreeClass "<<__LINE__<<endl;
        }
        else {
            cout<<"parseTreeClass "<<__LINE__<<endl;

            root=newBranch(arr[i]);
            cout<<"parseTreeClass "<<__LINE__<<endl;

            if(!stack1.empty()) {
                b1=stack1.top();
                stack1.pop();
            }

            if(!stack1.empty()){
                b2=stack1.top();
                stack1.pop();
            }


            cout<<"parseTreeClass "<<__LINE__<<endl;
            root->left=b1;
            root->right=b2;
            stack1.push(root);
            cout<<"parseTreeClass "<<__LINE__<<endl;
        }
    }
    cout<<"parseTreeClass "<<__LINE__<<endl;


    root=stack1.top();
    stack1.pop();
    tree=root;
}


bool PostfixParseTree ::isSymbol(char a) {
    if((a=='~') || (a=='V') || (a=='^') || (a=='>') ) {
        return true;
    }
    return false;

}

Node* PostfixParseTree::newBranch(char store) {
    Node* temp=new Node;
    temp->left=NULL;
    temp->right=NULL;
    temp->data=store;
    return temp;
}


Node* PostfixParseTree::getTree() {
    return tree;
}