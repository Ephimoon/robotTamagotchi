#ifndef ROBOCRYPTOGAM_H
#define ROBOCRYPTOGAM_H

#include "Pet.h"

#include <string>
using namespace std;

class RoboCryptogam : public Pet {
public:
    RoboCryptogam();
	~RoboCryptogam();
	RoboCryptogam(int, int, int, string, int, int, int, int, int);
    void moodPlay() override;
	void moodSocialize() override;
	void moodEat() override;
	void moodBath() override;
	void moodSleep() override;
};

#endif