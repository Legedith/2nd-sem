#include <iostream>
#include <conio.h>
using namespace std;

class pac{
	public:
		int per(int n, int r);
		int com(int n, int r);
		int fact(int n);

};

int pac::per(int n, int r)
{
	return fact(n)/fact(n-r);
}

int pac::com(int n, int r)
{
	return fact(n)/(fact(n-r)*fact(r));
}

int pac::fact(int n)
{
	if(n<2)
		return 1;
	return n*fact(n-1);
}

int main()
{
	pac a;
	int n,r;
	while (true)
	{
		cout<<"Enter n and r: ";
		cin>>n>>r;
		cout<<"C(n,r): "<<a.per(n,r)<<endl;
		cout<<"P(n,r): "<<a.com(n,r)<<endl;
	}
	getch();
	return 0;
}
