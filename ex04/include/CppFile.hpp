#ifndef CPPFILE_HPP
#define CPPFILE_HPP

#include <fstream>
#include <iostream>
#include <string>

class CppFile{
public:
	std::string fName;
	std::string s1;
	std::string s2;
	std::string newFileName;
	int Replace();

	CppFile(char **av);
};

#endif