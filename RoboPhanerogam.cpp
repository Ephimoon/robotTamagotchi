#include "RoboPhanerogam.h"

#include <iostream>
#include <fstream>
#include <ctime> // for different seeds
#include <cstdlib> // rand
#include <string>
using namespace std;

RoboPhanerogam::RoboPhanerogam() : Pet() {
	eggType = 1;
    robotType = 1;
	run = 0;
    name = "RoboPhanerogam";
	statPlay      = (rand() % 61) + 40; // 40 - 100
	statSocialize = (rand() % 61) + 40;
	statEat	      = (rand() % 61) + 40;
	statBath      = (rand() % 61) + 40;
	statSleep     = (rand() % 61) + 40;
}

RoboPhanerogam::RoboPhanerogam(int _eggType, int _robotType, int _run, string _name, int _statPlay, int _statSocialize, int _statEat, int _statBath, int _statSleep) : Pet(_eggType, _robotType, _run, _name, _statPlay, _statSocialize, _statEat, _statBath, _statSleep){
	run           = _run;
    name          = _name;
    statPlay      = _statPlay;
	statSocialize = _statSocialize;
    statEat       = _statEat;
	statBath      = _statBath;
	statSleep     = _statSleep;
}

RoboPhanerogam::~RoboPhanerogam(){}

void RoboPhanerogam::moodPlay() {
	int randomNum = (rand() % 12) + 1;
    setStatPlay(getStatPlay() + randomNum);
	cout << "+" << randomNum << " upped play from phanerogam" << endl;
	Pet::moodPlay();
	cout << "phanerogam";

	cout << R"(
---------------------------------------------------------
		
				 ▌▄╪║▄          
			   '╝╫▌ █Æ▌        		     ♬
				 ╟└█║▀╙      		♪
				 ╠▄▄▄      			   ♩
			▄▀▀▀╙     ╙▀▀▄
		  ▄▀             └▌
	   ▐╩▀≈     ▄      ▄  ╫┴║µ
	   ▀▄╫µ  █ ╥▀   ▌┌█▀  ▌▀▀
		  ╩▀▄ └        ╓▓▀
		  ╓▀╜└╜▀▀▀▀▀▀▀╙ └▀▄   ██▀
	   ▄═█└   ▀██▄██      █▄▄æ▀
	  ▌  █     █████      █
	▄▀▀  ╙▌     ╙▌└     ,▓┬
		 ╓███╩▀▀▀▀▀▀▀╜╟███▄
		 ╝██▀         ▀ ▀█
					   └└
---------------------------------------------------------
	)" << flush << endl;
	cout << name << " loved listening to the music! *dance dance dance*\n\n";
}
void RoboPhanerogam::moodSocialize() {
	int randomNum = (rand() % 12) + 1;
    setStatSocialize(getStatSocialize() + randomNum);
	cout << "+" << randomNum << " upped socialize from phanerogam" << endl;
	Pet::moodSocialize();
	cout << "phanerogam";

	cout << R"(
---------------------------------------------------------

		
       ▄≈▄                      ,▄,
      ▌   ╙µ                   ▌   └▄
          ┘b                   ▀╛┘└└╙L
        ,∩}▌¥s-╛▌,
        ▒  ▌ ▌ m╡▌               ██▓▓
        ╞  ▄ ╡ µ║¬               ╙███▀
      ,⌐▀█t▓▄Å½▄▌╟'ƒ▄            ▄▄▄
      ▄█╢╬▄█▒▓╬Æ▌╝▀╙║        Æ┘└     ┘Æ
      ┘▄▄--≈**ⁿ¬¬"^\┘      ▌▌ ██  ▄██  ▌╠
       ╘  ╓▌   █▌  ╠       ┘╙▄╠╙  ╙▀▀,▀
        ▄ ╜█\▄ █▀  ▒        ╓Ö┘╫▌Γ▓└└ ▀▄▄
       ▓█▄     ,,▄▀█▄    ▄┬ ▌  ╙███    ▀ ║▄
      ▐▌  ▄T▀▀▀▀▓   █   ╙┘  ╠█▄▄▄╠▄▄▄▄█  ┴└
       █  ╝▌    █  █        ╠▀▀     ╠╠█
		
