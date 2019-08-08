#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;
unsigned long fib(int, unsigned long[]);
int main()
{
	int n;
	unsigned long ar[50] ={0};
	time_t current_time = time(NULL);
	cout<<"enter limit:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<fib(i,ar)<<endl;
	}
	time_t end_time = time(NULL);
	cout<<"\nIt took : "<<end_time-current_time<<" seconds to run";
	getch();
	return 0;
}

unsigned long fib(int n, unsigned long a[])
{
	if(n <2)
	{
		return 1;
	}
	if(a[n]!=0)
	{
		return a[n];
	}
	 unsigned long c;
	 c=fib(n-1,a)+fib(n-2,a);
	 a[n]=c;
	 return c;
}

