#include <iostream>
#include <conio.h>
using namespace std;
class graph{
	int n;
	int** p;
	public: 
		void GetGraph(int);
		void ShowGraph();
		int inDeg(int);
		int outDeg(int);

};

void graph::GetGraph(int a)
{
	n = a;
	p = new int*[n];
	for(int i=0; i<n; i++)
	{
		p[i] = new int[n];
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<"Edge from "<<i+1<<" to "<<j+1<<" :"; 
			cin>>p[i][j];
			if((p[i][j]!=1) && (p[i][j]!=0))
			{
				cout<<"This is a simple graph!";
				j--;
			}
		}
	}
}
void graph::ShowGraph()
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
				cout<<p[i][j]<<"\t";
		}
		cout<<endl;
	}
}

int graph::inDeg(int a)
{
	int c=0;
	for(int i=0; i<n; i++)
	{
		c+= p[i][a];
	}
	return c;
}

int graph::outDeg(int a)
{
	int c=0;
	for(int i=0; i<n; i++)
	{
		c+= p[a][i];
	}
	return c;	
}

int main()
{
	graph a;
	a.GetGraph(3);
	a.ShowGraph();
	cout<<a.inDeg(2)<<endl;
	cout<<a.outDeg(2)<<endl;
	getch();
	return 0;
}






