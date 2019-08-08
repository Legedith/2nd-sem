#include <iostream>
#include <conio.h>
using namespace std;
class T{
	public:
		int func1(int);
		int func2(int);
		double func3(double);
};

int T::func1(int n)
{
	if(n==0)
		return 1;
	return func1(n-1)+n;
}

int T::func2(int n)
{
	if(n==0)
		return 1;
	return func2(n-1)+(n*n);
}

double T::func3(double n)
{
	if(n==1)
		return 1;
	return 2*((func3(n-1)/2)+n);
}
int main()
{
	T a;
	cout<<a.func1(3)<<endl;
	cout<<a.func2(3)<<endl;
	cout<<a.func3(3)<<endl;
	getch();
	return 0;
}