---------------------------------------------------------
	)" << flush << endl;
	cout << name << " had fun seeing their robot friend!!!" << endl << endl;
}
void RoboPhanerogam::moodEat() {
	int randomNum = (rand() % 12) + 1;
    setStatEat(getStatEat() + randomNum);
	cout << "+" << randomNum << " upped eat from phanerogam" << endl;
	Pet::moodEat();
	cout << "phanerogam";

	cout << R"(
---------------------------------------------------------
                             ▄µ   ╓▄
                              ▄███▄┘
                           Φ▌ █████ ▓
                  █           ┌▀█▀╙
                         ▀\   ▀   ▀W
             ╙└  ▀   ▀
                          █
             ▀     ▄╒
                  ╙╫▄▓m
                  ,▄▄▄
               #┘      ┘▄
             ▌▓ ] É ] ▄ ║▄
           ,   %▄▄   ▄▄▓
          ╩▀  #┘ ╫█▄█   ║,a╙
             ┘╠   ██▀   ▌
              ▐█▌└²²└└██▌
		
---------------------------------------------------------
	)" << flush << endl;
	cout << name << " thanks you for the vitamins and the sun!!!" << endl << endl;
}
void RoboPhanerogam::moodBath() {
	int randomNum = (rand() % 12) + 1;
    setStatBath(getStatBath() + randomNum);
	cout << "+" << randomNum << " upped bath from phanerogam" << endl;
	Pet::moodBath();
	cout << "phanerogam";

	cout << R"(
---------------------------------------------------------
                         ,═TT∞v▄
                   ▄═ ╥██╜└'└└└?╝▓R▄
                     ╙  ^▄         ╙╪▀V
                ▀                     ╙¥▓W▄
                      ▐    ▄             ┘¥╬
                  p        ╙
                  \
              ▐     ▄▄▓╖    ▄
                    ╘▀╟╝
                  ╓▄═T*∞▄
               ▄Æ└       └▄▄
               ▄▌ ▌╓  ▄▄b ▀╜
            ▄    ▓¥w▄╓▄∞▀▄  ç▄
             ▀╓╓╙  ███▀   ▌≈└
                ▌   █▀   ▄
                ▓█═    ▐╙█
                        └  
---------------------------------------------------------
	)" << flush << endl;
	cout << name << ": LOVEESSS BATHSSSSSS THANK YUOOOUOUOUO" << endl << endl;
}
void RoboPhanerogam::moodSleep() {
	int randomNum = (rand() % 12) + 1;
    setStatSleep(getStatSleep() + randomNum);
	cout << "+" << randomNum << " upped sleep from phanerogam" << endl;
	Pet::moodSleep();
	cout << "phanerogam";

	cout << R"(
---------------------------------------------------------
							  z ²
								Z
                         ╓   Z
                     ▄╣╬▌█▌Tp
                     ╙Γ▓▄▄▌▀▄
                       ▌ W▀ └
                     ,▄█╪╪▄▄▄
                 ▄▀▀┘        ╜▀▄
               ▓╙               █╓▄
            ▄▀╢M                ╫ j▄
            ▓▄╫▄  █▀▀▀    ██▀▀ ,▌▀▀
               ╙▀▄           ▄▓╙
                ▄▀┴╩▀▀▀▀▀▀▀▀╙ ╙▀▄
             ,█╙      ▄▄▄▄      ▓▄▄
            ███       ▄  ▀      ███
              ╙▄      ▀▀▀▀     ▄▀
                ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀  
---------------------------------------------------------
	)" << flush << endl;
	cout << name << ": zZz²zZzzZz²" << endl << endl;
}