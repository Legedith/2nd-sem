#include <iostream>
#include <conio.h>
using namespace std;
class fib{
	int n;
	unsigned long long ar[200] ={0};
	public: 
		void SetN(int);
		unsigned long long GetValue();
		unsigned long long fibo(int);
};
void fib::SetN(int a)
{
	n=a;
}
unsigned long long fib::GetValue()
{
	return fibo(n);
}
unsigned long long fib::fibo(int l)
{
	if(l <2)
	{
		return 1;
	}
	if(ar[l]!=0)
	{
		return ar[l];
	}
	 unsigned long long c;
	 c=fibo(l-1)+fibo(l-2);
	 ar[l]=c;
	 return c;
}
int main()
{
	fib a;
	int n = 0;
	while(true)
	{
		cout<<"Enter element no.: ";
		cin>>n;
		a.SetN(n);
		cout<<a.GetValue()<<endl;
	}
	getch();
	return 0;
}
