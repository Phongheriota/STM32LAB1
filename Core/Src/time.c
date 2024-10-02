#include"main.h"
void displayClock(int hour, int minute, int second){
	int m = minute/5;
	int s = second/5;
	if(second%5 == 0){
		clearAllclock();
		setNumberOnClock(hour);
		setNumberOnClock(m);
		setNumberOnClock(s);
	}
}
