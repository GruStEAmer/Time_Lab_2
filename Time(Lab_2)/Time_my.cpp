#include"Time_my.h"
#include<iostream>

void Time::Convert() {
	m += s / 60;
	s %= 60;
	h += m / 60;
	m %= 60;
}

Time Time::operator+(Time next) {
	Time t;
	t.h = h + next.h;
	t.m = m + next.m;
	t.s = s + next.s;
	return t;
}
Time Time::operator-(Time next) {
	Time t;
	t.h = h - next.h;
	t.m = m - next.m;
	t.s = s - next.s;
	return t;
}
void Time::operator=(Time next) {
	h += next.h;
	m += next.m;
	s += next.s;
}

std::ostream& operator<<(std::ostream& os, Time t) {
	t.Convert();
	os << t.h << ":" << t.m << ":" << t.s << "\n";
	return os;
}
std::istream& operator>>(std::istream& is, Time& t){
	is >> t.h >> t.m >> t.s;
	return is;
}