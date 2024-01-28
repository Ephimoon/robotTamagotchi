#include "RoboRobo.h"

#include <iostream>
#include <fstream>
#include <ctime> // for different seeds
#include <cstdlib> // rand
#include <string>
using namespace std;

RoboRobo::RoboRobo() : Pet() {
	eggType = 2;
    robotType = 5;
	run = 0;
    name = "RoboRobo";
	statPlay      = (rand() % 61) + 40; // 40 - 100
	statSocialize = (rand() % 61) + 40;
	statEat	      = (rand() % 61) + 40;
	statBath      = (rand() % 61) + 40;
	statSleep     = (rand() % 61) + 40;
}

RoboRobo::RoboRobo(int _eggType, int _robotType, int _run, string _name, int _statPlay, int _statSocialize, int _statEat, int _statBath, int _statSleep) : Pet(_eggType, _robotType, _run, _name, _statPlay, _statSocialize, _statEat, _statBath, _statSleep){
	run           = _run;
    name          = _name;
    statPlay      = _statPlay;
	statSocialize = _statSocialize;
    statEat       = _statEat;
	statBath      = _statBath;
	statSleep     = _statSleep;
}

RoboRobo::~RoboRobo(){}

void RoboRobo::moodPlay() {
	int randomNum = (rand() % 12) + 1;
    setStatPlay(getStatPlay() + randomNum);
	cout << "+" << randomNum << " upped play from robo" << endl;
	Pet::moodPlay();
	cout << "robo";

	cout << R"(
---------------------------------------------------------

		

		
					  ▄▌▌▌▌▄
	▄▌            ▓▀╩       ║█
	███.         █  █└█  █╜▓  █
	 ███████▌    █  └╙'▄, ╜   █
	  ╙██████     ▀▀▌, ▀▀ ▄▌▀▀
		 ▓            ▓█╙
		 ▀▄▄▄▄▄▄▄▓Γ╙└─    '╙▀    µ
			 ▌   █ █▀ █  █b ██,▓█
			  ▌E▌█▓        ╟█k ¬
				   ╙Æ▄▄▄▄▄▀
					  █▌
					 ║▀ ▓
		
---------------------------------------------------------
	)" << flush << endl;
	cout << name << " had fun scouring the internet!!!" << endl << endl;
}
void RoboRobo::moodSocialize() {
	int randomNum = (rand() % 12) + 1;
    setStatSocialize(getStatSocialize() + randomNum);
	cout << "+" << randomNum << " upped socialize from robo" << endl;
	Pet::moodSocialize();
	cout << "robo";

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
void RoboRobo::moodEat() {
	int randomNum = (rand() % 12) + 1;
    setStatEat(getStatEat() + randomNum);
	cout << "+" << randomNum << " upped eat from robo" << endl;
	Pet::moodEat();
	cout << "robo";

	cout << R"(
---------------------------------------------------------
         
				▄▄▄▄▄▄▄
				▌▌▌▌   ▌
				▀▀▀▀▀▀▀
					,▄,
			   ▌▀▀▀'   ╙▀▓,
	 ▄▄▄     ▐▌           █
	█ ▌ █    ▓   ██   ██  ▄b
	█   █     ▓▌    ╜   ▄▓╜
	 ▀▀          ╠▀█▌▀▀╙
	  ▌▄▄▄▄▄▄╓▄ÆΦΓ▀▀█└└▀Γ¥▄
		 '   ▓ ]█ █▌ ▓█  █
			███─        █▌▀▌
			█  ╙▌     ▄▀  █¬
			 ▌    ├█╙
				  ▀█▀▄
				  ET²┌
---------------------------------------------------------
	)" << flush << endl;
	cout << name << ": *charge charge charge* &^%Thank You&#%" << endl << endl;
}
void RoboRobo::moodBath() {
	int randomNum = (rand() % 12) + 1;
    setStatBath(getStatBath() + randomNum);
	cout << "+" << randomNum << " upped bath from robo" << endl;
	Pet::moodBath();
	cout << "robo";

	cout << R"(
---------------------------------------------------------
         


		
               ,,
       ▀  ▄▀╙    ╙▄
      ▀^ j¬ █  ▐▌ ▓    ▄▄▄,   ▄Æ▀▀▓Æ╫
      ▄▄  ╙¥W▄▌▄M▀    .▄▄▄▄▄ ▓    █ j
          -⌐^▀▀"¬┐    «#Æ▀▀^  ╙╙╜╙▓ j
     ⁿ▀  ▄██ █ █ █▌                '
         █ ▀▄ ,▄▀ █
      Æ      ▓▌
             ""
       

		
       
---------------------------------------------------------
	)" << flush << endl;
	cout << name << ": I can't believe there was so much dust! Ty for blowing it off!!\n\n";
}
void RoboRobo::moodSleep() {
	int randomNum = (rand() % 12) + 1;
    setStatSleep(getStatSleep() + randomNum);
	cout << "+" << randomNum << " upped sleep from robo" << endl;
	Pet::moodSleep();
	cout << "robo";

	cout << R"(
---------------------------------------------------------
		
         			   ²
            			 z
       	POWER OFF     Z       		
            
		   MΓ└└   ┘Σ╦
		 ]▀          ▌
		 ▐▄ ██  ²██ ▄T
		   ╙%═▄█▄∞∩╙
		  ,»-≈╩▀**»,
		 j ╒▄ █ ╓▄ ]µ
		 █▌       ,▀█
		 █  V▄,,,═  █
			  █▌
			 ╡▄,Å

		
---------------------------------------------------------
	)" << flush << endl;
	cout << name << ": zZz²zZzzZz²" << endl << endl;
}