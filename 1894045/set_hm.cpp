#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class SET{
	int l;
	int* s = new int[l];
	char b;
	public:
		static char n;
		void getSet(int);
		void showSet();
		int cardinality();
		void powerSet();
		static bool isMember(int, SET);
		SET unique();
		void Unique();
};
char SET::n=65;

void SET::getSet(int a)
{
	l=a;
	for(int i = 0; i<l; i++)
	{
		cout<<"Enter element "<<n<<"["<<i+1<<"] :";
		cin>>s[i];
	}
	n++;
}

void SET::showSet()
{
	for(int i =0; i<l;i++){
		cout<<s[i];
	}
}

int SET::cardinality()
{
	SET a = unique();
	return a.l;
}

bool SET::isMember(int a, SET b)
{
	for(int i = 0; i<b.l; i++)
	{
		if(a == b.s[i])
			return true;
	}
	return false;
}

void SET::powerSet()
{
	SET a = unique();
	int power=pow(2,a.l);
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
				  cout<<a.s[j];
				  comma++;
				  
				}
		  	}
	  	cout<<"}";
	  		if(i<power-1)
	  			cout<<",";
	    }
		cout<<"};";
}

SET SET::unique()
{
	SET a;
	a.l = l;
	int k = 0;
	for(int i =0, flag = 0; i<l;i++, flag = 0)
	{
		for(int j = (i==0?-1:i-1); j>=0;j--)
		{
			if(s[i]==a.s[j]){
				flag = 1;
				break;
			}
		}
		if (!flag)
		{
			a.s[k] = s[i];
			k++;
		}
	}
	a.l = k;
	return a;
}

void SET::Unique()
{
	for(int i=0; i<l;i++)
	{
		for(int j=i+1; j<l;j++)
			if(s[i]==s[j])
			{
				for(int k=j;k<l-2;k++)
				{
					s[k]=s[k+1];
				}
				l--;
				break;
			}
	}
	showSet();
}



/*
class Binary
{
	public:
		int n;
		Binary();
		void increment();
}

 Binary::Binary()
 {
 	int n =0;
 }
 void Binary::increment()
 {
 	if(n%2==0)
 	{
		n++; 
	}
	else
		n*=10;
 } 
*/
int main()
{
	SET A;
	int nA;
	cout<<"Enter size of set A: ";
	cin>>nA;
	A.getSet(nA);
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
				{if(SET::isMember(2,A))
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
				A.powerSet();
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
	delete &A;
	return 0;
}









