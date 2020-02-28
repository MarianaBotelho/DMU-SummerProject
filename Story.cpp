#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include "Extras.h"
#include "Story.h"

using namespace std;

bool Battle_Win_1 = FALSE;
bool Battle_Win_2 = FALSE;
bool Battle_Win_3 = FALSE;
bool Key_1 = FALSE;
bool Key_2 = FALSE;
bool Door_2_Unlocked = FALSE;
bool Door_3_Unlocked = FALSE;
bool Andlaust = FALSE;
bool End_Game = FALSE;

void Prologue(){
	cout << "Aquila is the future regent of Borgny," << endl << "a place where magic is widespread and free." << endl;
	cout << "Until..." << endl << endl;
	Sleep(4500);
	system("PAUSE");
	system("CLS");

	Sleep(1000);
	//Beep(100, 1500);
	cout << "*Storm sound*" << endl;
	Sleep(1500);
	cout << "Aquila wakes up in her bedroom with her half wolf, Garmur, looking at the window." << endl;
	Sleep(3500);
	cout << "The storm outside is making the night darker than it was supposed to be." << endl << endl;
	Sleep(3500);
	cout << "*Woof woof*" << endl;
	Sleep(2000);
	cout << "Garmur starts to bark at her." << endl;
	Sleep(2000);
	cout << "Aquila: 'I know, sweetie. We'll never forget it...'" << endl;
	Sleep(3000);
	system("PAUSE");
	system("CLS");

	cout << "\t \t Prologue";
	Sleep(2000);
	system("CLS");

	//Insert compelling story of how magic vanished
	cout << "Two years before..." << endl << endl;
	cout << "The rain was unusual. Olov could feel it. He could hear the owls crying." << endl;
	cout << "The room was getting colder, but Alanna, who held Water and Air Magic, was sleeping." << endl;
	cout << "Olov: 'Alanna, you cooled down the room?'" << endl;
	cout << "Alanna: 'What?'" << endl;
	cout << "Olov: 'Nevermind. Go back to sleep.'" << endl;
	cout << "Olov tryed to heat the room with his Fire Magic." << endl;
	cout << "One try..." << endl;
	cout << "Two tries..." << endl;
	cout << "Three tries..." << endl;
	cout << "He could still feel his magic, but no flames came from it." << endl;
	cout << "After a few more tries, he gave up and went to the castle church." << endl;
	cout << "The rain outside was relentless. Not even the guards were outside." << endl;
	cout << "Odd..." << endl << endl;
	system("PAUSE");
	cout << endl;
	cout << "Olov passed in front of his daughter's room." << endl;
	cout << "Aquila was on a heavy sleep. Something that only her Neat Magic could make." << endl;
	cout << "Her mother loved it." << endl;
	cout << "Even if the world came down, Aquila was able to sleep peacefully." << endl;
	cout << "Before leaving, Garmur, her half wolf, gave him a sad look." << endl;
	cout << "Olov: 'Just sleep Garmur. Tomorrow will be a better day.'" << endl << endl;
	cout << "The church was crowded. Scholars, alchemists, priestesses" << endl;
	cout << "and others were gathered." << endl;
	cout << "Looked like the hole castle decided to come." << endl;
	cout << "Abegaelle, Olov's sister, was talking with a few scholars." << endl;
	cout << "Abegaelle: 'We weren't expecting you here, Your Magesty.'" << endl;
	cout << "Olov: 'Is everything okay, Abegaelle? Why is everyone here?'" << endl;
	cout << "Abegaelle: 'Probably for the same reason as you. We can't reach our magic.'" << endl;
	cout << "Every person in that room seemed older. And desperate." << endl << endl;
	system("PAUSE");
	cout << endl;
	cout << "Olov: 'Do the priestesses know what is happening?'" << endl;
	cout << "Abegaelle: 'Not yet. The scholars think it's some natural" << endl;
	cout << "phenomenon to regulate Magic.'" << endl;
	cout << "Olov: 'You look like you don't believe them.'" << endl;
	cout << "Abegaelle: 'Well, so far I haven't found anything like this in any book.'" << endl;
	cout << "Before he could answer, the floor startet to shake" << endl;
	cout << "and the lights went out..." << endl << endl;
	cout << "Olov felt the emptiness before hearing Alanna screaming outside the door." << endl;
	cout << "She got inside the church, crying rivers." << endl;
	cout << "Alanna: 'I don't feel it. I can't reach it and I don't feel it!'" << endl;
	cout << "Abegaelle: 'It's... Gone...'" << endl;
	cout << "Olov: 'I...'" << endl;
	cout << "But no words could describe how cold Olov felt." << endl;
	cout << "And like that, all the Magic in the kingdom vanished..." << endl << endl;
	system("PAUSE");
}

