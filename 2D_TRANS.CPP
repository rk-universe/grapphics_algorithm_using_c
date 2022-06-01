#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<graphics.h>
int main()
{
 int gd=DETECT,gm, x1,y1,x2,y2 , c,tx,ty;
 initgraph(&gd,&gm,"C:\TURBOC3\BIN");
cout<<"Enter the top left point of rectangle";
 cin>>x1>>y1;
 cout<<"Enter the right bottom point of rectanglee";
 cin>>x2>>y2;
 rectangle(x1,y1,x2,y2);
 cout<<"Enter the choice\n 1 transformation \n 2 Rotation \n 3 Scalling";
 cin>>c;
 switch(c){
     case 1:
			int t1,t2,t3,t4;
			cout<<"Enter tx & ty :";
			cin>>tx>>ty;
			t1=x1+tx;
			t2=y1+ty;
			t3=x2+tx;
			t4=y2+ty;
			rectangle(t1,t2,t3,t4);
			break;
case 2 :
			int X1,Y1,X2,Y2,X3,Y3,r;
			int rx,nx1,ny1,nx2,ny2,nx3,ny3;
			cout<<" \n Enter the point of triangle:";
			cin>>X1>>Y1>>X2>>Y2>>X3>>Y3;
			line(X1,Y1,X2,Y2);
			line(X2,Y2,X3,Y3);
			line(X3,Y3,X1,Y1);

			cout<<"Enter angle :";
			cin>>r;
			rx=r*(3.14/180);

			nx1 =abs( X1* cos(rx) - Y1*sin(rx));
			ny1 =abs( Y1* cos(rx) + X1*sin(rx));

			nx2 = abs( X2* cos(rx) -Y2*sin(rx));
			ny2 = abs( Y2* cos(rx) + X2*sin(rx));

			nx3 = abs (X3* cos(rx) - Y3*sin(rx));
			ny3 = abs (Y3* cos(rx) + X3*sin(rx));

			line(nx1,ny1,nx2,ny2);
			line(nx2,ny2,nx3,ny3);
			line(nx3,ny3,nx1,ny1);

			break;
case 3 :
		    cout<<"Enter sx & sy :";
		    int sx,sy;
		   cin>>sx>>sy;
		   rectangle(x1*sx, y1*sy, x2*sx, y2*sy);
		   break;

		default :
			cout<<"Not a valid choice";
 }
  getch();
  closegraph();
 return 0;
}