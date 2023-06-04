#include<graphics.h>
#include<iostream>

using namespace std;

int main()
{
	initwindow(1000,500);
	
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(10,100,110,200);
	floodfill(60,150,WHITE);
	
	setfillstyle(SOLID_FILL,GREEN);
	rectangle(130,100,230,200);
	floodfill(180,150,WHITE);
	
	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(250,100,350,200);
	floodfill(300,150,WHITE);
	setfillstyle(SOLID_FILL,RED);
	rectangle(370,100,470,200);
	floodfill(420,150,WHITE);
	
	line(60,200,60,250);
	line(180,200,180,250);
	line(300,200,300,250);
	line(420,200,420,250);
	line(10,250,110,250);
	line(130,250,230,250);
	line(250,250,350,250);
	line(370,250,470,250);
	
	//C
		arc(60,150,60,300,25);

	//S
		arc(180,130,30,270,15);
		arc(180,160,210,90,15);
	//E
	line(270,125,270,175);
	line(270,125,320,125);
	line(270,150,300,150);
	line(270,175,320,175);
	//C	
	arc(420,150,60,300,25);

	getch();
	closegraph();
	return 0; 
}
