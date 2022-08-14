/*
* File Name: lab4Clock.h
* Assignment: Lab 4 Exercise C
* Lab section: (B01)
* Completed by: Shanzi Ye
* Submission Date: June 8, 2022
*/

#pragma once
#ifndef _lab4Clock_
#define _lab4Clock_

class Clock
{
public:
	Clock();
	Clock(int totalSeconds);
	Clock(int totalHour,int totalMinute,int totalSecond);

	void increment();
	void decrement();
	void add_seconds(int addsec);

	int get_hour() const;
	void set_hour(int hour);

	int get_minute() const;
	void set_minute(int minute);

	int get_second() const;
	void set_second(int second);

	void  convertTime(int seconds);

private:
	int hour;
	int minute;
	int second;
};

#endif // !_lab7Clock_

