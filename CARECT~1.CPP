#include <graphics.h>
#include <iostream.h>
#include<stdio.h>
#include<dos.h>
#include <conio.h>
#include <stdio.h>
int main()
{

    int gd = DETECT, gm ;
    initgraph(&gd, &gm, "C:\TURBOC3\BIN");
    cout<<"start to create array";
    int a[13][9] = {


	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 1, 1, 1, 1, 1, 1, 0, 0},
	{0, 1, 0, 0, 0, 0, 1, 0, 0},
	{0, 1, 0, 0, 0, 0, 1, 0, 0},
	{0, 1, 0, 0, 0, 0, 1, 0, 0} ,
	{0, 1, 0, 0, 0, 0, 1, 0, 0},
	{0, 1, 1, 1, 1, 1, 1, 0, 0},
	{0, 1, 0, 0, 0, 0, 1, 0, 0},
	{0, 1, 0, 0, 0, 0, 1, 0, 0},
	{0, 1, 0, 0, 0, 0, 1, 0, 0},
	{0, 1, 0, 0, 0, 0, 1, 0, 0},
	{0, 1, 0, 0, 0, 0, 1, 0, 0},
    };
    cout<<"array created";
for(int i = 0; i < 13; i++)
{
   for(int j = 0; j < 9; j++)
   {
     putpixel(200+j,200+i,15*a[i][j]);
   }

}cout<<"exit from loop";
getch();
closegraph();
return 0;

}
