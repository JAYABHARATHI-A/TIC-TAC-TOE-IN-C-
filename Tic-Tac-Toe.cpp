#include <iostream>;
using namespace std;
int game=0;
class tictactoe
{
private:
int x[3][3];
int n=1;
public:
tictactoe()
{
for(int i=0;i&lt;3;i++)
{
for(int j=0;j&lt;3;j++)
x[i][j]=0;
}
}
void get()
{
int i,j;
if(n%2!=0)
cout&lt;&lt;&quot;player 1&quot;&lt;&lt;endl;
else
cout&lt;&lt;&quot;player 2&quot;&lt;&lt;endl;
cin&gt;&gt;i&gt;&gt;j;
if(i&gt;=3||j&gt;=3||x[i][j]!=0)
get();
else
{
if(n%2!=0)
x[i][j]=1;
else
x[i][j]=2;
n=n+1;
}
}
void display()
{
cout&lt;&lt;&quot;**********************************************************&quot;;
cout&lt;&lt;&quot;\n________|___________|___________|&quot;&lt;&lt;endl;
for(int i=0;i&lt;3;i++)
{
for(int j=0;j&lt;3;j++)
cout&lt;&lt;&quot;\t&quot;&lt;&lt;x[i][j]&lt;&lt;&quot;\t|\t&quot;;
cout&lt;&lt;&quot;\n________|___________|___________|&quot;&lt;&lt;endl;
}
cout&lt;&lt;&quot;**********************************************************&quot;;
}
void check()
{
if(x[0][0]==x[1][1]&amp;&amp;x[0][0]==x[2][2]&amp;&amp;x[0][0]!=0)
game=x[1][1];

if(x[2][0]==x[1][1]&amp;&amp;x[2][0]==x[0][2]&amp;&amp;x[1][1]!=0)
game=x[1][1];
for(int i=0;i&lt;3;i++)
{
if(x[i][0]==x[i][1]&amp;&amp;x[i][0]==x[i][2]&amp;&amp;x[i][0]!=0)
game=x[i][0];
}
for(int i=0;i&lt;3;i++)
{
if((x[0][i]==x[1][i]&amp;&amp;x[0][i]==x[2][i])&amp;&amp;x[0][i]!=0)
game=x[0][i];
}
int e=0;
for(int i=0;i&lt;3;i++)
{
for(int j=0;j&lt;3;j++)
{ if( x[i][j]==0)
e=1;
}
}
if(e==0)
game=3;
}
void result()
{
if(game!=3)
{ cout&lt;&lt;&quot;************************&quot;&lt;&lt;endl;
cout&lt;&lt;&quot;player &quot;&lt;&lt;game&lt;&lt;&quot; won&quot;&lt;&lt;endl;
cout&lt;&lt;&quot;************************&quot;&lt;&lt;endl;
}
else
{
cout&lt;&lt;&quot;***************&quot;&lt;&lt;endl;
cout&lt;&lt;&quot;match draw&quot;&lt;&lt;endl;
cout&lt;&lt;&quot;***************&quot;&lt;&lt;endl;
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
}while(game==0);
play.result();
}
