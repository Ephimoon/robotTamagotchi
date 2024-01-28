#ifndef PET_H
#define PET_H

#include <string>
using namespace std;

class Pet {
	public:
		Pet();
		Pet(int, int, int, string, int, int, int, int, int);
		virtual ~Pet();

		virtual void setEggType(int);
		virtual int getEggType();

		virtual void setRobotType(int);
		virtual int getRobotType();

		void AdjustStats(int&);
		void Warning(string, int);
		void next5Runs();

		void incrementRun();
		virtual void setRun(int);
		virtual int	getRun();

		virtual void setName(string);
		virtual string getName();

		virtual void setStatPlay(int);
		virtual int getStatPlay();
		virtual void setStatSocialize(int);
		virtual int getStatSocialize();
		virtual void setStatEat(int);
		virtual int getStatEat();
		virtual void setStatBath(int);
		virtual int getStatBath();
		virtual void setStatSleep(int);
		virtual int getStatSleep();

		virtual void moodPlay();
		virtual void moodSocialize();
		virtual void moodEat();
		virtual void moodBath();
		virtual void moodSleep();

		void PrintStats();

		void Save(string);

	protected:
		int eggType;
		int robotType;

		int run;

		string name;

		int statPlay;
		int statSocialize;
		int statEat;
		int statBath;
		int statSleep;
};

#endif