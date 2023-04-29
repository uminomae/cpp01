#ifndef CPPFILE_HPP
#define CPPFILE_HPP

#include <string>

class CppFile{
public:
	std::string fName;
	std::string s1;
	std::string s2;
	std::string newFileName;
	CppFile();
	CppFile(char **av);

	void replace();
	void buildFile(bool isReplace);
	void replaceS1(std::string &line);
	void BuildAndReplase();
};

#endif