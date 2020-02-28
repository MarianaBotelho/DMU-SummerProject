/*
	This game is under the laws of 'In Cthulhu we trust'
	and 'Don't touch unless you know what you are doing'
*/

#include <iostream>
#include <Windows.h>
#include "Story.h"
#include "Extras.h"

using namespace std;

void Movement(){
	int mov = 0;
	while(mov != 12){
		if(mov == 0)
			mov = Node_1();
		if(mov == 1)
			mov = Node_2();
		if(mov == 2)
			mov = Node_3();
		if(mov == 3)
			mov = Node_4();
		if(mov == 4)
			mov = Node_5();
		if(mov == 5)
			mov = Node_6();
		if(mov == 6)
			mov = Node_7();
		if(mov == 8)
			mov = Node_10();
		if(mov == 9)
			mov = Node_11();
		if(mov == 10)
			mov = Node_13();
		if(mov == 11)
			mov = Node_14();
		if(mov == 13)
			mov = Node_9();
		if(mov == 14)
			mov = Node_15();
		if(mov == 15)
			mov = Node_16();
		if(mov == 16)
			mov = Node_17();
		if(mov == 17)
			mov = Node_18();
	}
}

void MainGameLoop(){
	int choice = 0;
	cout << "Skip prologue?" << endl;
	cout << "1 - Yes" << endl;
	cout << "2 - No" << endl;
	cin >> choice;
	if(choice == 2){
		system("CLS");
		//Prologue
		Prologue();

		//Chapter 1
		ChapterOne();
	}
	Movement();

	system("CLS");
	cout << "\t \t The End" << endl;
	Credits();
	system("PAUSE");
}

void MainMenu(){
	int mainMenuOp;

	do{
		cout << "Welcome to Soulless" << endl;
		cout << "1 - New Game" << endl;
		cout << "2 - How to play" << endl;
		cout << "3 - Extras" << endl;
		cout << "4 - Credits" << endl;
		cout << "5 - Exit Game" << endl;
		cin >> mainMenuOp;
		system("CLS");
		switch (mainMenuOp){
		case 1:
			MainGameLoop();
			system("CLS");
			break;
		case 2:
			HowToPlay();
			system("CLS");
			break;
		case 3:
			Extras();
			system("CLS");
			break;
		case 4:
			Credits();
			system("CLS");
			break;
		case 5:
			cout << "Thank you for playing!" << endl;
			break;
		default:
			cout << "Please, type a valid option" << endl;
			break;
		}
	}while(mainMenuOp != 5);
}

int main(){
	MainMenu();
	system("PAUSE");
	return 0;
}

/*
Comands
system("PAUSE"); - Wait until the user presses something
system("CLS"); - Clears screen
Sleep(X); - Wait X millseconds before the next command
Beep(X,Y); - Play a sound with X frequency for Y millseconds
*/