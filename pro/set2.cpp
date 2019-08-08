#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class SET{
	int l;
	int* s;
	char b;
	public:
		SET()
		{
			s = new int(l);
		}
		static char n;
		void getSet();
		void showSet();
		SET unique();
		bool subSet(SET);
		SET Uni(SET);
		SET Inter(SET);
		SET Comp(SET);
		SET setDiffer(SET);
		SET symDiffer(SET);
		SET carp(SET);
		//SET sub(SET);
};
char SET::n=65;

void SET::getSet()
{
	cout<<"Enter size of set "<<n<<" : ";
	cin>>l;
	//s = new int(l);
	b=n;
	for(int i = 0; i<l; i++)
	{
		cout<<"Enter element "<<n<<"["<<i+1<<"] : ";
		cin>>s[i];
	}
	n++;
	*this = this->unique();
}

void SET::showSet()
{
	cout<<"\n\n Set "<<b<<" is :\n";
	for(int i =0; i<l;i++)
	{
		cout<<" "<<b<<"["<<i+1<<"] : "<<s[i]<<endl;
	}
}

SET SET::unique()
{
	SET a;
	a.l = l;
	a.b = this->b;
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
//Use - b is subset of this
bool SET::subSet(SET b)
{
	for(int i=0; i<b.l;i++)
	{
		for(int j=0;j<l;j++)
		{
			if (s[i]==b.s[j])
				break;
			if(j==l-1)
				return false;
		}
	}
	return true;
}
SET SET::Uni(SET b)
{
	SET c;
	c.l = l+b.l;
	for(int i=0; i<l+b.l;i++)
	{
		if(i<l)
			c.s[i]=s[i];
		else
			c.s[i]=b.s[i];
	}
	c = c.unique();
	return c;
}
SET SET::Inter(SET b)
{
	SET c;
	c.l = l+b.l;
	int k=0; 
	for(int i=0; i<l;i++)
	{
		for(int j=0; j<b.l; j++)
		{
			if(s[i]==b.s[i])
			{
				c.s[k]=s[i];
				k++;
			}
		}
	}
	c.l = k;
	return c;
}
SET SET::Comp(SET b)
{ 
	if(!b.subSet(*this))
	{
		cout<<"Set must be a sub set of universal set!\n Please try again,\n Universal set returned!\n";
		return b;
	}
	return b.setDiffer(*this);
}
SET SET::setDiffer(SET b)
{
	SET c = *this;
	for(int i = 0; i<b.l; i++)
	{
		for(int j=0; j<c.l; j++)
		{
			if(c.s[i] == b.s[j])
			{
				for(int k=j; k <c.l-1; k++)
				{
					c.s[k] = c.s[k+1];
				}
				c.l--;
			}
		}	
	}	
	return c;
}
SET SET::symDiffer(SET b)
{
	return this->Uni(b).setDiffer(this->Inter(b));
}
SET SET::carp(SET b)
{
	//return array of sets
	return *this;
}

int main()
{
	SET a,b;
	a.getSet();
	a.showSet();
	b.getSet();
	b.showSet();
	cout<<a.subSet(b);
	getch();
	return 0;
}

















