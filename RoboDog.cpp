#include "RoboDog.h"

#include <iostream>
#include <fstream>
#include <ctime> // for different seeds
#include <cstdlib> // rand
#include <string>
using namespace std;

RoboDog::RoboDog() : Pet() {
	eggType = 2;
    robotType = 6;
	run = 0;
    name = "RoboDog";
	statPlay      = (rand() % 61) + 40; // 40 - 100
	statSocialize = (rand() % 61) + 40;
	statEat	      = (rand() % 61) + 40;
	statBath      = (rand() % 61) + 40;
	statSleep     = (rand() % 61) + 40;
}

RoboDog::RoboDog(int _eggType, int _robotType, int _run, string _name, int _statPlay, int _statSocialize, int _statEat, int _statBath, int _statSleep) : Pet(_eggType, _robotType, _run, _name, _statPlay, _statSocialize, _statEat, _statBath, _statSleep){
	run           = _run;
    name          = _name;
    statPlay      = _statPlay;
	statSocialize = _statSocialize;
    statEat       = _statEat;
	statBath      = _statBath;
	statSleep     = _statSleep;
}

RoboDog::~RoboDog(){}

void RoboDog::moodPlay() {
	int randomNum = (rand() % 12) + 1;
    setStatPlay(getStatPlay() + randomNum);
	cout << "+" << randomNum << " upped play from dog" << endl;
	Pet::moodPlay();
	cout << "dog";

	cout << R"(
---------------------------------------------------------


		
       ▐██▌   ,▄▄▄▀W╦
              ╬▄▄   ▄╙▀▄,
        ,     ╙╙▀██╙╙█▌▀▀
       █▄▄╙▀▄    █b  "╙▓▄
          ╙▀▄╙╙╙╙        ╙¼ç
             ╙#╗▄▄▄,▄m      ╙%▄
          ╓▄#▀▓▄║▀╬▄           ╙▀▄
         "█▀╙.      ╙▀▀▄▄         ▀▄
                         .╙▀█    ▐█▀╝╬█▓▄▄
                            ╬█,   █
                             ╙╬█Σ¼╙▌
                             ▄╬╩ ]▒▌
                            ╙╙└ █▒╩
		
