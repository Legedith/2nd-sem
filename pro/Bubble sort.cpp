#include <iostream>
#include <conio.h>
using namespace std;
class bubble
{
	int n;
	int* a;
	public:
		void display();
		void sort();
		void Set(int);
		int getLen();
};
void bubble::sort()
{
	bool flag = false;
	int counter=0;
//	Loop for all elements except last
	for(int i=0; i<n-1;i++, flag = false)
	{ 
//		Loop each element till soted is encountered
		for(int j=0; j<n-i-1; j++)
		{
//			compare current element with next
			if (a[j]>a[j+1])
			{
//				set flag to 1
				flag = true;
//				swap them
				int temp =a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				counter++;
			}
			display();
		}
//		if flag is zero 
		if(!flag)
		{
			return;	
		}
		cout<<"Comparisons till now: "<<counter<<endl;
	}
}
void bubble::display()
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"	";
	}
	cout<<endl;
}
void bubble::Set(int l)
{
	n=l;
	a = new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>a[i];
	}
}
int bubble::getLen()
{
	return n;
}
int main()
{
	bubble c;
	c.Set(8);
	c.display();
	c.sort();
	getch();
}
