#include <iostream>
#include <conio.h>
using namespace std;
bool search(int,int,int,int[]);
int main()
{
	int size,n;
	cout<<"Enter Size: ";
	cin>>size;
	int a[size];
	for(int i=0;i<size;i++)
		cin>>a[i];
	cout<<"Enter element to find: ";
	cin>>n;
	if(search(n,0, size-1,a))
		cout<<"Found";
	else
		cout<<"Not-found";
	getch();
	return 0;
}

bool search(int n,int low, int high, int ar[])
{
	int a = (low+high)/2;
	if(n==ar[a])
		return 1;
	if(low==high)
		return 0;
	if(n>ar[a])
		return search(n,a+1,high,ar);
	if(n<ar[a])
		return search(n,low,a,ar);		
}
