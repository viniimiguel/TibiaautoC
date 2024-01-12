#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "fucmouse.h"
#include "functec.h"
#include "screen.h"
#include "loot.h"


class Cave
{
public:
	void walk();
	void atk();
private:
	Screen* s1 = new Screen();
	Tec* t1 = new Tec();
	Moc* m1 = new Moc();
	Loot* l1 = new Loot();
	std::string caminhoMap = "C:\\Users\\vinicius\\Desktop\\c++\\tibiaauto\\tibiaauto\\tibiaauto\\images\\screenshot.png";
	std::vector<std::string> caminhoMov = { "C:\\Users\\vinicius\\Desktop\\c++\\tibiaauto\\tibiaauto\\tibiaauto\\images\\img_1.png",
		"C:\\Users\\vinicius\\Desktop\\c++\\tibiaauto\\tibiaauto\\tibiaauto\\images\\img_2.png",
		"C:\\Users\\vinicius\\Desktop\\c++\\tibiaauto\\tibiaauto\\tibiaauto\\images\\img_3.png"

	};
	std::string findBattle = "C:\\Users\\vinicius\\Desktop\\c++\\tibiaauto\\tibiaauto\\tibiaauto\\images\\battle.png";
};
