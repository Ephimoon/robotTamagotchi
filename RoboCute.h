#ifndef ROBOCUTE_H
#define ROBOCUTE_H

#include "Pet.h"

#include <string>
using namespace std;

class RoboCute : public Pet {
public:
    RoboCute();
	~RoboCute();
	RoboCute(int, int, int, string, int, int, int, int, int);
    void moodPlay() override;
	void moodSocialize() override;
	void moodEat() override;
	void moodBath() override;
	void moodSleep() override;
};

#endif