#include <iostream>
#include <conio.h>
using namespace std;
class Bin{
	int n;
	int *p;
	public: 
		void search(int start, int end, int element);
	void Search(int a)
	{
		search(0,n-1,a);
	}
	void input()
	{
		cin>>n;
		p = new int[n];
		for(int i=0; i<n; i++)
		{
			cin>>p[i];
		}
	}
};

void Bin::search(int l, int h, int a)
{
//	divide the list in half
	int mid = (l+h) / 2; 
//	check which half the element belongs to
	if (a == p[mid])
		{
			cout<<"Found"<<endl;
			return;
		}
	if (h == l)
	{
		cout<<"Not Found"<<endl;
		return;
	}
	if (a < p[mid])
		return search(l,mid-1,a);
	if (a > p[mid])
		return search(mid +1,h,a);
	
}
int main()
{
	Bin a;
	a.input();
	int n;
	while(true)
	{
		cin>>n;
		a.Search(n);
	}
}

