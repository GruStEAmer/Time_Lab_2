#include<iostream>
#include"Time_my.h"

int main() {
	Time t;
	bool flag = true;
	int command;
	while (flag) {
		std::cin >> command;
		switch(command)
		{	
		case 1:
			t.GetTime();
			break;
		case 2:
			t.ShowTime();
			break;
		case 3:
			t.CheckTime();
			break;
		case 4:
			flag = false;
			break;
		}
		
		
		
	}
}