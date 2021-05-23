#include <iostream>
#include "match.h"
#include "pong.h"
using namespace std;

int pongMain();
int matchMain();
int snakeMain();
int jumpMain();

int main(void) {
	while (true) {
		system("cls");
		int select = 0;

		cout << "1: ��\n2: ī��ã��\n3: �����\n4: ��������\n5: ����" << endl;
		cin >> select;

		switch (select)
		{
		case 1: pongMain(); break;
		case 2: matchMain(); break;
		case 3: snakeMain(); break;
		case 4: jumpMain(); break;
		case 5: return 0;
		}
	}

	return 0;
}

int pongMain() {
	Pong pong;
	pong.init();

	while (true)
	{
		int screen = pong.title();
		switch (screen)
		{
		case 1: pong.game(); break;
		case 2: pong.info(); break;
		case 3: return 0;
		}
	}
}

int matchMain() {
	CardGame* cardgame = new CardGame();
	cardgame->init();
	delete(cardgame);

	return 0;
}

int snakeMain() {
	return 0;
}

int jumpMain() {
	return 0;
}