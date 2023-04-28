#include "Harl.hpp"

Harl::Harl(){
	m_FP[0] = &Harl::debug;
	m_FP[1] = &Harl::info;
	m_FP[2] = &Harl::warning;
	m_FP[3] = &Harl::error;

	Level[0] = "DEBUG";
	Level[1] = "INFO";
	Level[2] = "WARNING";
	Level[3] = "ERROR";
}

void Harl::complain(std::string level){
	int i = 0;
	while (i < 4){
		if (Level[i] == level)
			(this->*m_FP[i])();
		i++;
	}
}

void myPutStr(std::string title, std::string en, std::string ja, std::string color){
	std::cout << color 
	<< title
	<< en
	<< "\n" 
	<< ja
	<< RESET_COLOR << "\n" << std::endl;
}

void Harl::debug(void){
	myPutStr(
		"DEBUG : ",
		"There have been people who have fought evil for the last twenty years. It's not just google.",
		"この20年間、邪悪と戦ってきた人々がいます。 グーグルだけではありません。",
		PINK183
	);
}

void Harl::info(void){
	myPutStr(
		"INFO : ",
		"C is not the only tool for fighting evil. The code for P is also important.",
		"C だけが唯一のツールではありません。鼻以外の悪魔とも戦いましょう。 お歌の中に大事な教えがあります。",
		PINK170
	);
}

void Harl::warning(void){
	myPutStr(
		"WARNING : ",
		"Plus plus to C, similarly \"pretty\" should be plus plus.",
		"もうCは卒業です。プラスプラスし、そして「かわいい」もプラスプラスしてください。",
		PINK201
	);
}

void Harl::error(void){
	myPutStr(
		"ERROR : ",
		"Drive and develop with love. we need the standard library of mankind",
		"Loveで開発してください。人類の標準ライブラリもプラスプラスなんです。",
		PINK198
	);
}