void ChapterOne(){
	cout << "\t \t Chapter One";
	Sleep(2000);
	system("CLS");

	cout << "The following morning..." << endl;
	cout << "Aquila woke up with Garmur dropping a pile of books from the table." << endl;
	cout << "Aquila: 'No Garmur! Bad boy!'" << endl;
	cout << "She went to gather the books, but an opened one got her attention." << endl;
	cout << "Her favourite one, about Borgny legends." << endl;
	cout << "That book told stories about fantastic creatures and long forgotten goddesses." << endl;
	cout << "But a story about a sword forged with the fire of The Five Dragons kept her" << endl;
	cout << "attention." << endl << endl;
	system("PAUSE");
	cout << endl;
	cout << "In the story, a priestess had a vision of a day that Magic would be taken away" << endl;
	cout << "from every person." << endl;
	cout << "She ordered a sword to be made. One that would keep a portion of the" << endl;
	cout << "Dragons Magic." << endl;
	cout << "It was used by long lost kings and queens to protect their people." << endl;
	cout << "But that sword would only show it's real power when wielded by" << endl;
	cout << "a Neat Magic user." << endl;
	cout << "The legend said that it was used during the Battle of Andlaust, when witches" << endl;
	cout << "tried to steal the sword to abuse it's power." << endl;
	cout << "In that battle, one of the princes was killed and the court decided to bury" << endl;
	cout << "him with the sword, somewhere not to be found." << endl << endl;
	system("PAUSE");
	cout << endl;
	cout << "But Aquila knew where it was." << endl;
	cout << "She had dreamed with Andlaust, The Soulless Sword." << endl;
	cout << "And the castle dungeons, would be the perfect place to hide it..." << endl << endl;
	system("PAUSE");
}

//room
int Node_1(){
	int choice=0;
	system("CLS");
	cout << "You find yourself in your room." << endl;
	cout << "A passage behind the wardrobe leads to the dungeons." << endl;
	cout << "Would you like to take it?" << endl;
	cout << "1 - Yes" << endl;
	cout << "2 - Yes, but first take a flash light" << endl;
	cout << "3 - No, I'll stick to the room" << endl;
	cin >> choice;
	if(choice == 1){
		cout << "You drag the wardrobe and enter the dungeon, but it's too dark to see." << endl;
		system("PAUSE");
		//Node_2();
		return 1;
	}
	if(choice == 2){
		cout << "You enter the dungeon. Garmur by your side." << endl;
		system("PAUSE");
		//Node_3();
		return 2;
	}
	if(choice == 3){
		cout << "You go back to the room and pet Garmur until the day you die." << endl;
		cout << "You are dead." << endl;
		system("PAUSE");
		//Node_1();
		return 0;
	}
	else
		return 0;
}

//flashlight
int Node_2(){
	int choice=0;
	system("CLS");
	//cout << "You drag the wardrobe and enter the dungeon, but it's too dark to see." << endl;
	cout << "Would you like to go back and grab something to light the room?" << endl;
	cout << "1 - Yes, let me grab a flash light" << endl;
	cout << "2 - No. I'll be fine." << endl;
	cin >> choice;
	if(choice == 1){
		cout << "You enter the dungeon. Garmur by your side." << endl;
		system("PAUSE");
		//Node_3();
		return 2;
	}
	if(choice == 2){
		cout << "You walk in the dark with Garmur by your side." << endl;
		cout << "You stumble and fall. You hit your head on a stone." << endl;
		cout << "Garmur eats your body." << endl;
		cout << "You are dead." << endl;
		system("PAUSE");
		//Node_2();
		return 1;
	}
	else
		return 1;
}

