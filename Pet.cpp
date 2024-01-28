#include "Pet.h"
#include <iostream>
#include <fstream>
#include <string>
#include <ctime> // for different seeds
#include <cstdlib> // rand

Pet::Pet(){
	eggType = 0;
    robotType = 0;
	run = 0; // <-- yes
    name = "Unknown";
    statPlay = 100;
	statSocialize = 100;
    statEat = 100;
	statBath = 100;
	statSleep = 100;
}

Pet::Pet(int _eggType, int _robotType, int _run, string _name, int _statPlay, int _statSocialize, int _statEat, int _statBath, int _statSleep){
	eggType = _eggType;
    robotType = _robotType;
	run = _run;
    name = _name;
    statPlay = _statPlay;
	statSocialize = _statSocialize;
    statEat = _statEat;
	statBath = _statBath;
	statSleep = _statSleep;
}

Pet::~Pet(){}

void Pet::setEggType(int _eggType){ eggType = _eggType; }
int Pet::getEggType(){ return eggType; }

void Pet::setRobotType(int _robotType){ robotType = _robotType; }
int Pet::getRobotType(){ return robotType; }


void Pet::AdjustStats(int& stat){ 
	if(stat < 0){ stat = 0; }     // if stat went below 0 bring it back to 0
	if(stat > 100){ stat = 100; } // if stat went above 100 bring it back to 100
}

void Pet::Warning(string statName, int stat){
	if(stat == 0){ cout << "\t|  | !!!! WARNING: YOU NEED TO FIX NOW !!!!\n"; }
	else if(stat > 0 && stat < 10){
		cout << "\t|▄ | !!!! WARNING: ";
		cout << name << " is VERY VERY " << statName << " !!!!" << endl;
	}
	else if(stat == 10){
		cout << "\t|▄▄| !!!! WARNING: ";
		cout << name << " is VERY VERY " << statName << " !!!!" << endl;
	}
	else if(stat < 20){
		cout << "\t|▄▄|▄ | !!!! WARNING: ";
		cout << name << " is getting " << statName << " :///" << endl;
	}
	else if(stat == 20) { cout << "\t|▄▄|▄▄|  |  |  |  |  |  |  |  |" << endl; }
	else if(stat < 30)  { cout << "\t|▄▄|▄▄|▄ |  |  |  |  |  |  |  |" << endl; }
	else if(stat == 30) { cout << "\t|▄▄|▄▄|▄▄|  |  |  |  |  |  |  |" << endl; }
	else if(stat < 40)  { cout << "\t|▄▄|▄▄|▄▄|▄ |  |  |  |  |  |  |" << endl; }
	else if(stat == 40) { cout << "\t|▄▄|▄▄|▄▄|▄▄|  |  |  |  |  |  |" << endl; }
	else if(stat < 50)  { cout << "\t|▄▄|▄▄|▄▄|▄▄|▄ |  |  |  |  |  |" << endl; }
	else if(stat == 50) { cout << "\t|▄▄|▄▄|▄▄|▄▄|▄▄|  |  |  |  |  |" << endl; }
	else if(stat < 60)  { cout << "\t|▄▄|▄▄|▄▄|▄▄|▄▄|▄ |  |  |  |  |" << endl; }
	else if(stat == 60) { cout << "\t|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|  |  |  |  |" << endl; }
	else if(stat < 70)  { cout << "\t|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|▄ |  |  |  |" << endl; }
	else if(stat == 70) { cout << "\t|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|  |  |  |" << endl; }
	else if(stat < 80)  { cout << "\t|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|▄ |  |  |" << endl; }
	else if(stat == 80) { cout << "\t|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|  |  |" << endl; }
	else if(stat < 90)  { cout << "\t|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|▄ |  |" << endl; }
	else if(stat == 90) { cout << "\t|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|  |" << endl; }
	else if(stat < 100) { cout << "\t|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|▄ |" << endl; }
	else if(stat == 100){ cout << "\t|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|▄▄|" << endl; }
}

