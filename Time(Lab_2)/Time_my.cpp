#include"Time_my.h"
#include<iostream>

Time::Time() {
	std::cout << "Now time 00:00:00\n";
}
void Time::GetTime() {
	std::cin >> s;
	ConvertTime();
}
void Time::ConvertTime() {
	m += s / 60;
	s %= 60;
	h += m / 60;
	m %= 60;
}
void Time::ShowTime() {
	std::cout << (h < 10 ? "0" : "") << h <<(m < 10 ? ":0" : ":") << m << (s < 10 ? ":0" : ":") << s << "\n";
}
void Time::CheckTime() {
	sum += (h * 60 + m) * 60 + s;
	std::cout << sum << "\n";
}