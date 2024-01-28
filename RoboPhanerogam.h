#ifndef ROBOPHANEROGAM_H
#define ROBOPHANEROGAM_H

#include "Pet.h"

#include <string>
using namespace std;

class RoboPhanerogam : public Pet {
public:
    RoboPhanerogam();
	~RoboPhanerogam();
	RoboPhanerogam(int, int, int, string, int, int, int, int, int);
    void moodPlay() override;
	void moodSocialize() override;
	void moodEat() override;
	void moodBath() override;
	void moodSleep() override;
};

#endif