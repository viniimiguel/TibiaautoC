#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "screen.h"
#include "functec.h"


class Heal
{
public:
	void healLife();
	void healMana();
private:
	Screen* s1 = new Screen();
	Tec* t1 = new Tec();
	std::string caminhoPasta = "C:\\Users\\vinicius\\Desktop\\c++\\tibiaauto\\tibiaauto\\tibiaauto\\images_heal\\screenshot.png";
	std::vector<std::string> caminhosMana = {"C:\\Users\\vinicius\\Desktop\\c++\\tibiaauto\\tibiaauto\\tibiaauto\\images_heal\\img_mana_alta.png",
		"C:\\Users\\vinicius\\Desktop\\c++\\tibiaauto\\tibiaauto\\tibiaauto\\images_heal\\img_meia_mana.png",
		"C:\\Users\\vinicius\\Desktop\\c++\\tibiaauto\\tibiaauto\\tibiaauto\\images_heal\\img_mana_baixa.png",
		"C:\\Users\\vinicius\\Desktop\\c++\\tibiaauto\\tibiaauto\\tibiaauto\\images_heal\\img_mana_vazia.png"

	};
	std::vector<std::string> caminhosVida = {"C:\\Users\\vinicius\\Desktop\\c++\\tibiaauto\\tibiaauto\\tibiaauto\\images_heal\\img_vida_verde.png",
		"C:\\Users\\vinicius\\Desktop\\c++\\tibiaauto\\tibiaauto\\tibiaauto\\images_heal\\img_vida_quase_a.png",
		"C:\\Users\\vinicius\\Desktop\\c++\\tibiaauto\\tibiaauto\\tibiaauto\\images_heal\\img_vida_amarela.png",
		"C:\\Users\\vinicius\\Desktop\\c++\\tibiaauto\\tibiaauto\\tibiaauto\\images_heal\\img_vida_red.png"
	};

};