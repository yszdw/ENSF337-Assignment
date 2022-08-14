/*
* File Name: lab4Clock.cpp
* Assignment: Lab 4 Exercise C
* Lab section: (B01)
* Completed by: Shanzi Ye
* Submission Date: June 8, 2022
*/

#include "lab4Clock.h"

Clock::Clock()
{
	hour = 0;
	minute = 0;
	second = 0;
}

Clock::Clock(int totalSeconds)
{
	if (totalSeconds < 0)
	{
		hour = 0;
		minute = 0;
		second = 0;
	}
	else {
		convertTime(totalSeconds);
	}
}

Clock::Clock(int totalHour,int totalMinute,int totalSecond)
{
	if ((totalHour < 0) || (totalHour > 23) || 
		(totalMinute < 0) || (totalMinute > 59) ||
		(totalSecond < 0) || (totalSecond > 59)) {
		hour = 0;
		minute = 0;
		second = 0;
		return;
	}

	int t_totalSeconds = totalHour * 3600 + totalMinute * 60 + totalSecond;
	convertTime(t_totalSeconds);
}


void Clock::convertTime(int seconds)
{
	if (seconds < 0) {
		seconds = 86400 + seconds;
	}
	int remainder_seconds = seconds % 86400;
	if (remainder_seconds == 0) {
		hour = 0;
		minute = 0;
		second = 0;
	}
	else
	{
		hour = remainder_seconds / 3600;
		remainder_seconds = remainder_seconds - hour * 3600;
		minute = remainder_seconds / 60;
		remainder_seconds = remainder_seconds - minute * 60;
		second = remainder_seconds;
	}
}

int Clock::get_hour() const
{
	return hour;
}

void Clock::set_hour(int hour)
{
	if ((hour > 23) || (hour < 0))
	{
		return;
	}
	this->hour = hour;
}

int Clock::get_minute() const
{
	return minute;
}

void Clock::set_minute(int minute)
{
	if ((minute > 59) || (minute < 0))
	{
		return;
	}
	this->minute = minute;
}

int Clock::get_second() const
{
	return second;
}

void Clock::set_second(int second)
{
	if ((second > 59) || (second < 0))
	{
		return;
	}
	this->second = second;
}

void Clock::increment()
{
	int totalSeconds = get_hour() * 3600 + get_minute() * 60 + get_second() + 1;
	convertTime(totalSeconds);
	
}

void Clock::decrement()
{
	int totalSeconds = get_hour() * 3600 + get_minute() * 60 + get_second() - 1;
	convertTime(totalSeconds);

}

void Clock::add_seconds(int addsec)
{
	int totalSeconds = get_hour() * 3600 + get_minute() * 60 + get_second() + addsec;
	convertTime(totalSeconds);
}