//lvl 1 rooms and stair
int Node_3(){
	int choice=0;
	system("CLS");
	//cout << "You enter the dungeon. Garmur by your side." << endl;
	cout << "There is a stair that leads down behind you and three doors," << endl;
	cout << "numbered from 1 to 3." << endl;
	cout << "Where would you like to go?" << endl;
	cout << "1 - Take me back to my room" << endl;
	cout << "2 - I'll take the stairs down" << endl;
	cout << "3 - I'll go to the door number 1" << endl;
	cout << "4 - I'll go to the door number 2" << endl;
	cout << "5 - I'll go to the door number 3" << endl;
	cin >> choice;
	if(choice == 1){
		cout << "You go back to the room and pet Garmur until the day you die." << endl;
		cout << "You are dead." << endl;
		system("PAUSE");
		//Node_3();
		return 2;
	}
	if(choice == 2){
		cout << "You take the stairs down." << endl;
		system("PAUSE");
		//Node_4();
		return 3;
	}
	if(choice == 3){
		cout << "It seems to be unlocked." << endl;
		system("PAUSE");
		//Node_7();
		return 6;
	}
	if(choice == 4){
		if(Key_2 == FALSE){
			cout << "It seems to be locked." << endl;
			system("PAUSE");
			//Node_3();
			return 2;
		}
		else{
			if(Door_2_Unlocked == FALSE){
				system("PAUSE");
				//Node_9();
				return 13;
			}
			else{
				system("PAUSE");
				//Node_13();
				return 10;
			}
		}
	}
	if(choice == 5){
		if(Key_1 == FALSE){
			cout << "It seems to be locked." << endl;
			system("PAUSE");
			//Node_3();
			return 2;
		}
		else{
			if(Door_3_Unlocked == FALSE){
				system("PAUSE");
				//Node_15();
				return 14;
			}
			system("PAUSE");
			//Node_10();
			return 8;
		}
	}
	else
		return 2;
}

//lvl 2 room
int Node_4(){
	int choice=0;
	system("CLS");
	//cout << "You take the stairs down." << endl;
	cout << "You find a single door." << endl;
	cout << "What would you like to do?" << endl;
	cout << "1 - Go to the door" << endl;
	cout << "2 - Go back upstairs" << endl;
	cin >> choice;
	if(choice == 1){
		if(Battle_Win_1 == FALSE){
			cout << "It seems to be unlocked. You open it." << endl;
			system("PAUSE");
			//Node_5();
			return 4;
		}
		else{
			system("PAUSE");
			//Node_6();
			return 5;
		}
	}
	if(choice == 2){
		cout << "You go back upstairs" << endl;
		system("PAUSE");
		//Node_3();
		return 2;
	}
	else
		return 3;
}

//bat and chest
int Node_5(){
	int choice=0, aux = 0;
	system("CLS");
	//cout << "It seems to be unlocked. You open it." << endl;
	cout << "You find a Bat and a chest." << endl;
	cout << "Would you like to battle or flee?" << endl;
	cout << "1 - Battle" << endl;
	cout << "2 - Flee" << endl;
	cin >> choice;
	if(choice == 1){
		do{
			//BATTLE TIME!
			aux = Battle_Node_1();
		}while(aux == 0);
		system("PAUSE");
		//Node_6();
		return 5;
	}
	if(choice == 2){
		cout << "You attempt to flee. The bat comes after you and gives Garmur a bite." << endl;
		cout << "The venom turns Garmur into a killing machine." << endl;
		cout << "Garmur kills the bat and comes after you." << endl;
		cout << "You stumble on a stone. Garmur atacks and eats you." << endl;
		cout << "You are dead." << endl;
		system("PAUSE");
		//Node_5();
		return 4;
	}
	else
		return 4;
}

//chest
int Node_6(){
	int choice=0;
	system("CLS");
	cout << "You see a chest." << endl;
	cout << "Would you like to open it?" << endl;
	cout << "1 - Yes" << endl;
	cout << "2 - No, take me back" << endl;
	cin >> choice;
	if(choice == 1){
		if(Key_1 == FALSE){
			Key_1 = Node_12();
		}
		else{
			cout << "It's empty" << endl;
		}
		system("PAUSE");
		//Node_6();
		return 5;
	}
	if(choice == 2){
		cout << "You go back." << endl;
		system("PAUSE");
		//Node_4();
		return 3;
	}
	else
		return 5;
}

