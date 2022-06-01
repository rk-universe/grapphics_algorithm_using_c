
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<graphics.h>
void boundary_fill(int x,int y,int boundary_color,int fill_color)
{
	int current;
	 current=getpixel(x,y);
	 if(current!=boundary_color && current!=fill_color)
		 {
		    putpixel(x,y,fill_color);
		    delay(10);
		    boundary_fill(x+1,y,boundary_color,fill_color);
		    boundary_fill(x,y+1,boundary_color,fill_color);
		    boundary_fill(x-1,y,boundary_color,fill_color);
		    boundary_fill(x,y-1,boundary_color,fill_color);

		 }

}
int main()
{
 int gd=DETECT,gm, x1,y1,x2,y2;
 initgraph(&gd,&gm,"C:\TURBOC3\BIN");
 printf("Enter the top left point of rectangle");
 scanf("%D%d",&x1,&y1);
 printf("Enter the right bottom point of rectanglee");
 scanf("%d%d",&x2,&y2);
 cleardevice();
 setcolor(WHITE);
 rectangle(x1,y1,x2,y2);
 boundary_fill(x1+1,y1+1,15,4);
 getch();
 return 0;


}