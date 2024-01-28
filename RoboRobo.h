#ifndef ROBOROBO_H
#define ROBOROBO_H

#include "Pet.h"

#include <string>
using namespace std;

class RoboRobo : public Pet {
public:
    RoboRobo();
	~RoboRobo();
	RoboRobo(int, int, int, string, int, int, int, int, int);
    void moodPlay() override;
	void moodSocialize() override;
	void moodEat() override;
	void moodBath() override;
	void moodSleep() override;
};

#endif