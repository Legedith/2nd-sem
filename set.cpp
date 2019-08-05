#include <iostream>
#include <conio.h>
using namespace std;
class SET{
	int l;
	int* s = new int[l];
	public:
		void getSet(int);
		void showSet();
		int cardinality();
		SET powerSet();
		static bool isMember(int, SET);
		SET unique();
};


void SET::getSet(int a)
{
	l=a;
	for(int i = 0; i<l; i++)
	{
		cout<<"Enter element "<<i+1<<" :";
		cin>>s[i];
	}
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

SET SET::powerSet()
{
	SET a = unique();
	return *this;
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

int main()
{
	SET a,b;
	a.getSet(5);
	cout<<"A show set\n";
	a.showSet();
	cout<<"\n is member"<<endl;
	SET::isMember(2,a)?cout<<"is":cout<<"isn't";
	cout<<"A cardinality "<<a.cardinality()<<endl;
	b = a.unique();
	cout<<"B show set\n";
	b.showSet();
	delete &a, &b;
	return 0;
}









