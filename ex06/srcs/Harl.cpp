#include "Harl.hpp"
#include "ex06.hpp"

Harl::Harl(){
	m_FP[0] = &Harl::debug;
	m_FP[1] = &Harl::info;
	m_FP[2] = &Harl::warning;
	m_FP[3] = &Harl::error;
	m_FP[4] = &Harl::other;

	Level[0] = "DEBUG";
	Level[1] = "INFO";
	Level[2] = "WARNING";
	Level[3] = "ERROR";
}

int Harl::switchOffLevel(char *level){
	std::string level_av = level;
	int i = 0;
	while (i < 4){
		if (Level[i] == level_av)
			return i;
		i++;
	}
	return i;
}

void Harl::filterAndPut(int i){
	if (i == 4)
		putLevel(i);
	else{
		while (i < 4){
			putLevel(i);
			i++;
		}
	}
}

void Harl::putLevel(int i){

	switch (i){
		case 0:
			(this->*m_FP[0])();break;
		case 1:
			(this->*m_FP[1])();break;
		case 2:
			(this->*m_FP[2])();break;
		case 3:
			(this->*m_FP[3])();break;
		default:
			(this->*m_FP[4])();break;
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
		"For the last 20 years, there are people who have been fighting \"Don't be evil!\" Not just google.",
		"この20年間、邪悪になるな! と戦ってきた人々がいます。 グーグルだけではありません。隣の人に聞きましょう。",
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
		"Loveで開発してください。人類の標準ライブラリもプラスプラスです。",
		PINK198
	);
}

void Harl::other(void){
	myPutStr(
		"",
		"[Probably a passing fairy. please don't mind]",
		"おそらくただの妖精です。どうぞお気になさらず",
		RED
	);
}