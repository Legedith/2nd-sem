#include <iostream>
#include <conio.h>
using namespace std;
class rep{
	int n;
	int* p;
	public:
		void per(int);
		void get();
		void swap(int,int);
};

void rep::get()
{
	cout<<"Enter no. of elements: ";
	cin>>n;
	p = new int[n];
	for(int i=0;i<n; i++)
	{
		cin>>p[i];
	}
}
void rep::per(int j)
{
	if(j==n)
	{
		for(int i=0; i<n; i++)
		{
			cout<<p[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=j; i<n; i++)
	{
		swap(j,i);
		per(j+1);
		swap(j,i);
	}
}
void rep::swap(int a, int b)
{
	int temp = p[a];
	p[a]=p[b];
	p[b]=temp;
}
int main()
{
	rep r;
	r.get();
	r.per(0);
	getch();
	return 0;
}
