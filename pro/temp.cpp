#include <iostream>
#include <conio.h>
using namespace std;
char* car();
int main()
{
	
	char* a =new char[5];
	a = car();
	for(int i=0; i<5;i++)
	{
		cout<<a[i];
	}
	getch();
	return 0;
}
char* car()
{
	char a[5] ={'t'};
	return a;
}
