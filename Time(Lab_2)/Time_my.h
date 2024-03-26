#pragma once
#include<iostream>
class Time {
	int h = 0, m = 0, s = 0;

public:
	void Convert();

	Time operator+(Time next);
	Time operator-(Time next);
	void operator=(Time next);

	friend std::ostream& operator<<(std::ostream& os, Time t);
	friend std::istream& operator>>(std::istream& is, Time& t);
};