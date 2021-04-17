#include <iostream>
using namespace std;
char game='s';
class tictactoe
{
private:
char x[3][3];
int n=1;
public:
tictactoe()
{
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
x[i][j]=' ';
}
}
void get()
{
int i,j;
if(n%2!=0)
cout<<"\nplayer 1"<<endl;
else
cout<<"\nplayer 2"<<endl;
cin>>i>>j;
if(i>=3||j>=3||x[i][j]!=' ')
get();
else
{
if(n%2!=0)
x[i][j]='X';
else
x[i][j]='O';
n=n+1;
}
}
void display()
{
cout<<"**********************************************************";
cout<<"\n________|_______|_______|"<<endl;
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
cout<<""<<x[i][j]<<"\t|";
cout<<"\n________|_______|_______|"<<endl;
}
cout<<"**********************************************************";
}
void check()
{
if(x[0][0]==x[1][1]&&x[0][0]==x[2][2]&&x[0][0]!=' ')
game=x[1][1];

if(x[2][0]==x[1][1]&&x[2][0]==x[0][2]&&x[1][1]!=' ')
game=x[1][1];
for(int i=0;i<3;i++)
{
if(x[i][0]==x[i][1]&&x[i][0]==x[i][2]&&x[i][0]!=' ')
game=x[i][0];
}
for(int i=0;i<3;i++)
{
if((x[0][i]==x[1][i]&&x[0][i]==x[2][i])&&x[0][i]!=' ')
game=x[0][i];
}
int e=0;
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{ if( x[i][j]==' ')
e=1;
}
}
if(e==0)
game='D';
}
void result()
{
if(game!='D')
{ cout<<"************************"<<endl;
cout<<"player "<<game<<" won"<<endl;
cout<<"************************"<<endl;
}
else
{
cout<<"***************"<<endl;
cout<<"match draw"<<endl;
cout<<"***************"<<endl;
}
}
};
int main()
{
tictactoe play;
do
{
play.get();
play.check();
play.display();
}while(game=='s');
play.result();
}
