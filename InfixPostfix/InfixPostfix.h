//
// Created by sharan on 22/10/18.
//

#ifndef ASSP1_INFIXPOSTFIX_H
#define ASSP1_INFIXPOSTFIX_H

#include <string>

using namespace std;

class InfixPostfix {
    string postfix;

public:
    InfixPostfix(int len, char arr[]);
    int precedence(char a);
    string getPostFix();

};


#endif //ASSP1_INFIXPOSTFIX_H