---------------------------------------------------------
	)" << flush << endl;
	cout << name << " had fun playing!!!" << endl << endl;
}
void RoboDog::moodSocialize() {
	int randomNum = (rand() % 12) + 1;
    setStatSocialize(getStatSocialize() + randomNum);
	cout << "+" << randomNum << " upped socialize from dog" << endl;
	Pet::moodSocialize();
	cout << "dog";

	cout << R"(
---------------------------------------------------------
         
	
	 
	   @└╗╗╗▄█╕                ≈7²*,
		 ¬└└╙╙▐              á  ,╓
							 ▌    ╓╜
		▄²%      ┌*w         ╟Γ└
	   å  ═▀▄▄▄▄▄╙¼ └p
	   ▌ ╞ ╙█▄╓██▐ µ j      ƒ╙   ,Γµ
	   ╙ç▄╦  ▀▀   á¼ X      ▌▀│▄▄▄╙╡    ,,
		  #─²"*⌐⌐└╙µ        ▄╬▄▄▄▄▌▐   6,≈╩
		 ▐         └⌐       └▄▀▀╙╠═╙  ▐ ▌
	 ╟   ═      ╓▄, ▐       ▐        ¼╞ ▌
	 ╙▄▐▌ "██▀  ▀▀▌  ▌      ▐▀▌ └▀▌   ╚ ▌
		▌  ▌╟    ⌐▌  ▌       bµ  H╞ r^¬▀
		╝yæ▌▐«»«»▌║²┘?┬       ▌.,▌╞"3w⌐└
		└""╙┴    └└└""└      └   ^─
---------------------------------------------------------
	)" << flush << endl;
	cout << name << " had fun seeing their friend!!!" << endl << endl;
}
void RoboDog::moodEat() {
	int randomNum = (rand() % 12) + 1;
    setStatEat(getStatEat() + randomNum);
	cout << "+" << randomNum << " upped eat from dog" << endl;
	Pet::moodEat();
	cout << "dog";

	cout << R"(
---------------------------------------------------------
          ,╔M²└    └*ç        
          ▀╓e#▒╧┘└Σ╤  ╙       
         ╙└         └▄ ▐     
                ,Φ└└   └╙%▄  
               @  ,---.    ▀  
               bé       '   ║  
             Æ╙    `≈        ▌
         #▄Γ╙   ─└²²w =,,óΓ  ▌ 
       ,╜ ⌐       ⌡  ┘▄ , ═  ▌
      ▐⌐  ▐╖     └╡    ▓ ▌] ╩  
       ╠µ ╟ ▐  ]  ╩  ▄═╙ ¬@.▌ 
     ╓▄,╠æ▒▀▀-- ▀▀ ╙█├    ║.╙╖ 
   ] `╙╩wΣ█┌└▀▀  ▄#▓╬▌»═"└ ▌╞╠
   ▌                        ▌ 
                            Å  
   ╙T∞▄╓               ,»≈²└  
      ╙"^ └╜╙╙╙╙╙╙⌐╙╜         
---------------------------------------------------------
	)" << flush << endl;
	cout << name << " loved the food !!!" << endl << endl;
}
void RoboDog::moodBath() {
	int randomNum = (rand() % 12) + 1;
    setStatBath(getStatBath() + randomNum);
	cout << "+" << randomNum << " upped bath from dog" << endl;
	Pet::moodBath();
	cout << "dog";

	cout << R"(
---------------------------------------------------------
                             ,┌
                           ▀▌┴ ╫█▄▄▄
               ▄Ä▄    ▀▀ ▄▄ ╜███▄▄  ╙▀▀▀▄▄
              └▀╪▀  ▀  ▄   ╙▀└    ╙╙▀▀█ j▌
       ▄┌    ▄▄▄     ▄▄▄  j▌          ╟ j▌
      ╫▄▄▌  ▌ █╙┘╙▀▀╙┴▀▄╙▌ ▄          ╫ j▌
       └─   ▌ ╟▐█   █▌▄┐j▌ ╜          ▓ j▌
        ▄   ╙▀▄▌ ▐██  ▌▄▀             ╫ j▌
       ╙▀▀  ,█▄   █    █▄             ╫ j▌
           ▐▀'╙▀▀▀▀▀▀▀╙  █         "  ╫ j▌
    ▄▓▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀╤4▀▀▄
    █                                      ╟
     └╞▌┘┘┘┘┘┘┘┘┘┘┘┘┘┘┘┘┘┘┘┘┘┘┘┘┘┘┘┘┘┘┘┘╙▌└
      j▌                                j▌
       ▌                                ▐▌
       ╙█,                             ▄▀
         ╙▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀╙
---------------------------------------------------------
	)" << flush << endl;
	cout << name << " LOVEESSS BATHSSSSSS THANK YUOOOUOUOUO" << endl << endl;
}
void RoboDog::moodSleep() {
	int randomNum = (rand() % 12) + 1;
    setStatSleep(getStatSleep() + randomNum);
	cout << "+" << randomNum << " upped sleep from dog" << endl;
	Pet::moodSleep();
	cout << "dog";

	cout << R"(
---------------------------------------------------------
         
             ²
           z
		z
     Z
		Z
                                 @└ ▓
                  æ²@,ªT%         ▌  ▌
      ▄▄*▓ªw     ▌ ▄█⌐  é¥w▄Θ└└└7▄▒  ▌
     ██▀     ╙▄.#╙ j╬▓ ▌  ]░      ╙  ▐
      ▐ .▄▒▒▄  ▌     └╟    ▄          ▒
       ▌╙╬╬╬▓  ╙  ⁿ*≈═╜ ,  ╙▄        @
    ,▄▄╫  ╨       ,φ▌▓╠╬╬╠▓▓▒▄        └ΣVç
     ╙▀▀▀ΣÆ▀  ,▀77╙╙╙└     └╙╙╙Γ└└└└└└└77w╬⌐
         ▀αxª╙
		
       
---------------------------------------------------------
	)" << flush << endl;
	cout << name << ": zZz²zZzzZz²" << endl << endl;
}