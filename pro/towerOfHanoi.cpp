#include <iostream>
#include <conio.h>
using namespace std;
class tower{
	public:
		void hanoi(int n);
		void toh(int n, char source, char dest, char buffer);
};
void tower::hanoi(int n)
{
	toh(n,'A','C','B');
}
void tower::toh(int n, char sou, char dest, char buf)
{
	if(n==1)
	{
		cout<<"Move disk from "<<sou<<" to "<<dest<<endl;
		return;
	}
//	solve for n-1 disks from source to buffer
	toh(n-1, sou, buf, dest);
//	move disk from source to dest
	cout<<"Move disk from "<<sou<<" to "<<dest<<endl;
//	solve for n-1 disk from buffer to dest
	toh(n-1, buf, dest, sou);
}
int main()
{
	tower myTower;
	myTower.hanoi(3);
	getch();
}
