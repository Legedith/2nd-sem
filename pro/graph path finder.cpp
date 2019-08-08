#include <iostream>
#include <conio.h>
using namespace std;
class graph{
	int n;
	int** p;
	public: 
		void GetGraph(int);
		void ShowGraph();
		int len(int, int, int);
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
		for(int j=i; j<n; j++)
		{
			cout<<"Edge from "<<i+1<<" to "<<j+1<<" :"; 
			cin>>p[i][j];
			p[j][i]=p[i][j];
		}
	}
}
void graph::ShowGraph()
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
				cout<<p[i][j]<<" ";
		}
		cout<<endl;
	}
}

int graph::len(int x, int ra, int rb)
{
	int a[n][n];
	int ans[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			a[i][j]=p[i][j];
			ans[i][j]=0;
		}
	}
	for(int r=0; r<x-1; r++)
	{
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				for(int k=0; k<n; k++)
				{
					ans[i][j] += a[i][k]*p[k][j];
				}
			}
		}
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				cout<<ans[i][j]<<"	";
			}
			cout<<endl;
		}
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				a[i][j]=ans[i][j];
				ans[i][j]=0;
			}
		}
	}
	for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				cout<<a[i][j]<<"	";
			}
			cout<<endl;
		}
	return a[ra][rb];
}

int main()
{
	graph a;
	int v,n,x,y;
	cout<<"Enter no. of vertices: ";
	cin>>v;
	a.GetGraph(v);
	a.ShowGraph();
	cout<<"Enter no. of paths, source and destination: ";
	cin>>n>>x>>y;
	a.len(n,x,y);
	getch();
	return 0;
}


