#include <iostream>
#include <conio.h>
using namespace std;
class insert{
	int n;
	int* a=new int[n];
	public:
		void display();
		void sort();
		void Set(int);
		int getLen();
};
void insert::sort()
{
	int count=0;
	for(int i=1;i<n;i++, flag=false)
	{
		int temp = a[i];
		int j = i-1;
		while(j>=0 && temp<a[j])
		{
			a[j+1]=a[j];
			count++;
			j--;
		}
		a[j+1]=temp;
		display();
		cout<<"Passes till now: "<<count<<endl;
	}
}
void insert::display()
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"	";
	}
	cout<<endl;
}
void insert::Set(int l)
{
	n=l;
	a = new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>a[i];
	}
}
int insert::getLen()
{
	return n;
}
int main()
{
	insert c;
	c.Set(8);
	c.display();
	c.sort();
	getch();
}