//chest
int Node_7(){
	int choice = 0;
	system("CLS");
	cout << "You find a wooden chest" << endl;
	cout << "What would you like to do?" << endl;
	cout << "1 - Open the chest" << endl;
	cout << "2 - Go back" << endl;
	cin >> choice;
	if(choice == 1){
		cout << "You open the chest" << endl;
		if(Battle_Win_2 == FALSE){
			system("PAUSE");
			//Node_16();
			return 15;
		}
		else{
			if(Key_2 == FALSE){
				Key_2 = Node_12();
			}
			else{
				cout << "It's empty." << endl;
			}
			system("PAUSE");
			//Node_7();
			return 6;
		}
	}
	if(choice == 2){
		cout << "You go back." << endl;
		system("PAUSE");
		//Node_3();
		return 2;
	}
	else
		return 6;
}

//door 2
int Node_9(){
	int choice = 0;
	system("CLS");
	cout << "Looks like one of your keys fits in" << endl;
	cout << "Would you like to try it?" << endl;
	cout << "1 - Yes" << endl;
	cout << "2 - No, I'll do something else" << endl;
	cin >> choice;
	if(choice == 1){
		//cout << "The key opens the door" << endl;
		Door_2_Unlocked = TRUE;
		system("PAUSE");
		return 16;
	}	
	if(choice == 2){
		system("PAUSE");
		//Node_3();
		return 2;
	}
	else{
		system("PAUSE");
		//Node_9();
		return 13;
	}
}

//chest
int Node_10(){
	int choice=0;
	system("CLS");
	cout << "You see a chest." << endl;
	cout << "Would you like to open it?" << endl;
	cout << "1 - Yes" << endl;
	cout << "2 - No, take me back" << endl;
	cin >> choice;
	if(choice == 1){
		cout << "You open the chest." << endl;
		cout << "It's empty" << endl;
		system("PAUSE");
		//Node_10();
		return 8;
	}
	if(choice == 2){
		cout << "You go back." << endl;
		system("PAUSE");
		//Node_3();
		return 2;
	}
	else
		//Node_10();
		return 8;
}

//end
int Node_11(){
	system("CLS");
	cout << "You defeated the spider." << endl;
	cout << "Andlaust now belongs to you." << endl;
	cout << "And the quest to save the kingdom has just started..." << endl;
	system("PAUSE");
	return 12;
}

//chest and key
bool Node_12(){
	int choice = 0;
	system("CLS");
	cout << "You open the chest." << endl;
	cout << "A single key lays on the bottom." << endl;
	cout << "Would you like to take it?" << endl;
	cout << "1 - Yes" << endl;
	cout << "2 - No" << endl;
	cin >> choice;
	if(choice == 1)
		return TRUE;
	else
		return FALSE;
}

//room 2 and stair
int Node_13(){
	int choice = 0;
	system("CLS");
	cout << "You find an empty room." << endl;
	cout << "You see a stair on the other side." << endl;
	cout << "What would you like to do?" << endl;
	cout << "1 - Go down the stairs" << endl;
	cout << "2 - Go back" << endl;
	cin >> choice;
	if(choice == 1){
		cout << "You take the stairs down" << endl;
		system("PAUSE");
		//Node_14();
		return 11;
	}
	if(choice == 2){
		system("PAUSE");
		//Node_3();
		return 2;
	}
	else
		//Node_13();
		return 10;
}

