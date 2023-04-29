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

#endif