//
// Created by sharan on 22/10/18.
//

#ifndef ASSP1_INFIXPOSTFIX_H
#define ASSP1_INFIXPOSTFIX_H

#include <string>

using namespace std;
/// defines class that takes input infix and outputs postfix formula
class InfixPostfix {
    string postfix; ///< member variable of class

public:
    InfixPostfix(int len, char arr[]); ///<constructor of class
    int precedence(char a);///<method declaration with return type 
    string getPostFix();///< method declaration  with return type string

};


#endif //ASSP1_INFIXPOSTFIX_H
