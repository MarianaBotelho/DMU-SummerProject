#include <iostream>
#include <Windows.h>
#include "Extras.h"

using namespace std;

void Extras(){
	int op;
	do{
		cout << "What would you like to read more about?" << endl;
		cout << "1 - About the characters" << endl;
		cout << "2 - About Borgny" << endl;
		cout << "3 - About the types of magic" << endl;
		cout << "4 - Go back to the main menu" << endl;
		cin >> op;
		system("CLS");
		switch(op){
			case 1:
				cout << "\t \t About the characters" << endl << endl;
				cout << "Aquila" << endl;
				cout << "\t Our main character and the player." << endl;
				cout << "\t She is a Neat Magic user and is known to be easygoing and charming." << endl;
				cout << "\t Loves to read books and will do everything possible for her Kingdom." << endl << endl;

				cout << "Garmur" << endl;
				cout << "\t Aquila's half wolf and companion during every quest." << endl;
				cout << "\t He is known as a bold dog, but a bit undisciplined." << endl;
				cout << "\t Drives the hole castle insane, but brings joy whenever anyone needs." << endl << endl;

				cout << "Olov" << endl;
				cout << "\t Aquila's father, King of Borgny and Fire Magic user." << endl;
				cout << "\t Talks too much but listens to everybody." << endl;
				cout << "\t Because of that, is known as the best Borgny king of all times." << endl << endl;

				cout << "Alanna" << endl;
				cout << "\t Aquila's mother and Queen of Borgny." << endl;
				cout << "\t Is a Water and Air Magic user and Olov's best opposite." << endl;
				cout << "\t Loves to sleep, but takes care of her Kingdom like a warrior." << endl << endl;

				cout << "Abegaelle" << endl;
				cout << "\t Olov's sister. Little is known about her," << endl;
				cout << "\t but is one of few people who know the truth about Andlaust." << endl << endl;

				system("PAUSE");
				system("CLS");
				break;
			case 2:
				cout << "\t \t About Borgny" << endl;
				cout << "Insert description" << endl;
				system("PAUSE");
				system("CLS");
				break;
			case 3:
				cout << "\t \t About the types of magic" << endl;
				cout << "There are four types of physical magic (Fire, Water, Earth and Air) and one" << endl;
				cout << "spiritual (Aether)." << endl;
				cout << "A sixth type is known, Neat, but is extremely rare." << endl;
				cout << "A person can hold up to three types, but the most common is Aether and one" << endl;
				cout << "physical type." << endl << endl;

				cout << "Fire" << endl;
				cout << "\t Insert description" << endl;

				cout << endl;
				cout << "Water" << endl;
				cout << "\t Insert description" << endl;

				cout << endl;
				cout << "Earth" << endl;
				cout << "\t Insert description" << endl;

				cout << endl;
				cout << "Air" << endl;
				cout << "\t Insert description" << endl;

				cout << endl;
				cout << "Aether" << endl;
				cout << "\t Insert description" << endl;

				cout << endl;
				cout << "Neat" << endl;
				cout << "\t Insert description" << endl;

				system("PAUSE");
				system("CLS");
				break;
			case 4:
				break;
			default:
				cout << "Please, type a valid option" << endl;
				break;
		}
	}while(op != 4);
	system("CLS");
}

void HowToPlay(){
	int op;
	cout << "How To Play" << endl << endl;
	cout << "To play Soulless you'll need fingers, a cup of cold beverage and courage." << endl;
	cout << "The game will give you multiple options on your next move." << endl;
	cout << "You just have to type the number relative to your option" << endl;
	cout << "Still don't know how to do it? Simple!" << endl;
	do{
		cout << endl;
		cout << "Would you like to see the game's credits?" << endl;
		cout << "\t 1 - Yes!!!!! Let's do it!" << endl;
		cout << "\t 2 - Meh, I'm ok. Take me back to the main menu" << endl;
		cout << "\t Just type down here which one you want! 1 or 2?" << endl;
		cin >> op;
		switch(op){
			case 1:
				Credits();
				break;
			case 2:
				cout << "Okay =(" << endl;
				break;
			case 3:
				cout << "There was no option 3..." << endl;
				cout << "And yet you pressed it..." << endl;
				cout << "Rebel!" << endl;
				cout << "I'll give you a game hint: The sword is a lie!" << endl << endl;
				system("PAUSE");
				system("CLS");
				break;
			default:
				cout << "This option is not valid!" << endl;
				system("CLS");
				system("PAUSE");
				break;
		}
	}while(op != 2);
	system("PAUSE");
}

void Credits(){
	system("CLS");
	Sleep(500);
	cout << "\t \t Credits" << endl;
	cout << "Game developed for the Science Without Borders Summer Project" << endl;
	Sleep(2000);
	cout << "Project supervisor:" << endl;
	Sleep(1000);
	cout << "\t Professor Jethro Shell" << endl << endl;
	Sleep(1500);
	cout << "Game designer:" << endl;
	Sleep(1000);
	cout << "\t Mariana Botelho" << endl  << endl;
	Sleep(1500);
	cout << "Lead programmer:" << endl;
	Sleep(1000);
	cout << "\t Mariana Botelho" << endl  << endl;
	Sleep(1500);
	cout << "Game tester:" << endl;
	Sleep(1000);
	cout << "\t Mariana Botelho" << endl  << endl;
	Sleep(1500);
	cout << "Quality assurance: " <<endl;
	Sleep(1000);
	cout << "\t Mariana Botelho" << endl  << endl;
	Sleep(1500);
	cout << "Debugger: " <<endl;
	Sleep(1000);
	cout << "\t Mariana Botelho" << endl  << endl;
	Sleep(1500);
	cout << "IT support:" << endl;
	Sleep(1000);
	cout << "\t Mariana Botelho" << endl  << endl;
	Sleep(1500);
	cout << "Coffee/Tea guy:" << endl;
	Sleep(1000);
	cout << "\t Mariana Botelho" << endl  << endl;
	Sleep(1500);
	cout << "This game is under the laws of 'In Cthulhu we trust'" << endl;
	cout << "and 'Don't touch unless you know what you are doing'" << endl << endl;
	Sleep(3000);
	cout << "\t \t A HUEligans Studios Production" << endl;
	Sleep(1500);
	cout << "\t \t Soulless" << endl << endl;
	Sleep(1500);
	system("PAUSE");
	system("CLS");
}