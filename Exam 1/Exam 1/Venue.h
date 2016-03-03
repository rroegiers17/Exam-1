#pragma once
#ifndef _VENUE_H_
#define _VENUE_H_
#include<string>

class Venue {
private:
	Event scheduleEvents[12];
	int numEvents;
	bool validTime(int time);
public:
	void addEvent(int time, string name);
	Event findEvent(int time);
	Event findEvent(string name);
};
#endif