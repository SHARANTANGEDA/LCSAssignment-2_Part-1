cmake_minimum_required(VERSION 3.12)
project(Assp1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Assp1 main.cpp InfixPostfix/InfixPostfix.cpp InfixPostfix/InfixPostfix.h
        PostfixParseTree/PostfixParseTree.cpp PostfixParseTree/PostfixParseTree.h TreeInfix/TreeInfix.cpp TreeInfix/TreeInfix.h)