//last room
int Node_14(){
	int choice = 0, aux = 0;
	system("CLS");
	cout << "Shining at the end of the room, you see your prize." << endl;
	cout << "Andlaust rests, shining on a pedestal." << endl;
	cout << "Garmur barks at it." << endl;
	cout << "Would you like to take it?" << endl;
	cout << "1 - YES!! Finally!!" << endl;
	cout << "2 - Nah, I'm okay" << endl;
	cin >> choice;
	if(choice == 1){
		cout << "You pick up Andlaust." << endl;
		cout << "The sword starts to glow with all possible colors." << endl;
		cout << "You start to feel your power deep inside, but unreachable." << endl;
		Andlaust = TRUE;
	}
	cout << "Suddenly you hear a crack." << endl;
	cout << "A giant spider appear." << endl;
	cout << "Will you fight or flee?" << endl;
	cout << "1 - Fight!!" << endl;
	cout << "2 - Flee..." << endl;
	cin >> choice;
	if(choice == 1){
		do{
			//BATTLE TIME!!
			aux = Battle_Node_3();
		}while(aux == 0);
		if(Battle_Win_3 == TRUE){
			End_Game = TRUE;
			//End Game!!
			//Node_11();
			system("PAUSE");
			return 9;
		}
	}
	if(choice == 2){
		cout << "You attempt to flee." << endl;
		cout << "While trying to run, you get caught on the spider web." << endl;
		cout << "Garmur tries to help you, but also get caught." << endl;
		cout << "You both die slowly and painfully." << endl;
		system("PAUSE");
		//Node_14();
		return 11;
	}
	else
		//Node_14();
		return 11;
}

//door 3
int Node_15(){
	int choice = 0;
	system("CLS");
	cout << "Looks like one of your keys fits in" << endl;
	cout << "Would you like to try it?" << endl;
	cout << "1 - Yes" << endl;
	cout << "2 - No, I'll do something else" << endl;
	cin >> choice;
	if(choice == 1){
		//cout << "The key opens the door" << endl;
		Door_3_Unlocked = TRUE;
		system("PAUSE");
		//Node_18();
		return 17;
	}	
	if(choice == 2){
		system("PAUSE");
		//Node_3();
		return 2;
	}
	else
		return 14;
}

//chest and rat
int Node_16(){
	system("CLS");
	int choice = 0, aux = 0;
	cout << "A rat comes out of it!" << endl;
	cout << "Would you like to battle or flee?" << endl;
	cout << "1 - Battle" << endl;
	cout << "2 - Flee" << endl;
	cin >> choice;
	if(choice == 1){
		do{
			//BATTLE TIME!
			aux = Battle_Node_2();
		}while(aux == 0);
		system("PAUSE");
		//Node_7();
		return 6;
	}
	if(choice == 2){
		cout << "You attempt to flee. The rat comes after you." << endl;
		//cout << "The venom turns Garmur into a killing machine." << endl;
		//cout << "Garmur kills the bat and comes after you." << endl;
		//cout << "You stumble on a stone. Garmur atacks and eats you." << endl;
		cout << "You are dead." << endl;
		system("PAUSE");
		//Node_7();
		return 6;
	}
	else
		return 15;
}

//door 2
int Node_17(){
	int choice = 0;
	system("CLS");
	cout << "The key opens the door" << endl;
	cout << "Would you like to go in?" << endl;
	cout << "1 - Yes" << endl;
	cout << "2 - No" << endl;
	cin >> choice;
	if(choice == 1){
		system("PAUSE");
		//Node_13();
		return 10;
	}
	if(choice == 2){
		system("PAUSE");
		//Node_3();
		return 2;
	}
	else
		return 16;
}

//door3
int Node_18(){
	int choice = 0;
	system("CLS");
	cout << "The key opens the door" << endl;
	cout << "Would you like to go in?" << endl;
	cout << "1 - Yes" << endl;
	cout << "2 - No" << endl;
	cin >> choice;
	if(choice == 1){
		system("PAUSE");
		//Node_10();
		return 8;
	}
	if(choice == 2){
		system("PAUSE");
		//Node_3();
		return 2;
	}
	else
		//Node_18();
		return 17;
}


