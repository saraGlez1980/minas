#include <stdio.h>


int main()
{
    
int minas[14][14];    
int minas2[14][14];    
int x,y,a,b,c,d,rn;

for (x=0;x<14;x++)
{
for (y=0;y<14;y++)
{
minas[x][y]=0;
if (x==0||y==0||x==13||y==13)
{
minas[x][y]=1;
}

}
}


minas[2][3]=9;
minas[7][9]=9;
minas[5][8]=9;
minas[10][5]=9;
minas[7][8]=9;
minas[6][9]=9;
minas[10][8]=9;
minas[9][2]=9;
minas[4][5]=9;
minas[6][7]=9;
minas[8][3]=9;
minas[5][9]=9;

for (x=0;x<14;x++)
{
for (y=0;y<14;y++)
{
printf ("%d ",minas[x][y]);
}
printf("\n");
}



for (x=2;x<12;x++)
{
for(y=2;y<12;y++)
{
for(a=x-1;a<=x+1;a++)
{
for(b=y-1;b<=y+1;b++)
{
if(minas[a][b]==9)
{
rn=rn+1;
}
}
}
if(minas[x][y]!=9)
{
minas[x][y]=rn;
}
rn=0;
}
}



printf("\n");


for (x=0;x<14;x++)
{
for (y=0;y<14;y++)
{
printf ("%d ",minas[x][y]);
}
printf("\n");
}




for (x=0;x<14;x++)
{
for(y=0;y<14;y++)
{
minas2[x][y]='X';
}
}
printf("\n");






printf("\n");

x=2;
y=2;



for(a=x-1;a<=x+1;a++)
{
for(b=y-1;b<=y+1;b++)
{



if (minas[a][b]==0)
{

minas2[a][b]=32;
    
    if ((a!=x)&(b!=y))
    {
    x=a;
    y=b;
    c=a;
    d=b;

        for(a=x-1;a<=x+1;a++)
        {
        for(b=y-1;b<=y+1;b++)
        {
            if (minas[a][b]==0)
            {
            minas2[a][b]=32;
            }
            else if (minas[a][b]!=0 & minas[a][b]!=9)
            {
            minas2[a][b]=49;
            }
            else if (minas[a][b]==9)
            {
            minas2[a][b]='X';
            }
        }
        }
    }
x=x+1;
y=y+1;
}

else if (minas[a][b]!=0 & minas[a][b]!=9)
{
minas2[a][b]=49;
}
else if (minas[a][b]==9)
{
minas2[a][b]='X';
}

}
}


for (x=0;x<14;x++)
{
for (y=0;y<14;y++)
{
printf ("%c ",minas2[x][y]);
}
printf("\n");
}









return 0;
}
