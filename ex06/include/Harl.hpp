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
	void other(void);
	typedef void (Harl::*FuncP)(void);
	FuncP m_FP[5];
	std::string Level[4];
public:
	Harl();
	int switchOffLevel(char *level);
	void putLevel(int i);
	void filterAndPut(int i);
};

#endif