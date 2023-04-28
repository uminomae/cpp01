#include "CppFile.hpp"
#include "ex04.hpp"

// #define DEB_FILE

CppFile::CppFile(){
}

CppFile::CppFile(char **av)
:fName(av[1]), s1(av[2]), s2(av[3]), newFileName(av[4]){
}

void CppFile::replaceS1(std::string &line){
	std::string::size_type pos = line.find(s1);
	while (pos != std::string::npos){
		line.erase(pos, s1.size());
		line.insert(pos, s2);
		pos = line.find(s1);
	}
}

void CppFile::makeFile(bool isReplace){
	std::ifstream read_buf;
	open_read_file(fName, read_buf);
	std::ofstream w_file;
	open_write_file(newFileName, w_file);
	while (!read_buf.eof()){
		std::string line;
		if (!std::getline(read_buf, line))
			std::exit(1);
		if (isReplace)
			replaceS1(line);
		w_file << line << std::endl;
	}
	read_buf.close();
	w_file.close();
#ifdef DEB_FILE
	if (!isReplace)
		myPutStr("" ,"Copied the file", PINK198);
#endif
}

void CppFile::replace(){
	makeFile(true);
#ifdef DEB_FILE
	myPutStr("" ,"Replade the file", PINK201);
#endif
}

void CppFile::sed_is_for_losers(){
	makeFile(false);
	replace();
}