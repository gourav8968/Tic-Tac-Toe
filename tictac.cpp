#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void display(int a[3][3],int p1,int p2)
{
	int i,j;
	char ch1,ch2,ch3;
	system("cls");
	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
			if(i==0)
			{
				if(a[i][0]==2)
				ch1=' ';
				else if(a[i][0]==3)
				ch1='X';
				else
				ch1='O';
				if(a[i][1]==2)
				ch2=' ';
				else if(a[i][1]==3)
				ch2='X';
				else
				ch2='O';
				if(a[i][2]==2)
				ch3=' ';
				else if(a[i][2]==3)
				ch3='X';
				else
				ch3='O';				
				cout<<"\t\t\t     |     |     \n";
				cout<<"\t\t\t  "<<ch1<<"  |"<<"  "<<ch2<<"  |"<<"  "<<ch3<<"  ";
			}
			else if(i==1)
			{
				if(a[i][0]==2)
				ch1=' ';
				else if(a[i][0]==3)
				ch1='X';
				else
				ch1='O';
				if(a[i][1]==2)
				ch2=' ';
				else if(a[i][1]==3)
				ch2='X';
				else
				ch2='O';
				if(a[i][2]==2)
				ch3=' ';
				else if(a[i][2]==3)
				ch3='X';
				else
				ch3='O';
				cout<<"\n";
				cout<<"\t\t\t-----  -----  -----\n";
				cout<<"\t\t\t     |     |     \n";
				cout<<"\t\t\t  "<<ch1<<"  |"<<"  "<<ch2<<"  |"<<"  "<<ch3<<"  ";
			}
			else
			{
				if(a[i][0]==2)
				ch1=' ';
				else if(a[i][0]==3)
				ch1='X';
				else
				ch1='O';
				if(a[i][1]==2)
				ch2=' ';
				else if(a[i][1]==3)
				ch2='X';
				else
				ch2='O';
				if(a[i][2]==2)
				ch3=' ';
				else if(a[i][2]==3)
				ch3='X';
				else
				ch3='O';
				cout<<"\n";
				cout<<"\t\t\t-----  -----  -----\n";
				cout<<"\t\t\t     |     |     \n";
				cout<<"\t\t\t  "<<ch1<<"  |"<<"  "<<ch2<<"  |"<<"  "<<ch3<<"  ";
			}
		}
	}
}
bool gameover(int a[3][3],int p1,int p2)
{
	int x[3]={0},y[3]={0},z[2]={0},k=0,i,j,check=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==0)
			{
				x[j]=a[j][0]*a[j][1]*a[j][2];
			}
			else if(i==1)
			{
				y[j]=a[0][j]*a[1][j]*a[2][j];
			}
			else
			{
				z[0]=a[0][0]*a[1][1]*a[2][2];
				z[1]=a[1][1]*a[2][0]*a[0][2];
			}
			if(a[i][j]==2)
			k++;
		}
	}
	for(i=0;i<3;i++)
	{
		if(x[i]==125||y[i]==125)
		{
			if(p1==5)
			{
				cout<<"\n\n\n\t\t\tPlayer 1 WINS";
			}
			else
			{
				cout<<"\n\n\n\t\t\tPlayer 2 WINS";
			}
			getchar();
			getchar();
			return 0;
		}
		else if(x[i]==27||y[i]==27)
		{
			if(p1==3)
			{
				cout<<"\n\n\n\t\t\tPlayer 1 WINS";
			}
			else
			{
				cout<<"\n\n\n\t\t\tPlayer 2 WINS";
			}
			getchar();
			getchar();
			return 0;
		}
	}
	if(z[0]==125||z[1]==125)
	{
		if(p1==5)
		cout<<"\n\n\n\t\t\tPlayer 1 WINS";
		else
		cout<<"\n\n\n\t\t\tPlayer 2 WINS";
		getchar();
		getchar();
		return 0;
	}
	else if(z[0]==27||z[1]==27)
	{
		if(p1==3)
		cout<<"\n\n\n\t\t\tPlayer 1 WINS";
		else
		cout<<"\n\n\n\t\t\tPlayer 2 WINS";
		getchar();
		getchar();
		return 0;
	}
	if(k==0)
	{
		cout<<"\n\n\n\t\t\t GAME DRAW";
		getchar();
		getchar();
		return 0;
	}
	else
	return 1;
}
int main()
{
	int new1;
	int i,j,k,n,m,a[3][3]={2},x,y,z,s,s1,s2,ch,ch1,x1[3],y1[3],z1[2],w,l,p1x,p1y,d1,l1,w1,check=0;
	bool finsh;
	char p1,p2;
	cout<<"\t\t ------------------------------------------------------------\n";
	cout<<"\t\t|                                                            |\n";
	cout<<"\t\t|                                                            |\n";
	cout<<"\t\t|                         TIC                                |\n";
	cout<<"\t\t|                         TAC                                |\n";
	cout<<"\t\t|                         TOE                                |\n";
	cout<<"\t\t|                        GAME                                |\n";
	cout<<"\t\t|                                                            |\n";
	cout<<"\t\t|                                                            |\n";
	cout<<"\t\t|                                                            |\n";
	cout<<"\t\t ------------------------------------------------------------\n";
	Sleep(60);
	cout<<"\n\n\t\t\t\tPRESS ENTER TO PLAY";
	getchar();
	system("cls");
	cout<<"\n\n\n\t\t\tChoose your operator X or O";
	cout<<"\n\t\t\tPress 1 for X";
	cout<<"\n\t\t\tPress 2 for O\n";
	cin>>x;
	new1:;
	check=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=2;
		}
	}
	if(x==1)
	{
		p1=3;
		p2=5;
		w=50;
		l=18;
	}
	else
	{
		p1=5;
		p2=3;
		w=18;
		l=50;
	}
	x=rand()%2;
	i=0;
	while(1)
	{
	display(a,p1,p2);
	if(i%2==x)
	{
		w1=0;
		l1=0;
	for(j=0;j<3;j++)
	{
		for(k=0;k<3;k++)
		{
			if(j==0)
			{
				x1[k]=a[k][0]*a[k][1]*a[k][2];	
			}
			else if(j==1)
			{
				y1[k]=a[0][k]*a[1][k]*a[2][k];
			}
			else
			{
				z1[0]=a[0][0]*a[1][1]*a[2][2];
				z1[1]=a[0][2]*a[1][1]*a[2][0];
			}
		}
	}
	for(j=0;j<3;j++)
	{
		if(x1[j]==w&&check==0)
		{
			if(a[j][0]==2)
			{
				y=j;
				z=0;
			}
			else if(a[j][1]==2)
			{
				y=j;
				z=1;
			}
			else
			{
				y=j;
				z=2;
			}
			a[y][z]=p2;
			w1=1;
			check=1;
		}
	}
	for(j=0;j<3;j++)
	{
		if(y1[j]==w&&check==0)
		{
			if(a[0][j]==2)
			{
				y=0;
				z=j;
			}
			else if(a[1][j]==2)
			{
				y=1;
				z=j;
			}
			else
			{
				y=2;
				z=j;
			}
			a[y][z]=p2;
			w1=1;
			check=1;
		}
	}
	if(z1[0]==w&&check==0)
	{
		if(a[0][0]==2)
		{
			y=0;
			z=0;
		}
		else if(a[1][1]==2)
		{
			y=1;
			z=1;
		}
		else
		{
			y=2;
			z=2;
		}
		a[y][z]=p2;
		w1=1;
		check=1;
	}
	else if(z1[1]==w&&check==0)
	{
		if(a[0][2]==2)
		{
			y=0;
			z=2;
		}
		else if(a[1][1]==2)
		{
			y=1;
			z=1;
		}
		else if(a[2][0]==2)
		{
			y=2;
			z=0;
		}
		a[y][z]=p2;
		w1=1;
		check=1;
	}
	if(w1==0)
	{
	for(j=0;j<3;j++)
	{
		if(x1[j]==l&&check==0)
		{
			if(a[j][0]==2)
			{
				y=j;
				z=0;
			}
			else if(a[j][1]==2)
			{
				y=j;
				z=1;
			}
			else
			{
				y=j;
				z=2;
			}
			a[y][z]=p2;
			l1=1;
			check=1;
		}
	}
	for(j=0;j<3;j++)
	{
		if(y1[j]==l&&check==0)
		{
			z=j;
			if(a[0][j]==2)
			y=0;
			else if(a[1][j]==2)
			y=1;
			else
			y=2;
			a[y][z]=p2;
			l1=1;
			check=1;
		}
	}
	if(z1[0]==l&&check==0)
	{
		if(a[0][0]==2)
		{
			y=0;
			z=0;
		}
		else if(a[1][1]==2)
		{
			y=1;
			z=1;
		}
		else
		{
			y=2;
			z=2;
		}
		a[y][z]=p2;
		l1=1;
		check=1;
	}
	if(z1[1]==l&&check==0)
	{
		if(a[0][2]==2)
		{
			y=0;
			z=2;
		}
		else if(a[1][1]==2)
		{
			y=1;
			z=1;
		}
		else
		{
			y=2;
			z=0;
		}
		a[y][z]=p2;
		l1=1;
		check=1;
	}
	}
	if(w1==0&&l1==0&&check==0)
	{
		k=0;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(a[i][j]!=2)
				k++;
			}
		}
		if(k==1)
		{
			if(a[0][0]==p1)
			{
				a[2][2]=p2;
				check=1;
			}
			else if(a[0][2]==p1)
			{
				a[2][0]=p2;
				check=1;
			}
			else if(a[2][0]==p1)
			{
				a[0][2]=p2;
				check=1;
			}
			else if(a[2][2]==p1)
			{
				a[0][0]=p2;
				check=1;
			}
		}
		if(check==0)
		{
		if(a[1][1]==2)
		a[1][1]=p2;
		else if(a[0][0]==2)
		a[0][0]=p2;
		else if(a[0][2]==2)
		a[0][2]=p2;
		else if(a[2][0]==2)
		a[2][0]=p2;
		else if(a[2][2]==2)
		a[2][2]=p2;
		else if(a[0][1]==2)
		a[0][1]=p2;
		else if(a[1][0]==2)
		a[1][0]=p2;
		else if(a[1][2]==2)
		a[1][2]=p2;
		else if(a[2][1]==2)
		a[2][1]=p2;
		check=1;
		}
	}
	}
	else
	{
		d1:;
		cout<<"\n\n\t\t\tYour Turn";
		cout<<"\n\n\t\t\tEnter Position where you want to play : ";
		cin>>p1x;
		cin>>p1y;
		if(p1x<=0||p1x>3||p1y<=0||p1y>3)
		{
			cout<<"\n\n\n\t\t\tPlay a Valid Move";
			getchar();
			goto d1;
		}
		else if(a[p1x-1][p1y-1]!=2)
		{
			cout<<"\n\n\n\t\t\tPosition Alreay Taken BY Player2";
			getchar();
			goto d1;
		}
		else
		{
			a[p1x-1][p1y-1]=p1;
		}
	}
	check=0;
	display(a,p1,p2);
	finsh=gameover(a,p1,p2);
	if(finsh==0)
	{
		display(a,p1,p2);
		cout<<"\n\n\t\t\t To Play one More game Press 1";
		cout<<"\n\n\t\t\t To exit Press 2\n";
		cin>>ch;
		if(ch==1)
		goto new1;
		else
		return 0;
	}
	i++;
	}
	return 0;
}
