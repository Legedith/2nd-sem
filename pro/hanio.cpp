#include <iostream>
#include <conio.h>
using namespace std;

class tower{
	public:
		void hanoi(char a, char b, char c, int n);
};

void tower::hanoi(char from, char to, char mid, int n)
{
	if(n==1)
	{
		cout<<"Move disk 1 from "<<from<<" to "<<to<<endl;
		return;
	}
	hanoi(from, mid, to, n-1);
	cout<<"Move disk "<<n<<" from "<<from<<" to "<<to<<endl;
	hanoi(mid, to, from, n-1);
}


int main()
{
	tower t;
	int n;
	while(true)
	{
		cout<<"\n\nEnter the number of discs: ";
		cin>>n;
		t.hanoi('a','b','c',n);
	}
	
	return 0;
}
