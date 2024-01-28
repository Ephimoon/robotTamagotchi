#include "RoboCat.h"

#include <iostream>
#include <fstream>
#include <ctime> // for different seeds
#include <cstdlib> // rand
#include <string>
using namespace std;

RoboCat::RoboCat() : Pet() {
	eggType = 1;
    robotType = 3;
	run = 0;
    name = "RoboCat";
	statPlay      = (rand() % 61) + 40; // 40 - 100
	statSocialize = (rand() % 61) + 40;
	statEat	      = (rand() % 61) + 40;
	statBath      = (rand() % 61) + 40;
	statSleep     = (rand() % 61) + 40;
}


RoboCat::RoboCat(int _eggType, int _robotType, int _run, string _name, int _statPlay, int _statSocialize, int _statEat, int _statBath, int _statSleep) : Pet(_eggType, _robotType, _run, _name, _statPlay, _statSocialize, _statEat, _statBath, _statSleep){
	run           = _run;
    name          = _name;
    statPlay      = _statPlay;
	statSocialize = _statSocialize;
    statEat       = _statEat;
	statBath      = _statBath;
	statSleep     = _statSleep;
}

RoboCat::~RoboCat(){}

void RoboCat::moodPlay() {
	int randomNum = (rand() % 12) + 1;
    setStatPlay(getStatPlay() + randomNum);
	cout << "+" << randomNum << " upped play from cat" << endl;
	Pet::moodPlay();
	cout << "cat";
	
	cout << R"(
---------------------------------------------------------
        └"W,                         Φ7  ╓
           ╫                        ▐  ▀─▐
        K└           ,x╥             ▄ ,Φ
       ╙ç         ╓K▀▌▄▄▄└└Γ¥╗T└▌     ─
          └¼    ╓╨Å╙██▀╓▓██▄  ╙▄        ▄**╦
          ,▓µ   ╫ ¼    ▀██▀ b  ╫      ╓╜    µ
         ████⌐  ║  └"*┬w══"─  ╒╨     ▐─ ▐└└╙
         └▀▀─ ╥  ▀,          Æ▀      ▌  ▌
             ╫  ¼ ╓▀¥╥ææm═fΓ   └%   ▐  j─
              %  ╙▌              └▄ ▐  ▐
               └W └╨X  ╥@"╥        ▀▐   µ
                  ²▌*─╠ ╓▀╙         ╫─  ▄
         , a∞w     ▐  ╙o╫           ,▌ ,⌐
       j─ └═  ╫     ▀  └╨       ╓ΦΓ└ └╟µ
        %     ╝     ╓╙╥        ╓▌     ,▀
          └""└     ╠  ╓╨└"""└╫╨─└¥╥╥═╙
                    └─      ▐▄▄æf╙
---------------------------------------------------------
	)" << flush << endl;
	cout << name << " had fun chasing the ball!" << endl << endl;
}
void RoboCat::moodSocialize() {
	int randomNum = (rand() % 12) + 1;
    setStatSocialize(getStatSocialize() + randomNum);
	cout << "+" << randomNum << " upped socialize from cat" << endl;
	Pet::moodSocialize();
	cout << "cat";
	
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
	cout << name << " had fun seeing their other robot friend!!!" << endl << endl;
}
void RoboCat::moodEat() {
	int randomNum = (rand() % 12) + 1;
    setStatEat(getStatEat() + randomNum);
	cout << "+" << randomNum << " upped eat from cat" << endl;
	Pet::moodEat();
	cout << "cat";
	
	cout << R"(
---------------------------------------------------------
        
     
     
			▄        ▄
		   ╠ ╙▄     ▀ ▌
		   ▀██╙Γ77Γ▀▀█╟
		   ▀  ▄ªTΓT¥▄ ╙▌═²²∞▄
		  ╙ ▐▄▀▄ ▄▀▄ ▌ ▌     └▄
		   ▌└└└ ▀╙ ╠# Å       ▐
			▀m▄╙╙╙▄▄Φ┴        ▐
		╓▄▄▄▄▌                ▌
	  █████████┐               └▐
	 É▀▀▀███▀▌▀╙▌»▄┌          ╓x╜
	▀¥▄▄    ,▄▄╦╝╙   └└└└└└
	 └²7²TTT7└└
     
       
---------------------------------------------------------
	)" << flush << endl;
	cout << name << " loved the food !!!" << endl << endl;
}
void RoboCat::moodBath() {
	int randomNum = (rand() % 12) + 1;
    setStatBath(getStatBath() + randomNum);
	cout << "+" << randomNum << " upped bath from cat" << endl;
	Pet::moodBath();
	cout << "cat";
	
	cout << R"(
---------------------------------------------------------

			 ╓µw▄
		   Æ└    ▄▀T╪
		  Å      ╙7\└
		 ▐      ª └ L ┐
		 ▌       L    ⌐
		 ▌       ⌐    µ
		 ═       L  ╙ ,
		j      ▄    ▐ ╙ ▄
		j     ▌,╙▄    ╓▀µ▌
		j    j┬█▀╙╙╙┘╙╜▀█╟
			 ]▀ ╓MT╙┘▀¥▄  ▌
			 ╙ ▐└ X  X  ▌ ▌
			  ▌└Ñ▄─   ▄╩,█
 ╓  ▄▄ ,∩∞▄ ▀▄▄╙W▄▄▄▄▄aΓ   Σ▄ a╖  Ä▐ ╓
 └ └  ╙    ╙╙  ╙∞Φ  └7┐═┘└▀ª╜▀  ▌╜ ╙┘ ╟
       
---------------------------------------------------------
	)" << flush << endl;
	cout << name << " doesn't like it but understands its important :///\n\n";
}
void RoboCat::moodSleep() {
	int randomNum = (rand() % 12) + 1;
    setStatSleep(getStatSleep() + randomNum);
	cout << "+" << randomNum << " upped sleep from cat" << endl;
	Pet::moodSleep();
	cout << "cat";

	cout << R"(
---------------------------------------------------------
         
            
              				 zzz
            			zzz
				  zzz
				 
		#,      ,Æ 
	   ╚.╙╦    ▄¼─▌
	   ▒╝▀┘┘└└└└╙▀▓
	  ]▀ ▄C└└└└Σ╦ └m└└└²w
	   µ▐  ,▄╓ ,▄─┌═     └⌐
	   ╙,╙╩▄▄▄╠╜╙▄┘       ▌
		 ▐W═══∩└└         ▌
		 ▌               4»╓
		▌                   ▌
		 ²*──»÷«wµ╓µµ»──⌐T└─
       
---------------------------------------------------------
	)" << flush << endl;
	cout << name << ": zZz²zZzzZz²" << endl << endl;
}