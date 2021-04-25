#include <iostream>
#include "Pong.h"
using namespace std;


int main(void)
{
	Pong pong;
	pong.init();

	while(true)
	{
		int screen = pong.title();
		switch (screen)
		{
		case 1: pong.game(); break;
		case 2: pong.info(); break;
		case 3: return 0;
		}
	}
	return 0;
}