void Pet::next5Runs(){
	int choice = rand() % 2; // either 0 or 1
	int howMuch = (rand() % 15) + 1; // lower all stats by random amount
	cout << "---------------------------------------------------------\n";
	if(choice == 0){ // lowers stats
		statPlay      -= howMuch;
		statSocialize -= howMuch;
		statEat       -= howMuch;
		statBath      -= howMuch;
		statSleep     -= howMuch;
		cout << "-" << howMuch << " <ALL stats>" << endl;
	}
	else if(choice == 1){ // ups the stats
		statPlay      += howMuch;
		statSocialize += howMuch;
		statEat       += howMuch;
		statBath      += howMuch;
		statSleep     += howMuch;
		cout << "+" << howMuch << " <ALL stats>" << endl;
	}
}

// TIME
void Pet::incrementRun(){ run++; }
void Pet::setRun(int _run){ run = _run; }
int Pet::getRun(){ return run;  }

void Pet::setName(string _name){ name = _name; }
string Pet::getName(){ return name; }

void Pet::setStatPlay(int _statPlay){ statPlay = _statPlay; }
int	Pet::getStatPlay() { return statPlay; }
void Pet::setStatSocialize(int _statSocialize){ statSocialize = _statSocialize; }
int	Pet::getStatSocialize() { return statSocialize; }
void Pet::setStatEat(int _statEat){ statEat = _statEat; }
int	Pet::getStatEat(){ return statEat; }
void Pet::setStatBath(int _statBath){ statBath = _statBath; }
int	Pet::getStatBath(){ return statBath; }
void Pet::setStatSleep(int _statSleep){ statSleep = _statSleep; }
int	Pet::getStatSleep(){ return statSleep; }


void Pet::moodPlay(){
	int lowerStat = ((rand() % 4) + 1); // choose stat to lower
	int amount = ((rand() % 6) + 1); // lower amount of random stat
	if(lowerStat == 1){ // down socialize
		statSocialize -= amount;
		cout << "-" << amount << " downed social from ";
	}
	else if(lowerStat == 2){ // down eat
		statEat -= amount;
		cout << "-" << amount << " downed eat from ";
	}
	if(lowerStat == 3){ // down bath
		statBath -= amount;
		cout << "-" << amount << " downed bath from ";
	}
	else if(lowerStat == 4){ // down sleep
		statSleep -= amount;
		cout << "-" << amount << " downed sleep from ";
	}
}
void Pet::moodSocialize(){
	int lowerStat = ((rand() % 4) + 1); // choose stat to lower
	int amount = ((rand() % 6) + 1); // lower amount of random stat
	if(lowerStat == 1){ // down play
		statPlay -= amount;
		cout << "-" << amount << " downed play from ";
	}
	else if(lowerStat == 2){ // down eat
		statEat -= amount;
		cout << "-" << amount << " downed eat from ";
	}
	if(lowerStat == 3){ // down bath
		statBath -= amount;
		cout << "-" << amount << " downed bath from ";
	}
	else if(lowerStat == 4){ // down sleep
		statSleep -= amount;
		cout << "-" << amount << " downed sleep from ";
	}
}
void Pet::moodEat(){
	int lowerStat = ((rand() % 4) + 1); // choose stat to lower
	int amount = ((rand() % 6) + 1); // lower amount of random stat
	if(lowerStat == 1){ // down play
		statPlay -= amount;
		cout << "-" << amount << " downed play from ";
	}
	else if(lowerStat == 2){ // down social
		statSocialize -= amount;
		cout << "-" << amount << " downed social from ";
	}
	if(lowerStat == 3){ // down bath
		statBath -= amount;
		cout << "-" << amount << " downed bath from ";
	}
	else if(lowerStat == 4){ // down sleep
		statSleep -= amount;
		cout << "-" << amount << " downed sleep from ";
	}
}
void Pet::moodBath(){
	int lowerStat = ((rand() % 4) + 1); // choose stat to lower
	int amount = ((rand() % 6) + 1); // lower amount of random stat
	if(lowerStat == 1){ // down play
		statPlay -= amount;
		cout << "-" << amount << " downed play from ";
	}
	else if(lowerStat == 2){ // down social
		statSocialize -= amount;
		cout << "-" << amount << " downed social from ";
	}
	if(lowerStat == 3){ // down eat
		statEat -= amount;
		cout << "-" << amount << " downed eat from ";
	}
	else if(lowerStat == 4){ // down sleep
		statSleep -= amount;
		cout << "-" << amount << " downed sleep from ";
	}
}
void Pet::moodSleep(){
	int lowerStat = ((rand() % 4) + 1); // choose stat to lower
	int amount = ((rand() % 6) + 1); // lower amount of random stat
	if(lowerStat == 1){ // down play
		statPlay -= amount;
		cout << "-" << amount << " downed play from ";
	}
	else if(lowerStat == 2){ // down social
		statSocialize -= amount;
		cout << "-" << amount << " downed social from ";
	}
	if(lowerStat == 3){ // down eat
		statEat -= amount;
		cout << "-" << amount << " downed eat from ";
	}
	else if(lowerStat == 4){ // down bath
		statBath -= amount;
		cout << "-" << amount << " downed bath from ";
	}
}

