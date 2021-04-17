#include <iostream.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
//using namespace std;
class tictactoe
{
    static int a[3][3];
    static int c[2];
public:
    tictactoe()
    {
      /* for(int i(0);i<3;i++)
	    for(int j(0);j<3;j++)
		a[i][j]=0;*/
    }

    static void display()
    {
	for(int i=0;i<3;i++)
	{   cout<<"\n";
	    for(int j=0;j<3;j++)
		cout<<"\t"<<a[i][j];
	}
    }
    static void calculate(int n)
    {
	static int co=1;
	int i,j;
	cout<<"\n Enter your index position  ";
	label:
	cout<<"\n i = ";cin>>i;
	i=i-1;
	cout<<"j = ";cin>>j;
	j=j-1;
	if(i<0||i>2||j<0||j>2)
	{
	    cout<<"\n Invalid index position......try to give the correct index....enter the new index ...";
	    goto label;
	}
	if(a[i][j]!=0)
	{
	    cout<<"\n value has already been allocated in this index....enter the new index...";
	    goto label;
	}
	if(n==1)
	    a[i][j]=1;
	else
	    a[i][j]=2;
	for(int m=0;m<2;m++)
	if((a[0][0]==c[m]&&a[0][1]==c[m]&&a[0][2]==c[m])||(a[1][0]==c[m]&&a[1][1]==c[m]&&a[1][2]==c[m])||(a[2][0]==c[m]&&a[2][1]==c[m]&&a[2][2]==c[m])||(a[0][0]==c[m]&&a[1][0]==c[m]&&a[2][0]==c[m])||(a[0][1]==c[m]&&a[1][1]==c[m]&&a[2][1]==c[m])||(a[0][2]==c[m]&&a[1][2]==c[m]&&a[2][2]==c[m])||(a[0][0]==c[m]&&a[1][1]==c[m]&&a[2][2]==c[m])||(a[0][2]==c[m]&&a[1][1]==c[m]&&a[2][0]==c[m]))
	{
	    cout<<"\n CONGRATULATIONS!!!!!! PLAYER "<<c[m]<<" YOU HAVE WON THE MATCH .";
	    display();
	    exit(0);
	}
	display();
	++co;
	if(co==10)
	{
	    cout<<"\n MATCH DRAWN..";
	}
    }



};
int tictactoe::a[3][3]={0,0,0,0,0,0,0,0,0};
int tictactoe::c[2]={1,2};
int main()
{
   int driver=DETECT,mode;
initgraph(&driver,&mode,"c:\\turboc3\\bgi");
 setcolor(3);
setfillstyle(SOLID_FILL,RED);
rectangle(20,20,620,450);
floodfill(631,0,3);
setcolor(WHITE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(200,235,"LOADING");
delay(1000);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(300,235,".");
delay(250);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(310,235,".");
delay(250);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(320,235,".");
delay(250);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(330,235,"PLEASE WAIT");
delay(500);
clrscr();
cleardevice();
setcolor(3);
setfillstyle(SOLID_FILL,WHITE);
rectangle(20,20,620,450);
floodfill(631,0,3);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(235,195,"WELCOME");
delay(500);
outtextxy(235,235,"TO");
delay(500);
setcolor(3);
setfillstyle(SOLID_FILL,BLUE);
rectangle(20,20,620,450);
floodfill(631,0,3);
delay(250);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(235,285,"THE FUTURE!");
delay(1000);
clrscr();
cleardevice();
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(235,195,"CSE G1");
delay(350);
settextstyle(SMALL_FONT,HORIZ_DIR,6);
outtextxy(235,235,"Proudly presents");
delay(350);
setcolor(GREEN);
line(235,260,400,260);
delay(1000);
clrscr();
cleardevice();
setcolor(3);
setfillstyle(SOLID_FILL,YELLOW);
rectangle(20,20,620,450);
floodfill(631,0,3);
delay(500);
setcolor(WHITE);
line(235,195,415,195);
delay(500);
setcolor(3);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(235,195,"TIC-");
setcolor(BLUE);
delay(500);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(310,200,"TAC");
delay(500);
setcolor(3);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(335,195,"  -TOE");
delay(500);
setcolor(WHITE);
line(235,225,415,225);
delay(250);
setcolor(10);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(235,220,"DEVELOPED BY");
delay(500);
setcolor(WHITE);
settextstyle(SMALL_FONT,HORIZ_DIR,6);
outtextxy(235,250,"1. BALA SARATH.");
delay(250);
settextstyle(SMALL_FONT,HORIZ_DIR,6);
outtextxy(235,265,"2. S.ARUN PRASATH.");
delay(250);
settextstyle(SMALL_FONT,HORIZ_DIR,6);
outtextxy(235,280,"3. JAYA BHARATHI.");
delay(1000);
 cleardevice();
  // int i,j=0,a=95,b=95;
	for(int i=0;i<150;i++)
	{
	  setcolor(BLUE);
	 circle(0,0,60+i);
	 delay(5);
	 setcolor(RED);
	 circle(640,0,60+i);
	 delay(5);
	 setcolor(YELLOW);
	 circle(630,480,60+i);
	 delay(5);
	 setcolor(GREEN);
	 circle(0,480,60+i);
	 delay(5);
	 }
	  for( i=0;i<150;i++)
	{ setcolor(BLUE);
	 circle(0,0,80-i);
	 delay(5);
	 setcolor(RED);
	 circle(640,0,80-i);
	 delay(5);
	 setcolor(YELLOW);
	 circle(630,480,80-i);
	 delay(5);
	 setcolor(GREEN);
	 circle(0,480,80 -i);
	 delay(5);
	 }
	 delay(200);
	 setcolor(6);
	 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
	 outtextxy(250,250,"TIC TAC TOE!!!");
	 delay(1000);
	 cleardevice();




   cleardevice();
   tictactoe a,b;
   for(int k=0;k<4;k++)
   {
       cout<<"\n PLAYER 1 ";
       a.calculate(1);
       cout<<"\n ----------------------------------------------------------------------------------------------------------";
       cout<<"\n PLAYER 2 ";
       b.calculate(2);
       cout<<"\n -----------------------------------------------------------------------------------------------------------";
   }
   b.calculate(2);
   cout<<"\n ---------------------------------------------------------------------------------------------------------------";
closegraph();
}
