#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;
unsigned long fib(int);
int main()
{
	int n;
	time_t current_time = time(NULL);
	cout<<"enter limit:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<fib(i)<<endl;
	}
	time_t end_time = time(NULL);
	cout<<"\nIt took : "<<end_time-current_time<<" seconds to run";
	getch();
	return 0;
}

unsigned long fib(int n)
{
	if(n <2)
		return 1;
	return fib(n-1)+fib(n-2);
}

