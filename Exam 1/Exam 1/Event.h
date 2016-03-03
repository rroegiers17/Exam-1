#pragma once
#ifndef _EVENT_H_
#define _EVENT_H_
#include <string>

class Event{
private:
	int Time;
	string Title;
public:
	Event();
	Event(int time, string name);
	int GetTime();
	string getTitle();
	void setTime(int t);
	void setTitle(string name);

};
#endif