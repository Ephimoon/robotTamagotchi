#ifndef ROBOCAT_H
#define ROBOCAT_H

#include "Pet.h"

#include <string>
using namespace std;

class RoboCat : public Pet {
public:
    RoboCat();
	~RoboCat();
	RoboCat(int, int, int, string, int, int, int, int, int);
    void moodPlay() override;
	void moodSocialize() override;
	void moodEat() override;
	void moodBath() override;
	void moodSleep() override;
};

#endif