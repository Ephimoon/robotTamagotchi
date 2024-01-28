#include "RoboCryptogam.h"

#include <iostream>
#include <fstream>
#include <ctime> // for different seeds
#include <cstdlib> // rand
#include <string>
using namespace std;

RoboCryptogam::RoboCryptogam() : Pet() {
	eggType = 2;
    robotType = 4;
	run = 0;
    name = "RoboCryptogam";
	statPlay      = (rand() % 61) + 40; // 40 - 100
	statSocialize = (rand() % 61) + 40;
	statEat	      = (rand() % 61) + 40;
	statBath      = (rand() % 61) + 40;
	statSleep     = (rand() % 61) + 40;
}

RoboCryptogam::RoboCryptogam(int _eggType, int _robotType, int _run, string _name, int _statPlay, int _statSocialize, int _statEat, int _statBath, int _statSleep) : Pet(_eggType, _robotType, _run, _name, _statPlay, _statSocialize, _statEat, _statBath, _statSleep){
	run           = _run;
    name          = _name;
    statPlay      = _statPlay;
	statSocialize = _statSocialize;
    statEat       = _statEat;
	statBath      = _statBath;
	statSleep     = _statSleep;
}

RoboCryptogam::~RoboCryptogam(){}

void RoboCryptogam::moodPlay() {
	int randomNum = (rand() % 12) + 1;
    setStatPlay(getStatPlay() + randomNum);
	cout << "+" << randomNum << " upped play from cryptogam" << endl;
	Pet::moodPlay();
	cout << "cryptogam";

	cout << R"(
---------------------------------------------------------
                ╓═w    ┌∩T▐▀
               ▄┴╓Ö ▀╙╫ ⌡%╬7YW 				♬
               $½▌,╣Ö ▀▄T╓╙,m┴			♪
               ║╟ ╠ ▀ ▌▄>╙╦╙═▄			  ♩
               ▌ ▄Å╜▄ ▄▀¼▐╙ M╙
             ╓ª▓▀▌▄▓aÜ█▓▌ ▀▀╟┘⌡W
            ▀▄╗▄¥╩Q╙▌▄▀#█╜▓▀▀▄Γ▓╣
            ▌╜▀╜╝ª▀▀W4Ä▀¥╨T▀╙└╙ ▐≈
            ┘W▄▄▄▄▄x═≈≈∞*TTTT²└▐▌
              ▌  ╓█▄     ╓█▄   ║
              ╙  ▀ ▀     ▀ ▀   ▌
               ╠      ╙       ▐     ▐█
              ▄█▄            ╓████▄▄▌
             ▓██▀77T*▓██▌7²└└     ╙▀
             █┐   █╙╜┘ `┴╙▀█
             ▀█   ▀█      ██
                   └      ▀
---------------------------------------------------------
	)" << flush << endl;
	cout << name << " loved listening to the music! *dance dance dance*\n\n";
}
void RoboCryptogam::moodSocialize() {
	int randomNum = (rand() % 12) + 1;
    setStatSocialize(getStatSocialize() + randomNum);
	cout << "+" << randomNum << " upped socialize from cryptogam" << endl;
	Pet::moodSocialize();
	cout << "cryptogam";

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
void RoboCryptogam::moodEat() {
	int randomNum = (rand() % 12) + 1;
    setStatEat(getStatEat() + randomNum);
	cout << "+" << randomNum << " upped eat from cryptogam" << endl;
	Pet::moodEat();
	cout << "cryptogam";

	cout << R"(
---------------------------------------------------------
						 ,
						 ╙╖▄▄▄╙L
					   ▄µ▐█████ µ
			  ╓           ╙▀█▀╙ ╙
					 ▀    ▀   █
		  ▀  A   ▀
			]-╗\.,⌂p  █
		 ▀  ▒ ▐ ║ µΓb
			▐   ▐ µ╟
		  ┌░╠ÅΣMé▒x▄Ç▄è
		  ▌╙╙²╙╙╙╙╙╙└│▄
		   ▐ ╖╪µ  Æ▄  Ö
	   ]▄   p╛ ▀ ╙  ⌐]   ▄Θ
		╜▌▄▄█       ,█▀¥╝▀
			  ▄╙▀▀T▄
			  ▀    █
		
---------------------------------------------------------
	)" << flush << endl;
	cout << name << " thanks you for the vitamins and the sun!!!" << endl << endl;
}
void RoboCryptogam::moodBath() {
	int randomNum = (rand() % 12) + 1;
    setStatBath(getStatBath() + randomNum);
	cout << "+" << randomNum << " upped bath from cryptogam" << endl;
	Pet::moodBath();
	cout << "cryptogam";

	cout << R"(
---------------------------------------------------------
         
                       ▄Σ▄▄▒²≈╓
                .⌐" "▀█      └²¥▄∞▄
               ╜     ▐ %         ¬7▄Σw
              ▌  ▌   ╡  ]            ²wΣw
               ▐Γ▐Γ ▐Γ▐Γ   %             └w
               ▐Γ▐Γ ▐Γ▐Γ
               ▐Γ▐Γ ▐Γ▐Γ
              ,%▓»▌ ▄╛╒▀"≈
             ▐å▒φÆ╬║▓▒╬A┴╜▌
              ⁿ≈≈≈¬¬¬^7^`▐
              ▐  └╟  └╟  ╛   ▄
           ╙█  ⌠    0   ,▄,,█▀
            └▀▀╙Γ"Qæ█▄▄ ¬
                 ▐▄   ▐▌
                      ─
		
---------------------------------------------------------
	)" << flush << endl;
	cout << name << ": LOVEESSS BATHSSSSSS THANK YUOOOUOUOUO" << endl << endl;
}
void RoboCryptogam::moodSleep() {
	int randomNum = (rand() % 12) + 1;
    setStatSleep(getStatSleep() + randomNum);
	cout << "+" << randomNum << " upped sleep from cryptogam" << endl;
	Pet::moodSleep();
	cout << "cryptogam";

	cout << R"(
---------------------------------------------------------
						²
						  z
							Z
						Z
		  ═≈▄▒¼   ▌"µ
		▐└µ  µ @µ ▌ ▌╠
		 ▄⌐  ▒  ▄ ▌ ▌▌
		 ╙µ  ▌  ▌ ▌ █
	   ,∞K▀▄«╡  ▄,▌ ▀▀└²w
	  Ö▄╖╧WΣ²╠╙Å╗Φ╙▐▀▀π7▐▐
	  ▌╙╙╜╜╜═▀π╝┴▀╜T╙╙^┘ ▐
	  └Wµµ-»»≈*⌐ⁿ⌐"²²"""╘=
		▌               ╠
		╙  ▄▄▄   ,▄▄▄▄  ▌
		 ¼╙▀╙╙    ┘╙└  ▐
		  ⌐    ╙┴    ,∞┌
		   ─¬────¬─
---------------------------------------------------------
	)" << flush << endl;
	cout << name << ": zZz²zZzzZz²" << endl << endl;
}