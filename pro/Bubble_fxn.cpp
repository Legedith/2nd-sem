#include <iostream>
#include <conio.h>
using namespace std;
int* bubble(int[], int);
void display(int[], int);
int main()
{
	int n;
	cout<<"Enter Length of array: ";
	cin>>n;
	int ary[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" :";
		cin>>ary[i];
	}
	bubble(ary,n);
	display(ary,n);
	getch();
}
void display(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"	";
	}
	cout<<endl;
}
int* bubble(int a[], int n)
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
			display(a,n);
		}
//		if flag is zero 
		if(!flag)
		{
			return a;	
		}
		cout<<"Comparisons till now: "<<counter<<endl;
	}
	return a;
}
