#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	typedef void (Harl::*FuncP)(void);
	FuncP m_FP[4];
	std::string Level[4];
public:
	Harl();
	void complain(std::string level);
};

const std::string PINK170 = "\033[38;5;170m";
const std::string PINK183 = "\033[38;5;183m";
const std::string PINK198 = "\033[38;5;198m";
const std::string PINK201 = "\033[38;5;201m";
const std::string RED = "\033[38;5;52m";
const std::string RESET_COLOR = "\033[m";

void myPutStr(std::string s1, std::string s2, std::string color);

#endif