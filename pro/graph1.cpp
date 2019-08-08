#include <iostream>
#include <conio.h>
using namespace std;
class graph{
	int n;
	int** p;
	public: 
		void GetGraph(int);
		void ShowGraph();
		bool com();	
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
bool graph::com()
{
	int l = (n*(n-1))/2;
	int m = 0;
	for(int i=0; i<n; i++)
	{
		if(p[i][i]==1)return false;
		for(int j=i; j<n; j++)
		{
			m+=p[i][j];
			
		}
	}
	if(m==l) return true;
	return false;
}

int main()
{
	graph a;
	a.GetGraph(3);
	a.ShowGraph();
	if(a.com())
		cout<<"Complete graph";
	else
		cout<<"Not complete";
	getch();
	return 0;
}






