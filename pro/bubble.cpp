#include <iostream>
#include <conio.h>
using namespace std;
class bubble{
	int n;
	int *p;
	public:
		void input();
		void sort(int start);
		void display();
		void swap(int a,int b)
		{
			int temp = p[a];
			p[a]=p[b];
			p[b]=temp;
		}
};
void bubble::sort(int a)
{
	if (a==n) 
	{
		display();
		return;
	}
	for(int i=a; i<n;i++)
	{
		swap(a,i);
//		Call upon rest of list with that element
		sort(a+1);
//		return the list to original form
		swap(a,i);
	}
}

void bubble::input()
{
	cin>>n;
	p = new int[n];
	for(int i=0; i<n; i++)
	{
		cin>>p[i];
	}
}
void bubble::display()
{
	for(int i = 0; i<n; i++)
	{
		cout<<p[i]<<"  ";
	}
	cout<<endl;
}
int main()
{
	bubble a;
	a.input();
	a.sort(0);
//	a.display();
	getch();
	return 0;
}
