#include <iostream>
#include <string>
#include <fstream> 	// for I/O handling
#include <cstdlib> 	// for clearing console and using random
#include <ctime> 	// for different seeds
#include <unistd.h> // for sleep() animation
#include <limits>  	// for fail

#include "GameImages.h"
#include "RoboPhanerogam.h" // (1)
#include "RoboCute.h"		// (2)
#include "RoboCat.h"		// (3)
#include "RoboCryptogam.h"	// (4)
#include "RoboRobo.h"		// (5)
#include "RoboDog.h"		// (6)

using namespace std;

int StartMenu();

void Game(string fileName, Pet *robot){
	system("clear");
	string option;
	cout << "---------------------------------------------------------\n\n\n";
	
	if     (robot->getRobotType() == 1){ GameImages("Robot", 1); }
	else if(robot->getRobotType() == 2){ GameImages("Robot", 2); }
	else if(robot->getRobotType() == 3){ GameImages("Robot", 3); }
	else if(robot->getRobotType() == 4){ GameImages("Robot", 4); }
	else if(robot->getRobotType() == 5){ GameImages("Robot", 5); }
	else if(robot->getRobotType() == 6){ GameImages("Robot", 6); }
	robot->PrintStats();
	
    do {
		cout << "what would you like " << robot->getName() << " to do?";
        GameImages("Stats Menu", 0);
		cout << "Enter[1/2/3/4/5/S/M/Q]: "; cin >> option; cout << endl;
        if(option == "1"){
			system("clear");
			robot->incrementRun();
			if((robot->getRun() % 5 == 0) && (robot->getRun() != 0)){
				robot->next5Runs(); 
			}
			else{ 
		cout << "---------------------------------------------------------\n\n"; }
			robot->moodPlay();
			robot->setStatPlay(robot->getStatPlay());
			robot->PrintStats();
		}	
		else if(option == "2"){
			system("clear");
			robot->incrementRun();
			if((robot->getRun() % 5 == 0) && (robot->getRun() != 0)){
				robot->next5Runs(); 
			}
			else{ 
		cout << "---------------------------------------------------------\n\n"; }
			robot->moodSocialize();
			robot->setStatSocialize(robot->getStatSocialize());
			robot->PrintStats();
		}
		else if(option == "3"){
			system("clear");
			robot->incrementRun();
			if((robot->getRun() % 5 == 0) && (robot->getRun() != 0)){
				robot->next5Runs(); 
			}
			else{ 
		cout << "---------------------------------------------------------\n\n"; }
			robot->moodEat();
			robot->setStatEat(robot->getStatEat());
			robot->PrintStats();
		}
		else if(option == "4"){
			system("clear");
			robot->incrementRun();
			if((robot->getRun() % 5 == 0) && (robot->getRun() != 0)){
				robot->next5Runs(); 
			}
			else{ 
		cout << "---------------------------------------------------------\n\n"; }
			robot->moodBath();
			robot->setStatBath(robot->getStatBath());
			robot->PrintStats();
		}
		else if(option == "5"){
			system("clear");
			robot->incrementRun();
			if((robot->getRun() % 5 == 0) && (robot->getRun() != 0)){
				robot->next5Runs(); 
			}
			else{ 
		cout << "---------------------------------------------------------\n\n"; }
			robot->moodSleep();
			robot->setStatSleep(robot->getStatSleep());
			robot->PrintStats();
		}	
		else if(option == "s" || option == "S"){ 
			// moves cursor to row above menu & clears rest console
			cout << "\033[36;1H\033[J"; 
			robot->Save(fileName); 
		}
		else if(option == "m" || option == "M"){ StartMenu(); return; }
		else if(option == "q" || option == "Q"){ return; }
		else{
			// moves cursor to row above menu & clears rest console
			cout << "\033[36;1H\033[J"; 
			cout << "Invalid option." << endl;
		}
    } while (true);
}

Pet* RobotType(int type){
	switch(type){
		case 1: return new RoboPhanerogam();
		case 2: return new RoboCute();
        case 3: return new RoboCat();
		case 4: return new RoboCryptogam();
		case 5: return new RoboRobo();
        case 6: return new RoboDog();
        default: cout << "Invalid!" << endl; return NULL;
    }
}

