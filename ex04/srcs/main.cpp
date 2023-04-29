#include "CppFile.hpp"
#include "ex04.hpp"

// #define TEST

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
	CppFile filename;
	filename.fName = "testfile";
	filename.s1 = "aa";
	filename.s2 = "BBBB";
	filename.newFileName = "newfile";
	filename.BuildAndReplase();
#ifdef TEST
	if (ac != 5){
		myPutStr("" ,"invalid value", RED);
		CppFile filename2;
		myPutStr("" ,"fName", PINK198);
		std::cin >> filename2.fName;
		myPutStr("" ,"s1", PINK198);
		std::cin >> filename2.s1;
		myPutStr("" ,"s2", PINK198);
		std::cin >> filename2.s2;
		myPutStr("" ,"newFileName", PINK198);
		std::cin >> filename2.newFileName;
		filename2.BuildAndReplase();
	}else{
		CppFile filename2(av);
		filename2.BuildAndReplase();
	}
#endif
	(void)ac;
	(void)av;
	return 0;
}
