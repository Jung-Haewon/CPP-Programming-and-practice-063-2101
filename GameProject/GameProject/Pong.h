#ifndef __PONG__
#define __PONG__

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <thread>

class Pong {
public:
	Pong() {};
	~Pong() {};
	void init();
	void gotoxy(int x, int y);
	int title();
	void titleDraw();
	void menuDraw();
	void info();
	void game();
	void gameScore(int s1, int s2);
};

#endif