#include "Harl.hpp"
#include "ex05.hpp"

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
		if (Level[i] == level){
			(this->*m_FP[i])();
			return ;
		}
		i++;
	}
	std::cout << RED << level << " not found" << std::endl;
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
		"For the last 20 years, there are people who have fought against Don't be evil! Let's google together.",
		"この20年間、邪悪になるな! と戦ってきた人達がいます。 隣の人とぐーぐりましょう。 二人は（ry",
		PINK183
	);
}

void Harl::info(void){
	myPutStr(
		"INFO : ",
		"C is not the only tool for fighting evil. The code for P is also important.",
		"C だけが唯一のツールではありません。鼻以外の悪魔とも戦います。 お歌の中に大事な教えがあります。",
		PINK170
	);
}

void Harl::warning(void){
	myPutStr(
		"WARNING : ",
		"Plus plus to C, similarly \"pretty\" should be plus plus.",
		"もうCは卒業です。プラスプラスします。同様に「かわいい」もプラスプラスしてください。",
		PINK201
	);
}

void Harl::error(void){
	myPutStr(
		"ERROR : ",
		"Do Love-driven development. plus plus the standard library of mankind too",
		"Loveで開発してください。人類の標準ライブラリもプラスプラスなんです。",
		PINK198
	);
}
