#include "loot.h"
#include "Windows.h"
#include "vector"
#include <iostream>
#include "fucmouse.h"

void Loot::getposition()
{
	Moc* m1 = new Moc();
	auto position = m1->getposition();
	x = position.first;
	y = position.second;

}
void Loot::looting()
{
	
	std::vector < std::pair<int, int>> offsets = {
		{0, 0}, {32, -32}, {32, 0}, {32, 32}, {0, 32},
		{-32, 32}, {-32, 0}, {-32, -32}, {0, -32}
	};
	keybd_event(VK_LSHIFT, 0, 0, 0);
	for (const auto& offset : offsets)
	{
		SetCursorPos(x + offset.first, y + offset.second);
		mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
		mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
		Sleep(20);
	}
	keybd_event(VK_LSHIFT, 0, KEYEVENTF_KEYUP, 0);
}
