#include <iostream>
#include <conio.h>
using namespace std;
class bin{
	int n;
	int* a=new int[n];
	public:
		bool search(int, int,int);
		void display();
		void Set(int);
		int getLen();
		
};
void bin::display()
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"	";
	}
	cout<<endl;
}

void bin::Set(int g)
{
	n=g;
	a = new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>a[i];
	}
}
int bin::getLen()
{
	return n;
}
bool bin::search(int e,int low, int high )
{
	int m = (low+high)/2;
	if(e==a[m])
		return 1;
	if(low==high)
		return 0;
	if(e>a[m])
		return search(e,m+1,high);
	if(e<a[m])
		return search(e,low,m);
}
int main()
{
	bin a;
	int len,e;
	cout<<"Enter length of array: ";
	cin>>len;
	a.Set(len);
	cout<<"Enter element to find: ";
	cin>>e;
	if(a.search(e,0,len))
		cout<<"Found!\n";
	else
		cout<<"Not Found!";
		getch();
		return 0;
	
}