//Bat battle
int Battle_Node_1(){
	int choice = 0;
	int enemy_hp = 50, enemy_attack_power = 0, enemy_attack = 0, enemy_block = 0;
	int garmur_hp = 50, garmur_attack_power = 0, garmur_attack = 0, garmur_block = 0;
	int player_hp = 100, player_attack_power = 0, player_block = 0;
	bool player_scream = FALSE;
	
	system("CLS");
	while(enemy_hp > 0){
		cout << "\t \t Battle Time!" << endl;
		cout << "The Bat has " << enemy_hp << "hp" << endl;
		cout << "You have " << player_hp << "hp" << endl;
		cout << "Garmur has " << garmur_hp << "hp" << endl;
		if(player_hp <= 0){
			cout << "You are dead." << endl;
			//Node_5();
			return 0;
		}
		if(garmur_hp <= 0){
			cout << "You let Garmur die" << endl;
			//Node_5();
			return 0;
		}

		//player turn
		player_scream = FALSE;
		player_block = 0;
		player_attack_power = 0;
		cout << "What will be your next move?" << endl;
		cout << "1 - Scream for Garmur to attack" << endl;
		cout << "2 - Block" << endl;
		cout << "3 - Attack" << endl;
		cin >> choice;
		if(choice == 1){
			cout << "You scream for Garmur" << endl;
			player_scream = TRUE;
		}
		if(choice == 2){
			cout << "You will block the bat's next attack" << endl;
			player_block = rand()%11;
		}
		if(choice == 3){
			cout << "You attack the bat" << endl;
			player_attack_power = rand()%16;
			cout << "You deal " << player_attack_power << " points of damage." << endl;
			cout << "The bat blocks " << enemy_block << " points." << endl;
			player_attack_power -= enemy_block;
			if(player_attack_power < 0)
				player_attack_power = 0;
			enemy_hp -= player_attack_power;
			if(enemy_hp < 0)
				enemy_hp = 0;
		}

		//Garmur turn
		garmur_block = 0;
		garmur_attack_power=0;
		garmur_attack = rand()%3;
		//1 to 3 chance of Garmur attacking by it's own choice
		if((garmur_attack == 0) || (player_scream == TRUE)){
			cout << "Garmur attacks the bat" << endl;
			garmur_attack_power = rand()%11;
			cout << "Garmur deal " << garmur_attack_power << " points of damage." << endl;
			cout << "The bat blocks " << enemy_block << " points." << endl;
			garmur_attack_power -= enemy_block;
			if(garmur_attack_power < 0)
				garmur_attack_power = 0;
			enemy_hp -= garmur_attack_power;
			if(enemy_hp < 0)
				enemy_hp = 0;
		}
		else{
			cout << "Garmur will block the bat's next attack." << endl;
			garmur_block = rand()%11;
		}

		//Enemy turn
		enemy_attack_power = 0;
		enemy_block = 0;
		enemy_attack = rand()%3;
		//Attack player
		if(enemy_attack == 0){
			cout << "The bat attacks the player." << endl;
			enemy_attack_power = rand()%11;
			cout << "The bat deals " << enemy_attack_power << " points of damage." << endl;
			cout << "You block " << player_block << " points." << endl;
			enemy_attack_power -= player_block;
			if(enemy_attack_power < 0)
				enemy_attack_power =0;
			player_hp -= enemy_attack_power;
		}
		//Attack Garmur
		if(enemy_attack == 1){
			cout << "The bat attacks Garmur." << endl;
			enemy_attack_power = rand()%11;
			cout << "The bat deals " << enemy_attack_power << " points of damage." << endl;
			cout << "Garmur blocks " << garmur_block << " points." << endl;
			enemy_attack_power -= garmur_block;
			if(enemy_attack_power < 0)
				enemy_attack_power = 0;
			garmur_hp -= enemy_attack_power;
			if(garmur_hp < 0)
				garmur_hp = 0;
		}
		//block
		if(enemy_attack == 2){
			cout << "The bat will block the next attack." << endl;
			enemy_block = rand()%11;
		}
		system("PAUSE");
		system("CLS");
	}
	if(enemy_hp <= 0){
		cout << "The bat died." << endl;
		Battle_Win_1 = TRUE;
		return 1;
	}
}

