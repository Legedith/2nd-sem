#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	while(true)
	{
		for(int i=0;i<2;i++)
		{
			for(int i=0;i<10;i++)
				cout<<" ";
			for(int i=0;i<10;i++)
				cout<<"*";
						
			cout<<endl;	
			for(int i=0;i<10;i++)
			cout<<"	$$##$$##$$##$$##$$";
		for(int i=0;i<10;i++)
				cout<<" ";
		}
		for(int i=0;i<10;i++)
			cout<<"	****";
		for(int i=0;i<10;i++)
				cout<<" ";
		cout<<"****        *****"<<endl;
		for(int i=0;i<10;i++)
			cout<<"	****";
		for(int i=0;i<25000000;i++){}
	}
}
