#ifndef ROBODOG_H
#define ROBODOG_H

#include "Pet.h"

#include <string>
using namespace std;

class RoboDog : public Pet {
public:
    RoboDog();
	~RoboDog();
	RoboDog(int, int, int, string, int, int, int, int, int);
    void moodPlay() override;
	void moodSocialize() override;
	void moodEat() override;
	void moodBath() override;
	void moodSleep() override;
};

#endif