void Pet::PrintStats() {
	// nerf stats
	int check = 0;
	if(statPlay >= 90 && statSocialize >= 90 &&
	statEat >= 90 && statBath >= 90 && statSleep >= 90){
		statPlay      -= ((rand() % 21) + 40); // subtract 40-60 from stat
		statSocialize -= ((rand() % 21) + 40);
		statEat       -= ((rand() % 21) + 40);
		statBath      -= ((rand() % 21) + 40);
		statSleep     -= ((rand() % 21) + 40);
		check = 1;
	}
	else if(statPlay <= 10 && statSocialize <= 10 &&
	statEat <= 10 && statBath <= 10 && statSleep <= 10){
		statPlay      += ((rand() % 21) + 40); // add 40-60 from stat
		statSocialize += ((rand() % 21) + 40);
		statEat       += ((rand() % 21) + 40);
		statBath      += ((rand() % 21) + 40);
		statSleep     += ((rand() % 21) + 40);
		check = 2;
	}
	
	if(run == 0){ 
		cout << "---------------------------------------------------------\n";
		cout << "Here are " << name << "'s stats:" << endl; 
		cout << "---------------------------------------------------------\n";
	}
	if(run != 0){ 
		cout << "---------------------------------------------------------\n";
		cout << "[" << run << "]\t" << name << "'s stats:\t";
		if(check == 1){ cout << "Lowered stats, got sick..." << endl; check = 0; }
		else if(check == 2){
			cout << "upped stats, got a boost of energy !!" << endl; 
			check = 0;
		}
		else if(check == 0){ cout << endl; }
		cout << "---------------------------------------------------------\n";
	}
	// adjust stats if above 100 or below 0
	if(statPlay      < 0 || statPlay      > 100){ AdjustStats(statPlay); }
	if(statSocialize < 0 || statSocialize > 100){ AdjustStats(statSocialize); }
	if(statEat       < 0 || statEat       > 100){ AdjustStats(statEat); }
	if(statBath      < 0 || statBath      > 100){ AdjustStats(statBath); }
	if(statSleep     < 0 || statSleep     > 100){ AdjustStats(statSleep); }
	
    cout << "| Entertainment: " << statPlay      << "% ";
	Warning("bored", statPlay);
    cout << "| Social Bar:    " << statSocialize << "% ";
	Warning("lonely", statSocialize);
	cout << "| Hunger:        " << statEat       << "% ";
	Warning("hungry", statEat);
	cout << "| cleanliness:   " << statBath      << "% ";
	Warning("smelly", statBath);
	cout << "| Sleep:         " << statSleep     << "% ";
	Warning("sleepyyzz", statSleep);
	cout << "---------------------------------------------------------\n" << endl;
}

void Pet::Save(string fileName) {
    ofstream fout(fileName);
    if(fout.is_open()){
		fout << eggType << endl;
        fout << robotType << endl;
		fout << run << endl;
        fout << name << endl;
        fout << statPlay << endl;
        fout << statSocialize << endl;
        fout << statEat << endl;
		fout << statBath << endl;
		fout << statSleep << endl;
        fout.close();
		cout << "Saved." << endl;
    } else { cout << "Unable to open file: " << fileName << endl; }
}