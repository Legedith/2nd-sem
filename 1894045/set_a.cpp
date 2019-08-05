#include <iostream>
#include <conio.h>
#include<math.h>
using namespace std;
class SET
{
	private:
		int l;
		char A[];
		char AU[];
	public:
		void input();
		bool is_member();
		void powerset();
		int cardinality();
		
};
void SET ::input()
{
	cout<<"Enter the number of elements";
	cin>>l;
	A[l];
	cout<<"Enter elements";
	for (int i=0;i<l;i++)
	{
		cin>>A[i];
	}
}
bool SET::is_member()
{
	char elem;
	cout<<"Enter the element: ";
	cin>>elem;
	for (int i=0;i<l;i++)
	{
		if (A[i]==elem)
		{
			return true;
		}

	}
	return false;
}
void SET::powerset()
{
	int power=pow(2,l);
	int comma=0;
		cout<<"The power set is";
		cout<<"{";
		for(int i=0;i<power;i++)
		{
		cout<<"{";
		comma=0;
	  	for(int j=0; j<l; j++)
	  	{
	  		if(i&(1<<j))
	  		{
			  if (comma)
			  {
			  	cout<<",";
			  }
			  cout<<A[j];
			  comma++;
			  
			}
	  	}
	  	cout<<"}";
	  		if(i<power-1)
	  			cout<<",";
	    }
		cout<<"};";

}
int SET::cardinality()
{
	int c=l;  
	for (int i=1;i<l;i++)
	{
		for (int j=0;j<i;j++)
		{
			if (A[i]==A[j])
			{
				c--;
				break;
			}
		}
	}
	char AU[c];
	return c;
	
	
}
int main()
{
	SET A;
	A.input();
	int choice;
	char ch;
	do{
		cout<<"1.Check whether entered element exists in the set"<<endl;
		cout<<"2.Print the cardinality of the set"<<endl;
		cout<<"3.Print the powerset"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				{if(A.is_member())
					{
						cout<<"Element exists in the set"<<endl;
					}
					else
					{
						cout<<"Element does not exist in the set"<<endl;
					}
					break;
				}
			case 2:{
				cout<<"Cardinality is"<<A.cardinality()<<endl;
				break;
			}
			case 3:{
				A.powerset();
				cout<<endl;
				break;
			}
			default: cout<<"Invalid input";
		}
		cout<<"Do you want to continue: Type 'y' or'Y'"<<endl;
		cin>>ch;
	}
	while(ch=='y'||ch=='Y');
	
	getch();
}
