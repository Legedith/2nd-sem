#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class poly
{
	public:
		int n;
		int fac(int );
		int  combination(int,int);
};
int poly::fac(int n)
{
	int res=1;
	for(int i=2;i<=n;i++)
	{
		res*=i;
	}
	return res;
}int poly::combination(int n,int r)
{
	return fac(n)/(fac(n-r)*fac(r));
}
int main()
{
	poly obj;
	int n,r;
	cout<<"enter the total no. of variables:";
	cin>>n;
	cout<<"enter the constant:";
	cin>>r;
	
	int b=obj.combination(n+r-1,n-1);
	cout<<"\n the combination is:"<<b;
	getch();
	return 0;
	
	
	
}
		

