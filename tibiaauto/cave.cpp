#include <iostream>
#include "cave.h"
#include "Windows.h"



void Cave::walk()
{
	while(true)
	{
		s1->screenshotsave(caminhoMap);
		for(int i=0; i < caminhoMov.size(); ++i)
		{
			auto result = s1->locatecenteronscreen(caminhoMap, caminhoMov[i], 0.8);
			if(result.first)
			{
				m1->moveTo(result.second.first, result.second.second, 0);
				m1->click(1, "left");
				Sleep(6000);
				atk();
			}
		}
		
	}
}
void Cave::atk()
{
	auto battle = s1->locateonscreen(caminhoMap, findBattle, 0.8);
	if(battle.first)
	{
		l1->looting();
	}

}

