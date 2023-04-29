#ifndef EX05_HPP
#define EX05_HPP

#include <iostream>
#include <string>

const std::string PINK170 = "\033[38;5;170m";
const std::string PINK183 = "\033[38;5;183m";
const std::string PINK198 = "\033[38;5;198m";
const std::string PINK201 = "\033[38;5;201m";
const std::string RED = "\033[38;5;52m";
const std::string RESET_COLOR = "\033[m";

void myPutStr(std::string s1, std::string s2, std::string color);
#endif