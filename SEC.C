#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
int main(void)
{
int gdriver = DETECT, gmode;
int i,x,y,x1, y1,x2,y2, dx, dy, length, P0;
printf("Enter the starting coordinate of line\n");
scanf("%d%d",&x1,&y1);
printf("Enter the ending coordinates of line\n");
scanf("%d%d",&x2,&y2);
initgraph(&gdriver,&gmode, "C:\\TURBOC3\\BGI");
dx = abs(x2-x1);
dy = abs(y2-y1);
if(dx>dy)
length = dx;
else
length = dy;
putpixel(x1, y1,2);
x = 1;
y = y1;
P0 = 2*dy - dx;
// for(i = 0; i%6<4; i++)
for(i =0 ;i<= length; i++)
{
	if(P0<0)
{
x = x+5;
y = y+5;
putpixel(x,y,2);
P0 = P0 + 2*y;
}
else
{
x = x+5;
y = y+5;
putpixel(x,y,2);
P0 = P0 + 2*y - 2*dx;
}
}
getch();
closegraph();
return 0;
}


