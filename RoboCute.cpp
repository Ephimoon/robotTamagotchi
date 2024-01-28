#include "RoboCute.h"

#include <iostream>
#include <fstream>
#include <ctime> // for different seeds
#include <cstdlib> // rand
#include <string>
using namespace std;

RoboCute::RoboCute() : Pet() {
	eggType = 1;
    robotType = 2;
	run = 0;
    name = "RoboCute";
	statPlay      = (rand() % 61) + 40; // 40 - 100
	statSocialize = (rand() % 61) + 40;
	statEat	      = (rand() % 61) + 40;
	statBath      = (rand() % 61) + 40;
	statSleep     = (rand() % 61) + 40;
}

RoboCute::RoboCute(int _eggType, int _robotType, int _run, string _name, int _statPlay, int _statSocialize, int _statEat, int _statBath, int _statSleep) : Pet(_eggType, _robotType, _run, _name, _statPlay, _statSocialize, _statEat, _statBath, _statSleep){
	run           = _run;
    name          = _name;
    statPlay      = _statPlay;
	statSocialize = _statSocialize;
    statEat       = _statEat;
	statBath      = _statBath;
	statSleep     = _statSleep;
}

RoboCute::~RoboCute(){}

void RoboCute::moodPlay() {
	int randomNum = (rand() % 12) + 1;
    setStatPlay(getStatPlay() + randomNum);
	cout << "+" << randomNum << " upped play from cute robo" << endl;
	Pet::moodPlay();
	cout << "cute robo";

	cout << R"(
---------------------------------------------------------
         
                             ▄
                          █████
                          ▌▀▀█
                         ,▌▌▌
                      ║▌▌     ▌▓▄
                     █┐         ╠█
                 █▌,▓█  ▀█   ██  ▓▌▓██
                 █╙  █    ▄.     █
      ▓█▄             █▌  ─▌   ▓█
      ▓██▌              ▌▌▀▀▀▌▀
       ╙███████ ,      ╗▄,    ▄▓▄
           █  ▓▌█    ▀▀    └└    ▓▄▄▄▄
           ▓    └▀▄▓▀   ▓██████   █   ███
           ╙▀▀▀▀▀▀▀█     ████▀╙   ▓
                    ▀▄▄          ▌▀
                        ╙╙▀▀Σ▀▀╙└
---------------------------------------------------------
	)" << flush << endl;
	cout << name << " had fun scouring the internet!!!" << endl << endl;
}
void RoboCute::moodSocialize() {
	int randomNum = (rand() % 12) + 1;
    setStatSocialize(getStatSocialize() + randomNum);
	cout << "+" << randomNum << " upped socialize from cute robo" << endl;
	Pet::moodSocialize();
	cout << "cute robo";

	cout << R"(
---------------------------------------------------------
         
						  ▄▀▀Γ▀▌
	 ▄Ä¥Φ▄               █ ▄▄╗Æ▀
	▓▄▄Æ╗▄¬█              █
		  ╙▀⌐                ███⌐
							  █▀
	 ,▄▀▀╜╜╜▀▀▌            ▌▀╙╙╜▀▄
	█─ ▌▄   ▄  ▓          █ █  ▓─ █ ▄
	█  └ ,  ▀  █       █▌╙█  ,,   ▌ ▀
	 ▀▀▄▄▄▄▄▄▀▀            ▀▄▄▄▄▀▀
	 ,▄▄▄▀»«▄,
	▌ ▌ ╠. ▌  ▌             █▀▀╙▓
   ██▌─ ¬  ▌ ╫▀▀─         ╟▀▌███▌█▓▄
   █  ▀,   ,▀  █          █ █ ██ █
	¬    █                   ╜▀▀╙
		▌,▓
       
---------------------------------------------------------
	)" << flush << endl;
	cout << name << " had fun seeing their robot friend!!!" << endl << endl;
}
void RoboCute::moodEat() {
	int randomNum = (rand() % 12) + 1;
    setStatEat(getStatEat() + randomNum);
	cout << "+" << randomNum << " upped eat from cute robo" << endl;
	Pet::moodEat();
	cout << "cute robo";

	cout << R"(
---------------------------------------------------------
		
				▄▄▄▄▄▄▄
				▌▌▌▌   ▌
				▀▀▀▀▀▀▀
     
        ▌ÆÆÆ           ▓▌█
        █▌▓ ▄          ██▀
        ▌██ █         ▄Æ¥▄▄
        ▀▓▀▀┌       █─     ▀▄
         ▐▌▄,╓▄▄▄█▌▀▌ █  ▓▀ █▀█b
                    ▓▄ └▀  ▓⌐
                      ▀▀▀▀╙
                    ▄▀""⌐"└╙▄
                ██├▌  █████  ▌ ▓█W
                   ▌   ██▌  ,⌐
                     ¬"^²7^└

---------------------------------------------------------
	)" << flush << endl;
	cout << name << ": *charge charge charge* &^%Thank You&#%" << endl << endl;
}
void RoboCute::moodBath() {
	int randomNum = (rand() % 12) + 1;
    setStatBath(getStatBath() + randomNum);
	cout << "+" << randomNum << " upped bath from cute robo" << endl;
	Pet::moodBath();
	cout << "cute robo";

	cout << R"(
---------------------------------------------------------
         
            


		
      «Ä       ██
     '▀`     ▄▀"²▄         ▄,     ╓▄Æ╪╫▄▄
      ,▄  ▄▄█ ▌ ▓ █╫▄      ▄▄▄▄▌`╟    ▓  ▌
            └▄ ▀ ▄\        ▄ÆΦ▀7  ╙╙╙╙▓¬j▄
     AΦ      ▄w▄▄≈                     ─└
         .▓▐¬ ███ └¬╨▓
      ▄     ⁿ-,▓╖▄⌐
       


		
       
---------------------------------------------------------
	)" << flush << endl;
	cout << name << ": I can't believe there was so much dust! Ty for blowing it off!!\n\n";
}
void RoboCute::moodSleep() {
	int randomNum = (rand() % 12) + 1;
    setStatSleep(getStatSleep() + randomNum);
	cout << "+" << randomNum << " upped sleep from cute robo" << endl;
	Pet::moodSleep();
	cout << "cute robo";

	cout << R"(
---------------------------------------------------------
		
         		  ²
					z
		POWER OFF	   Z
					Z
			  ████
			  ╙██
			▌▀▀▀▀▀▄
		   ▌       █
		  █  █  ▓█ ▓▌
		 ╟▌█  "   ▄▌╟█
			╙▀▀▀▀▀
		   ,▀*═»═²▀▄
		 █▀  █████  █
		j█   ▓██▀▀  ▓─
		  ╙²≈w▄▄▄▄«Φ ╙

---------------------------------------------------------
	)" << flush << endl;
	cout << name << ": zZz²zZzzZz²" << endl << endl;
}