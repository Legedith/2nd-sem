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
		cout<<"Move from "<<from<<" to "<<to<<endl;
	}
	hanoi(from, mid, to, n-1);
	cout<<"Move from "<<from<<" to "<<to<<endl;
	hanoi(mid, to, from, n-1);
}


int main()
{
	tower t;
	t.hanoi('a','b','c',3);
	cout<<"here"<<endl;
	getch();
	return 0;
}
