#pragma once
class Time {
	int h = 0, m = 0, s = 0;
	int sum = 0;

public:
	Time();
	void GetTime();
	void ConvertTime();
	void ShowTime();
	void CheckTime();
};