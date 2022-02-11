#include <string>
#include <iostream>
#include <Windows.h>
#include <cstdlib>
using namespace std;
 
#include "Player.h"
#include "Monsters.h"
#include "MonsterCluster.h" ////monster array set up






int main()
{

	Player player;
	//Monsters monster;
	//MonsterCluster enemies;
	//MonsterCluster monsters [3];
	Monsters monsters[3];

	monsters[0] = Monsters(0, "Goblin", 20, 5);
	monsters[1] = Monsters(1, "Wraith", 50, 15);
	monsters[2] = Monsters(2, "Legionare", 80, rand() % 40 +20);

	cout << monsters[1].health;

	/*MonsterCluster::MonsterCluster(int _monsterIndex, string _name, int _health, int _damage) //// delete monster cluster put it in the mosnter class
	{
		monsterList[_monsterIndex].name = _name;
		monsterList[_monsterIndex].health = _health;
		monsterList[_monsterIndex].damage = _damage;
	}*/
	 
	//monsters[0] = MonsterCluster(0, "Goblin", 20, 5 );
	////enemies[1] = MonsterCluster(1, "Wraith", 50, 15);
	////enemies[2] = MonsterCluster(2, "Goblin", 80, rand()% 40 + 20);

	//cout << monsters[0].name;

	/// assigning values to the damagae, health and name for the different monsters manuallu
	/*enemies.monsterList[0].name = "Goblin";
	enemies.monsterList[1].name = "Wraith";
	enemies.monsterList[2].name = "Legionare";
	enemies.monsterList[0].health = 30;
	enemies.monsterList[1].health = 50;
	enemies.monsterList[2].health = 80;
	enemies.monsterList[0].damage = 5;
	enemies.monsterList[1].damage = 15;
	enemies.monsterList[2].damage = rand() % 40 + 20;*/
	player.setDamage(10);


	
	char choice = 'x'; //// variable I use for the input of the player
	bool choiceHelper = false;  ///boolean set as false by defualt, so the while loop can end by setting it to true; used for prevention of pressing other buttons except the required ones
	bool choiceHelperTwo = false;/// does the same as the first one but for another while loop
	bool choiceHelperThree = false; /// same thing




		/// beging of the game intro/ some story
	cout << endl << endl  << endl << endl << endl << endl << endl<< endl;
	cout << "						THE ADVENTURE GAME										" << endl;
	Sleep(200); /// so text can display slower
	system("pause"); /// manually moving to the next block of text so the player can read everything without the whole screen being filled with text
	system("cls"); /// removing the previous displayed text so it could look better

	cout << "In a world of magic and monsters, of people chosen to be special, you are an ordinary adventurer with nothing special about you." << endl;
	Sleep(200);

	
	cout << "But in this world of endless possibilities, even you can become a hero..." << endl;
	Sleep(200);

	cout << endl;
	cout << "But first you have to get through this forest full of monsters, alive... " << endl;
	Sleep(200);

	cout << "Maybe you will even get something special out of it," << endl;
	Sleep(200);

	cout << "Maybe even a special power or an ability so strong, it's basicaly a cheat." << endl;
	Sleep(200);

	cout << " " << endl;
	cout << "But for now just try to survive... " << endl;
	Sleep(200);
	system("pause");
	system("cls");

	cout << "Enter your name adventurer..." << endl; /// prompt for the pllayer to enter their name
	Sleep(200);

	////input name

	cin >> player.name;

	system("cls");

	cout << "Hello, " << player.name <<endl<<  "Let's begin your adventure.... " << endl << "Or more like your strugle to stay alive...  " << endl;
	Sleep(200);
	system("pause");
	system("cls");

	cout << "Name: " << player.name << endl << "Race: Human" << endl << "Health: "<< player.health << endl << "Weapons: dagger" << endl << "Title: None"<< endl;
	system("pause");
	system("cls");

	/*cout << "You enter the forest famous for being a death trap." << "You look around and see only dense forests, you are smart enough to know not to wonder in the forest so you decide to follow the path" << endl
		<< "Press W to move forward or S to go back..."<< endl;*/


	
	
	cout << "You enter the forest famous for being a death trap. "<< endl << endl << "You look around and see only dense forests,"<<endl 
		<<"you are smart enough to know not to wonder in the forest,"<< endl
		<<"so you decide to follow the path" << endl;
	Sleep(200);
	system("pause");
	system("cls");


	while (choiceHelper == false) /// while loop used so the player can not press any other button except one of the two required

	{

		cout << "Press W to move forward or S to go back..." << endl;
		cin >> choice;
		system("cls");
		switch (choice) /// using switch for more friendly code, easier to see what's going on
		{
		case 'w' :
			choiceHelper = true; /// this is the desirable outcome so we change the boolen to true so the loop can end, while we keep it false in the other cases
			cout << "I commend your resolve you walk forward for some time and come to a clearing in the forest..."<< endl;
				Sleep(200);
				system("pause");
				system("cls");
			break;

		case 's':
			
				cout << "You wouldn't turn back now that you have come so far will you?"<<endl <<" How do you expect to be special if you chicken out everytime... " << endl;
				Sleep(200);
				system("pause");
				system("cls");
			break;
		default:
			
			break;
		}
		//if (choice == 'w' || choice == 'W') {                                                                     /////////// while loop so if the player  presses any buttons other than s or r, they are returned
		//																											   /// to the place where they are asked to press w or s until they do						
		//	choiceHelper = true;
		//	cout << "I commend your resolve you walk forward for some time and come to a clearing in the forest";

		//}
		//else if (choice == 's' || choice == 'S') {
		//	choiceHelper = false;
		//	cout << "You wouldn't turn back now that you have come so far will you? How do you expect to be special if you chicken out everytime... " << endl;

		//}
		//else {
		//	choiceHelper = false;
		//}
	}

	cout << "This won't be the FOREST OF DEATH if you didn't encounter a monster or two, now would it?" << endl;
	system("pause");
	system("cls");
	Sleep(400);

	cout  << "You look to your left and see your first obsticle a goblin..." << endl << "Good luck" << endl;
	system("pause");
	system("cls");
	Sleep(400);

	cout << "Oh yeah maybe it's time for me to explain how the combat works isn't it?" <<endl << endl<< "So basicly you have two choices..."<< endl << endl <<"Either FIGHT or RUN" << endl<< endl 
		<< "But do keep in mind that even if you try to run away," << endl
		<< "you aren't guranteed to escape unscrathed." << endl;
	system("pause");
	system("cls");
	Sleep(400);


	cout << "NOW WHAT WILL YOU CHOOOSE" << endl;
	system("pause");
	system("cls");
	Sleep(400);



	

	while (choiceHelperTwo == false) /// while loop used so the player can not press any other button except one of the two required

	{
		cout << "A) FIGHT " << endl << "B) RUN" << endl;
		cin >> choice;
		/*system("pause");
		system("cls");*/
		Sleep(400);

		switch (choice) /// using switch for more friendly code, easier to see what's going on
		{
		case 'a':
			

			cout << "You have encountered your an enemy a " << monsters[0].name << endl;
			cout << "You begin trading blows with the monster..." << endl;
			while (monsters[0].health > 0 && player.getHealth() > 0)
			{

				monsters[0].health = monsters[0].health - player.damage; //// battle code;
				Sleep(100);
				player.health = player.health - monsters[0].damage;
				Sleep(100);

				Sleep(100);

				if (player.health > 0) {

					cout << "Your health has become: " << player.health << endl; /// used if statement so the player health wont go in the negative, also apply death fucntion
					Sleep(300);
				}
				else {
					player.health = 0;
					player.playerDeath();

				}
				if (monsters[0].health > 0) {

					cout << "The monster's health has become: " << monsters[0].health << endl; /// used if statement so the monster health wont go in the negative
					Sleep(300);
				}
				else {
					system("cls");
					cout << "" << endl << "That was amazing... even though it was a weak monster, you did pretty good out there..." << endl << "But the real fun is yet to come..." << endl;
					system("pause");
					system("cls");
					Sleep(400);

					monsters[0].health = 0;
					player.health = player.health + 5;
					cout << "It seems that by defeating the monster you have healed some of your health back..." << endl << "Your health is: " << player.health << endl;
					system("pause");
					system("cls");
					Sleep(400);
				}
				Sleep(200);
				system("pause");


			}
			choiceHelperTwo = true; /// this is the desirable outcome so we change the boolen to true so the loop can end, while we keep it false in the other cases
			break;

		case 'b'://// code in case player decides to run away
			if ((rand() % 2) == 1) { /// uses rand to determine if the player will take damage or not
				player.health = player.health - 5;
						cout << "As I said you are not guranteed to escape unscrathed..." << endl<< endl << "Your health has become : " << player.health << endl;
						system("pause");
						system("cls");
						Sleep(200);
					}
					else {
						cout << "You escaped succesfully..."<< endl <<" It seems luck was on your side.... this time." << endl <<endl << "Your health is: " << player.health << endl;
						system("pause");
						system("cls");
						Sleep(200);
					}

					cout << "I am quite dissapointed in you..." << endl << "Running away from your very first battle... " <<endl <<endl << "I guess you feel so pathetic that you won't try to run away ever again"<<
						endl<<"Am I right?.... "<<endl<<"I am right, right?"<< endl;
					system("pause");
					system("cls");
					Sleep(200);
			
			
			choiceHelperTwo = true;
			break;
		default:
			
			break;
		}
	}

	system("cls");
	cout << "After your first encounter you have to decide which way you would like to go... " << endl<< endl << "You can go either LEFT, RIGHT or FORWARD" << endl<< endl
		<< "Oh and a little piece of advice in different areas live different monsters " << endl <<
		" Oh what type of monsters you may ask..." << endl << "Well you will figure that out yourself... " << endl << endl << "Now where do you choose to go? " << endl;
	system("pause");
	system("cls");
	Sleep(400);

	while (choiceHelperThree == false)
	{

		cout << "Press L to go LEFT..." << endl;
		cout << "Press R to go RIGHT..." << endl;
		cout << "Press F to go FORWARD..." << endl;

		cin >> choice;
		system("cls");

		switch (choice)
		{
		case 'l':
			choiceHelperThree = true;
			cout << "You took the left pathway..." << endl << "You walk for sometime along the path going deeper in to the forest..." << endl << "You start to feel more and more anxious..." << endl
			<<endl	<< "You hear rustling in the bushes, it seems you have encountered yet another monster..." << endl << "Prepare for battle... " << endl;
			system("pause");
			system("cls");
			Sleep(200);

			cout << "You have encountered your an enemy a " << monsters[0].name << endl;
			cout << "You begin trading blows with the monster..." << endl;
			system("pause");
			system("cls");
			Sleep(200);
			while (monsters[0].health > 0 && player.getHealth() > 0)
			{

				monsters[0].health = monsters[0].health - player.damage; //// battle code;
				Sleep(100);
				player.health = player.health - monsters[0].damage;
				Sleep(100);

				Sleep(100);

				if (player.health > 0) {

					cout << "Your health has become: " << player.health << endl; /// used if statement so the player health wont go in the negative, also apply death fucntion
					Sleep(200);
				}
				else {
					player.health = 0;
					player.playerDeath();

				}
				if (monsters[0].health > 0) {

					cout << "The monster's health has become: " << monsters[0].health << endl; /// used if statement so the monster health wont go in the negative
					system("pause");
					system("cls");
					Sleep(200);
				}
				else {
					cout << "The monster health has become 0" << endl;
					system("cls");
					cout << "" << endl << "Congratulations you have defeated the monster.." << endl;
					monsters[0].health = 0;
					player.health = player.health + 5;
					cout << "It seems that by defeating the monster you have healed some of your health back..." << endl << "Your health is " << player.health << endl;
					Sleep(200);
					system("pause");
					system("cls");
					cout << "After defeating the monster, you continue your journey through the FOREST OF DEATH," << endl << "in hopes of getting out alive..." << endl;
					cout << "Name: " << player.name << endl << "Race: Human" << endl << "Health: " << player.health << endl << "Weapons: Dagger" << endl << "Title: None" << endl;
					Sleep(100);
					system("pause");
					system("cls");
					cout << " " << endl << " " << endl << " " << endl << " " << endl << " " << endl;
					cout << "                                              THE ADVENTURE GAME                                 " << endl;
					cout << "                                        CHAPTER ONE FOREST OF DEATH END                                 " << endl;
					Sleep(200);
					

				}
				Sleep(100);
				system("pause");
			}
			break;

		case  'r':
			choiceHelperThree = true;
			cout << "You took the right path which led you deeper in to the forest..." << endl << "As you are walking you notice your suroundings starting to change..." << endl
				<< "Maybe you will encounter a new type of monster, speaking of which what is that over there.... " << endl;
			system("pause");
			system("cls");
			Sleep(200);

			cout << "You have encountered your an enemy a " << monsters[1].name << endl;
			cout << "You begin trading blows with the monster..." << endl;
			while (monsters[1].health > 0 && player.getHealth() > 0)
			{


				monsters[1].health = monsters[1].health - player.damage; //// battle code;
				Sleep(100);
				player.health = player.health - monsters[1].damage;
				Sleep(100);

				Sleep(100);

				if (player.health > 0) {

					cout << "Your health has become: " << player.health << endl; /// used if statement so the player health wont go in the negative, also apply death fucntion
				}
				else {
					player.health = 0;
					player.playerDeath();

				}
				if (monsters[1].health > 0) {

					cout << "The monster's health has become: " << monsters[1].health << endl; /// used if statement so the monster health wont go in the negative
				}
				else {
					cout << "The monster's health has become 0" << endl;
					system("cls");
					cout << "" << endl << "Congratulations you have defeated the opponent.." << endl;
					monsters[1].health = 0;
					player.health = player.health + 5;
					cout << "It seems that by defeating the monster you have healed some of your health back..." << endl << "Your health is " << player.health << endl;
					Sleep(200);
					system("pause");
					system("cls");
					cout << "After defeating the monster, you continue your journey through the FOREST OF DEATH," << endl << "in hopes of getting out alive..." << endl;
					cout << "Name: " << player.name << endl << "Race: Human" << endl << "Health: " << player.health << endl << "Weapons: Dagger" << endl << "Title: None" << endl;
					Sleep(100);
					system("pause");
					system("cls");
					cout << " " << endl << " " << endl << " " << endl << " " << endl << " " << endl;
					cout << "                                             THE ADVENTURE GAME                                 " << endl;
					cout << "                                               CHAPTER ONE END                                 " << endl;
					Sleep(200);
				

				}
				Sleep(100);
				system("pause");
			}
			break;

		case 'f':
			cout << "You decide to go forward, but you feel an omnoius aura coming from deeper in the forest... " << endl << "Are you sure you want to continue? " << endl;
			system("pause");
			system("cls");
			Sleep(200);

			cout << "Press W to continue..." << endl << "Press S to go back.." << endl;
			cin >> choice;

			if (choice == 'w') {
				choiceHelperThree = true;
				cout << "You continue deeper in to the forest..." << endl << "After some time you see a strange looking pond..." << endl << "When you take a closer look you see that there is a  sword in the middle of it..." << endl;
				cout <<endl << "Congratulations, it seems you have a found a stronger weapon.... " << endl<<endl << "But keep in mind that most items here are cursed so it may have a few drawbacks..." <<endl
					<< "Well you will learn as we go" << endl;
				cout <<endl<< "Oh yeah , you remember that omnious aura I was talking about...." << endl << "You just found its source..." << endl << "Good luck...";
				Sleep(200);
				system("pause");
				system("cls");

				player.damage = rand() % 30 + 20;//// because of the new weapon
				cout << "It seems the new sword you obtained will deal a random amount of damage on each strike..." << endl << "Well it is still better than that puny dagger you use..." << endl;
				Sleep(200);
				system("pause");
				system("cls");

				cout << "You have encountered a BOSS MONSTER : " <<monsters[2].name << endl;
				cout << "You begin trading blows with the monster..." << endl;
				Sleep(200);
				system("pause");
				system("cls");
				while (monsters[2].health > 0 && player.getHealth() > 0)
				{


					monsters[2].health = monsters[2].health - player.damage; //// battle code;
					Sleep(100);
					player.health = player.health - monsters[2].damage;
					Sleep(100);

					Sleep(100);

					if (player.health > 0) {

						cout << "Your health has become: " << player.health << endl; /// used if statement so the player health wont go in the negative, also apply death fucntion
					}
					else {
						player.health = 0;
						player.playerDeath();

					}
					if (monsters[2].health > 0) {

						cout << "The monster's health has become: " << monsters[2].health << endl; /// used if statement so the monster health wont go in the negative
					}
					else {
						cout << "The monster's health has become 0" << endl;
						system("cls");
						cout << "" << endl << "Congratulations you have defeated the  BOSS MONSTER  " << endl;
						monsters[2].health = 0;
						player.health = player.health + 5;
						cout << "It seems that by defeating the monster you have healed some of your health back..." << endl << "Your health is " << player.health << endl;
						Sleep(200);
						system("pause");
						
						cout << "" << endl << "The LEGIONARE was the strongest monster in the forest, because of that no other monsters dared to step on  the path it resided on. " << endl;
						Sleep(200);
						system("pause");
						system("cls");
						cout << endl << "You understand where I'm going whit this right? " << endl;
						Sleep(200);
						cout << "Exactly, this path leads directly out of the forest, with no more monsters in your way "<<endl << "Frankly, I didn't believe you had it in you , but you proved me wrong " << endl <<
							"Maybe it was because of your luck, maybe not, either way... " << endl << player.name << " your journey only now begins... " << endl << "I know that one day you WILL become a hero!" << endl;
						Sleep(200);
						system("pause");
						system("cls");
						cout << "Name: " << player.name << endl << "Race: Human" << endl << "Health: " << player.health << endl << "Weapons: Weird sword found in the middle of a pond" << endl<< "Title: Survivour of the forest" << endl;
						Sleep(100);
						system("pause");
						system("cls");
						cout << " " << endl << " " << endl << " " << endl << " " << endl << " " << endl;
						cout << "                                                 THE ADVENTURE GAME                                 " << endl;
						cout << "                                               SECRET ENDING ACHIEVED                                 " << endl;
						Sleep(200);
						system("pause");
					}
					Sleep(100);
					system("pause");




				}
			}
			else {
				
			}
			break;

		default:
			
			break;

	}






	}
}