void Load(){
	system("clear");
    string fname; 
	ifstream fin;
	do {
		cout << "Create new save file:" << endl;
		cout << "- Enter 1 to go back to main menu" << endl;
		cout << "- Warning: case sensitive" << endl;
		cout << "- Don't enter .txt" << endl << endl;
    	cout << "Enter save file name: "; cin >> fname; fname += ".txt";
    	fin.open(fname);
		if(!(fname == "1.txt")){
			if(!fin.is_open()){ 
				system("clear");
				cout << "File not found." << endl; 
			}
			else if(fin.peek() == ifstream::traits_type::eof()){
				system("clear");
				cout << "File is empty!" << endl;
				fin.close(); 
			}
		}
		else if(fname == "1.txt"){ StartMenu(); return; }
	} while (fname != "1.txt" && !fin.is_open());

    // load save file
	Pet* userPet = new Pet();
	int fromFile;
	// egg type
	fin >> fromFile; userPet->setEggType(fromFile);
	// robot type
    fin >> fromFile;
    userPet = RobotType(fromFile);
    if (userPet == NULL) { delete userPet; return; }
    userPet->setRobotType(fromFile); 
	// run
	fin >> fromFile; userPet->setRun(fromFile);
	// name
	fin.ignore();
	string name; getline(fin, name);	userPet->setName(name);
	// stats
    fin >> fromFile; userPet->setStatPlay(fromFile);
	fin >> fromFile; userPet->setStatSocialize(fromFile);
    fin >> fromFile; userPet->setStatEat(fromFile);
	fin >> fromFile; userPet->setStatBath(fromFile);
	fin >> fromFile; userPet->setStatSleep(fromFile);
	
	// start game and pass the file name as well as the robot to the new game
    Game(fname, userPet);
    delete userPet;
}

void NewGame(){
	system("clear");
	cout << "New game:" << endl;
	cout << "- When entering new save file name, don't include .txt" << endl;
	cout << "- WARNING: If you enter an old save file," << endl;
	cout << "  this game will overwrite that content when you save it\n";
	cout << "- Also, the file name is case sensitive!" << endl << endl;
    string fname; cout << "Enter new save file name: "; cin >> fname; 
	fname += ".txt";
    ofstream fout(fname);
    if(!fout.is_open()){ cout << "couldn't create new game file!" << endl; return; }

	// start of animation:
	system("clear");
	for(int i = 1; i <= 23; i++){
		GameImages("Meteor Animation", i); usleep(200000); system("clear");
	}
	GameImages("Friend Notices Meteor", 1); cout.flush(); sleep(5);
	system("clear");
	GameImages("Friend Notices Meteor", 2); cout.flush(); sleep(4);
	system("clear");

	// Choose egg and get random robot
	int newEgg, newRoboPet;
	GameImages("Choose egg", 0); cout.flush();
	do {
	    cout << "Enter egg (1/2): "; cin >> newEgg;
		if(newEgg == 1 || newEgg == 2){ break; }
	    else if(cin.fail()){ // if char entered (used to cause infinite loop)
	        cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n');
	    }
		cout << "Invalid option." << endl;
	} while (true);
	system("clear");

	if		(newEgg == 1){ newRoboPet = ((rand() % 3) + 1); } // 1 - 3
	else if (newEgg == 2){ newRoboPet = ((rand() % 3) + 4); } // 4 - 6
	//cout << "newRoboPet: " << newRoboPet << endl;
	
	// create new robot
	Pet* newRobot = RobotType(newRoboPet);
    if(newRobot == NULL){ delete newRobot; return; }
    newRobot->setRobotType(newRoboPet);

	// name the new robot
	cout << "You chose meteor egg: " << newRobot->getEggType() << endl;
	cout << "OMG the meteor egg opened! A " << newRobot->getName();
	cout << " came out of it!!" << endl;
	cout << "*you're friend took their robot home*" << endl;
	
	if     (newRobot->getRobotType() == 1){ GameImages("Robot", 1); }
	else if(newRobot->getRobotType() == 2){ GameImages("Robot", 2); }
	else if(newRobot->getRobotType() == 3){ GameImages("Robot", 3); }
	else if(newRobot->getRobotType() == 4){ GameImages("Robot", 4); }
	else if(newRobot->getRobotType() == 5){ GameImages("Robot", 5); }
	else if(newRobot->getRobotType() == 6){ GameImages("Robot", 6); }
	string name; cout << "What will you name them? ";  cin >> name;
    newRobot->setName(name);

	// start game and pass the file name as well as the robot to the old game
    Game(fname, newRobot);
    delete newRobot;
}

int StartMenu(){
	string option;
	system("clear");
	GameImages("Start Menu", 0); cout << "Enter: "; cin >> option;
	while(true){
		if		(option == "1"){ Load(); 		  break; } 
		else if (option == "2"){ NewGame(); 	  break; } 
		else if (option == "q" || option == "Q"){ break; } 
		else 	{ cout << "Invalid option, please try again." << endl; }
		cout << "Enter: "; cin >> option;
	}
return 0; }

int main(){
	// load new seed so random doesn't give same thing
	srand(time(NULL)); 
	
	// clear the console screen
	system("clear"); 
	GameImages("Tag", 0); cout.flush(); sleep(3);
	system("clear");
	
	StartMenu();
return 0; }