//Rat battle
int Battle_Node_2(){
	int choice = 0;
	int enemy_hp = 50, enemy_attack_power = 0, enemy_attack = 0, enemy_block = 0;
	int garmur_hp = 50, garmur_attack_power = 0, garmur_attack = 0, garmur_block = 0;
	int player_hp = 100, player_attack_power = 0, player_block = 0;
	bool player_scream = FALSE;
	
	system("CLS");
	while(enemy_hp > 0){
		cout << "\t \t Battle Time!" << endl;
		cout << "The Rat has " << enemy_hp << "hp" << endl;
		cout << "You have " << player_hp << "hp" << endl;
		cout << "Garmur has " << garmur_hp << "hp" << endl;
		if(player_hp <= 0){
			cout << "You are dead." << endl;
			//Node_7();
			return 0;
		}
		if(garmur_hp <= 0){
			cout << "You let Garmur die" << endl;
			//Node_7();
			return 0;
		}
		//player turn
		player_scream = FALSE;
		player_block = 0;
		player_attack_power = 0;
		cout << "What will be your next move?" << endl;
		cout << "1 - Scream for Garmur to attack" << endl;
		cout << "2 - Block" << endl;
		cout << "3 - Attack" << endl;
		cin >> choice;
		if(choice == 1){
			cout << "You scream for Garmur" << endl;
			player_scream = TRUE;
		}
		if(choice == 2){
			cout << "You will block the rat's next attack" << endl;
			player_block = rand()%11;
		}
		if(choice == 3){
			cout << "You attack the rat" << endl;
			player_attack_power = rand()%16;
			cout << "You deal " << player_attack_power << " points of damage." << endl;
			cout << "The rat blocks " << enemy_block << " points." << endl;
			player_attack_power -= enemy_block;
			if(player_attack_power < 0)
				player_attack_power = 0;
			enemy_hp -= player_attack_power;
			if(enemy_hp < 0)
				enemy_hp = 0;
		}

		//Garmur turn
		garmur_block = 0;
		garmur_attack_power=0;
		garmur_attack = rand()%3;
		//1 to 3 chance of Garmur attacking by it's own choice
		if((garmur_attack == 0) || (player_scream == TRUE)){
			cout << "Garmur attacks the rat" << endl;
			garmur_attack_power = rand()%11;
			cout << "Garmur deal " << garmur_attack_power << " points of damage." << endl;
			cout << "The rat blocks " << enemy_block << " points." << endl;
			garmur_attack_power -= enemy_block;
			if(garmur_attack_power < 0)
				garmur_attack_power = 0;
			enemy_hp -= garmur_attack_power;
			if(enemy_hp < 0)
				enemy_hp = 0;
		}
		else{
			cout << "Garmur will block the rat's next attack." << endl;
			garmur_block = rand()%11;
		}

		//Enemy turn
		enemy_attack_power = 0;
		enemy_block = 0;
		enemy_attack = rand()%3;
		//Attack player
		if(enemy_attack == 0){
			cout << "The rat attacks the player." << endl;
			enemy_attack_power = rand()%11;
			cout << "The rat deals " << enemy_attack_power << " points of damage." << endl;
			cout << "You block " << player_block << " points." << endl;
			enemy_attack_power -= player_block;
			if(enemy_attack_power < 0)
				enemy_attack_power =0;
			player_hp -= enemy_attack_power;
		}
		//Attack Garmur
		if(enemy_attack == 1){
			cout << "The rat attacks Garmur." << endl;
			enemy_attack_power = rand()%11;
			cout << "The rat deals " << enemy_attack_power << " points of damage." << endl;
			cout << "Garmur blocks " << garmur_block << " points." << endl;
			enemy_attack_power -= garmur_block;
			if(enemy_attack_power < 0)
				enemy_attack_power = 0;
			garmur_hp -= enemy_attack_power;
			if(garmur_hp < 0)
				garmur_hp = 0;
		}
		//block
		if(enemy_attack == 2){
			cout << "The rat will block the next attack." << endl;
			enemy_block = rand()%11;
		}
		system("PAUSE");
		system("CLS");
	}
	if(enemy_hp <= 0){
		cout << "The rat died." << endl;
		Battle_Win_2 = TRUE;
		return 1;
	}
}

