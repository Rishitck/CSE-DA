#include<graphics.h>
#include<iostream>

using namespace std;

int main()
{
	cout<<"Banana";
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
	for(int i=0;i<420;i=i+120)
	{	
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
		arc(60+i,150,60,300,25);
	if(180+i<=420)
	{
	//S
		arc(180+i,130,30,270,15);
		arc(180+i,160,210,90,15);
	}
	else
	{
		arc(60,130,30,270,15);
		arc(60,160,210,90,15);
	}
	if(270+i<=420){
	//E
	line(270+i,125,270+i,175);
	line(270+i,125,320+i,125);
	line(270+i,150,300+i,150);
	line(270+i,175,320+i,175);
	}
	else
	{
		line(i-210,125,i-210,175);
		line(i-210,125,i-160,125);
		line(i-210,150,i-180,150);
		line(i-210,175,i-160,175);
	}
	//c
	if(i+420>420){
		arc(i-60,150,60,300,25);
	}
		
	else{
		arc(420,150,60,300,25);
	}
	delay(1000);
	cleardevice();
	}	
	getch();
	closegraph();
	return 0; 
}
