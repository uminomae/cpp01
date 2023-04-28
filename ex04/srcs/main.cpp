#include "CppFile.hpp"
#include "ex04.hpp"

// #define DEB

void myPutStr(std::string s1, std::string s2, std::string color){
	std::cout << color << s1 << s2 << RESET_COLOR << std::endl;
}

void open_read_file(std::string fName, std::ifstream &buf){
	buf.open(fName, std::ios_base::in);
	if (buf.fail()){
		std::cout << "fail" << std::endl;
		std::exit(1);
	}
}

void open_write_file(std::string newFileName, std::ofstream &w_file){
	w_file.open(newFileName, std::ios::out);
	if (w_file.fail()){
		std::cout << "fail" << std::endl;
		std::exit(1);
	}
}

int main(int ac, char **av){
	if (ac != 5){
		myPutStr("" ,"invalid value", RED);
		CppFile filename;
		myPutStr("" ,"fName", PINK198);
		std::cin >> filename.fName;
		myPutStr("" ,"s1", PINK198);
		std::cin >> filename.s1;
		myPutStr("" ,"s2", PINK198);
		std::cin >> filename.s2;
		myPutStr("" ,"newFileName", PINK198);
		std::cin >> filename.newFileName;
		filename.sed_is_for_losers();
	}else{
		CppFile filename(av);
		filename.sed_is_for_losers();
	}
#ifdef DEB
	std::cout << filename.fName << " " << filename.s1 
	<< " " << filename.s2 << " " << filename.newFileName <<  std::endl;
#endif
	return 0;
}
