// Copyright (c) 2021 Alexey Klimov
//
// Created by Alexey on 11.01.2021.
//
#include <iostream>
#include <string>

#include "../include/Postfix.h"

int main() {
  std::string infix;
  std::cin >> infix;

  std::cout << "Infix expression:   " << infix << std::endl
            << "Postfix expression: " << infix2postfix(infix) << std::endl;

  return 0;
}