//Boss battle
int Battle_Node_3(){
	int choice = 0;
	int enemy_hp = 300, enemy_attack_power = 0, enemy_attack = 0, enemy_block = 0;
	int garmur_hp = 250, garmur_attack_power = 0, garmur_attack = 0, garmur_block = 0;
	int player_hp = 500, player_attack_power = 0, player_block = 0;
	bool player_scream = FALSE;
	
	system("CLS");
	while(enemy_hp > 0){
		cout << "\t \t Battle Time!" << endl;
		cout << "The spider has " << enemy_hp << "hp" << endl;
		cout << "You have " << player_hp << "hp" << endl;
		cout << "Garmur has " << garmur_hp << "hp" << endl;
		if(player_hp <= 0){
			cout << "You are dead." << endl;
			//Node_14();
			return 0;
		}
		if(garmur_hp <= 0){
			cout << "You let Garmur die" << endl;
			//Node_14();
			return 0;
		}
		//player turn
		player_scream = FALSE;
		player_block = 0;
		player_attack_power = 0;
		cout << "What will be your next move?" << endl;
		cout << "1 - Scream for Garmur to attack" << endl;
		cout << "2 - Block" << endl;
		cout << "3 - Attack" << endl;
		cin >> choice;
		if(choice == 1){
			cout << "You scream for Garmur" << endl;
			player_scream = TRUE;
		}
		if(choice == 2){
			cout << "You will block the spider's next attack" << endl;
			player_block = rand()%21;
		}
		if(choice == 3){
			cout << "You attack the spider" << endl;
			player_attack_power = rand()%16;
			if(Andlaust == TRUE)
				player_attack_power += 30;
			cout << "You deal " << player_attack_power << " points of damage." << endl;
			cout << "The spider blocks " << enemy_block << " points." << endl;
			player_attack_power -= enemy_block;
			if(player_attack_power < 0)
				player_attack_power = 0;
			enemy_hp -= player_attack_power;
			if(enemy_hp < 0)
				enemy_hp = 0;
		}
		
		//Garmur turn
		garmur_block = 0;
		garmur_attack_power=0;
		garmur_attack = rand()%3;
		//1 to 3 chance of Garmur attacking by it's own choice
		if((garmur_attack == 0) || (player_scream == TRUE)){
			cout << "Garmur attacks the spider" << endl;
			garmur_attack_power = rand()%11;
			if(Andlaust == TRUE)
				garmur_attack_power += 10;
			cout << "Garmur deal " << garmur_attack_power << " points of damage." << endl;
			cout << "The spider blocks " << enemy_block << " points." << endl;
			garmur_attack_power -= enemy_block;
			if(garmur_attack_power < 0)
				garmur_attack_power = 0;
			enemy_hp -= garmur_attack_power;
			if(enemy_hp < 0)
				enemy_hp = 0;
		}
		else{
			cout << "Garmur will block the spider's next attack." << endl;
			garmur_block = rand()%21;
		}


		//Enemy turn
		enemy_attack_power = 0;
		enemy_block = 0;
		enemy_attack = rand()%3;
		//Attack player
		if(enemy_attack == 0){
			cout << "The spider attacks the player." << endl;
			enemy_attack_power = rand()%11;
			if(Andlaust == FALSE)
				enemy_attack_power += 50;
			cout << "The spider deals " << enemy_attack_power << " points of damage." << endl;
			cout << "You block " << player_block << " points." << endl;
			enemy_attack_power -= player_block;
			if(enemy_attack_power < 0)
				enemy_attack_power =0;
			player_hp -= enemy_attack_power;
			if(player_hp < 0)
				player_hp = 0;
		}
		//Attack Garmur
		if(enemy_attack == 1){
			cout << "The spider attacks Garmur." << endl;
			enemy_attack_power = rand()%11;
			if(Andlaust == FALSE)
				enemy_attack_power += 50;
			cout << "The spider deals " << enemy_attack_power << " points of damage." << endl;
			cout << "Garmur blocks " << garmur_block << " points." << endl;
			enemy_attack_power -= garmur_block;
			if(enemy_attack_power < 0)
				enemy_attack_power = 0;
			garmur_hp -= enemy_attack_power;
			if(garmur_hp < 0)
				garmur_hp = 0;
		}
		//block
		if(enemy_attack == 2){
			cout << "The spider will block the next attack." << endl;
			enemy_block = rand()%21;
		}
		system("PAUSE");
		system("CLS");
	}
	if(enemy_hp <= 0){
		cout << "The spider died." << endl;
		Battle_Win_3 = TRUE;
		return 1;
	}
}