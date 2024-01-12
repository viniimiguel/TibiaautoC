#include "heal.h"
#include <vector>
#include "iostream"
#include "screen.h"
#include <Windows.h>

void Heal::healMana()
{
	bool controle = false;
	
	while(!controle)
	{
		Sleep(50);
		s1->screenshotsave(caminhoPasta);
		for(int i=0; i<=caminhosMana.size(); ++i)
		{
			auto result = s1->locatecenteronscreen(caminhoPasta,caminhosMana[i], 0.8);
			if (result.first)
			{

				t1->pressansy(0x70, 1);
				std::cout << "imagem encontrada mana" << i << std::endl;
				controle = true;
			}
			else if(i == 3)
			{
				std::cout << i << std::endl;
				i = 0;
				std::cout << "i virou 0 :D" << std::endl;
			}
			else
			{
				std::cout << i << std::endl;
				Beep(100, 50);
			}
		}
	}
}
void Heal::healLife()
{
	bool controle = false;

	while (!controle)
	{
		Sleep(50);
		s1->screenshotsave(caminhoPasta);
		for (int i = 0; i <= caminhosMana.size(); ++i)
		{
			auto result = s1->locatecenteronscreen(caminhoPasta, caminhosVida[i], 0.8);
			if (result.first)
			{

				t1->pressansy(0x70, 1);
				std::cout << "imagem encontrada" << i << std::endl;
				controle = true;
			}
			else if (i == 3)
			{
				std::cout << i << std::endl;
				i = 0;
				std::cout << "i virou 0 :D" << std::endl;
			}
			else
			{
				std::cout << i << std::endl;
				Beep(100, 50);
			}
		}
	}
}



