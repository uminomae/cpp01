#include "CppFile.hpp"

int open_read_file(std::string fName, std::ifstream &buf){
	buf.open(fName, std::ios_base::in);
	if (buf.fail()){
		std::cout << "fail" << std::endl;
		return 1;
	}
	return 0;
}

int open_write_file(std::string newFileName, std::ofstream &w_file){
	w_file.open(newFileName, std::ios::out);
	if (w_file.fail()){
		std::cout << "fail" << std::endl;
		return 1;
	}
	return 0;
}

CppFile::CppFile(char **av)
:fName(av[1]), s1(av[2]), s2(av[3]){
}

int CppFile::Replace(){
	std::ifstream read_buf;
	int ret = 0;
	ret = open_read_file(newFileName, read_buf);
	if (ret == 1)
		return 1;

	std::ofstream w_file;
	ret = open_write_file(newFileName, w_file);
	if (ret == 1)
		return 1;

	std::string line;
	while (!read_buf.eof()){
		std::getline(read_buf, line);
		w_file << line << std::endl;
	}
	return 0;
}

#define DEB1
int main(int ac, char **av){
	if (ac != 4){
		std::cout << "invalid value" << std::endl;
		return 0;
	}
	CppFile filename(av);
	filename.newFileName = "newfile";
#ifdef DEB1
	std::cout << filename.fName << " " << filename.s1 
	<< " " << filename.s2 << std::endl;
#endif

	std::ifstream read_buf;
	int ret;
	ret = open_read_file(filename.fName, read_buf);
	if (ret == 1)
		return 1;

	std::ofstream w_file;
	ret = open_write_file(filename.newFileName, w_file);
	if (ret == 1)
		return 1;

	std::string line;
	while (!read_buf.eof()){
		std::getline(read_buf, line);
		w_file << line << std::endl;
	}
	read_buf.close();
	w_file.close();
	
	// filename.Replace();
}

// It will open the file <filename> 
// and copies its content into a new file <filename>.replace, 
// replacing every occurrence of s1 with s2.

// ./cppm filename a b