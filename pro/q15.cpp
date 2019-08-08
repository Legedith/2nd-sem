#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class func{
	int n;
	int*p;
	public: 
		void input();
		void show();
		int calculate(int);
};

void func::input()
{
	int a;
	cout<<"Enter the max degree of the polynomial:  ";
	cin>>a;
	n=a+1;
	p = new int[n];
	for(int i=0; i<n; i++)
	{
		cout<<"Coefficient of x^"<<i<<" :";
		cin>>p[i];
	}
	
}
void func::show()
{
	for(int i=n-1; i>-1; i--)
	{
		if(p[i]!=0)
		{
			cout<<p[i]<<"*X^"<<i;
			if(i!=0)cout<<" + ";
		}
	}
	cout<<endl;
}
int func::calculate(int x)
{
	int ans=0;
	for(int i=0; i<n; i++)
	{
		ans+=p[i]*pow(x,i);
	}
	return ans;
}

int main()
{
	func a;
	int x;
	a.input();
	a.show();
	cout<<"Enter the value of x: ";
	cin>>x;
	cout<<a.calculate(x);
	getch();
	return 0;
}




