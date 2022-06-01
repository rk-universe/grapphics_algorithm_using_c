#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>

void Walk_man(){
circle(150,350,15);
line(150,365,150,410);
line(150,374,130,400);
line(150,410,130,434);
line(150,410,170,434);
line(150,374,170,400);

}



void DrawCar(int x)
{


circle(50+x,400,20);
circle(200+x,400,20);
line(10+x,380,250+x,380);
rectangle(10+x,380,150+x,250);
rectangle(150+x,380,250+x,300);

}

void draw_hill(){
  line(0,150,100,50);
line(100,50,200,200);
line(200,200,350,20);
line(350,20,500,150);
line(500,150,600,50);
line(600,50,700,150);

}
int main()
{
	int gd,gm;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"C://TurboC3//BGI");

 //     int scwidth=getmaxx();
 while(!kbhit()){
   for(int x=0;x<400;x++)
   {

  line(0,420,650,420);  //ground line
  Walk_man();
  draw_hill();
   DrawCar(x);
   delay(10);
   cleardevice();

   }
 }

	getch();
	closegraph();
	return 0;
}

