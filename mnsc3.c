#include <stdio.h>


void bucle(int xx,int yy,int aa)
{

int c;
for(c=0;c<=7;c++)
{

if (aa==0)
{
xx=xx-1;
yy=yy-1;
}
if (aa==1)
{
xx=xx-1;
yy=yy;
}
if (aa==2)
{
xx=xx-1;
yy=yy+1;
}
if (aa==3)
{
xx=xx;
yy=yy-1;
}
if (aa==4)
{
xx=xx;
yy=yy+1;
}
if (aa==5)
{
xx=xx+1;
yy=yy-1;
}
if (aa==6)
{
xx=xx+1;
yy=yy;
}
if (aa==7)
{
xx=xx+1;
yy=yy+1;
}

}

}



int main()
{
    
int minas[14][14];    
int minas2[14][14];    
int x,y,a,b,c,d,rn,ct;
int matx[10],maty[10],mata[10];
for (x=0;x<14;x++)
{
for (y=0;y<14;y++)
{
minas[x][y]=0;
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
minas[x][y]=0;

if (x==0||y==0||x==13||y==13)
{
minas[x][y]=1;
}
}
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

x=7;
y=6;

int t;



ct=0;
matx[ct]=x;
maty[ct]=y;
mata[ct]=0;

for(a=0;a<=7;a++)
{

bucle(x,y,a);

if (minas[x][y]==0)
{
minas2[x][y]=32;

ct=c+1;
matx[ct]=x;
maty[ct]=y;
mata[ct]=a;
a=0;
}

else if (minas[x][y]!=0)
{
	if (a==7)
	{
	ct=ct-1;
	x=matx[ct];
	y=maty[ct];
	a=mata[ct];
	a=a+1;
	if (ct<0)
	{
	ct=0;
	}
	
	}
	
	minas2[x][y]=49;
	
	if (minas[a][b]==9)
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
