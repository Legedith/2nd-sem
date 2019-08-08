#include <iostream>
#include <conio.h>
using namespace std;
class SET{
	int l;
	int* s = new int(l);;
	char b;
	public:
	/*	SET()
		{	
			l=0;
			s = new int(l);
		}
	*/
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
		void carp(SET);
};



/*////////////////////////////////////////////
	Assigns a unique alphabet to each set
////////////////////////////////////////////*/
char SET::n=65;




/*////////////////////////////////////////////
					SETTER
////////////////////////////////////////////*/

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



/*////////////////////////////////////////////
					GETTER
////////////////////////////////////////////*/

void SET::showSet()
{
	cout<<"\n\n Set "<<b<<" is :\n";
	for(int i =0; i<l;i++)
	{
		cout<<" "<<b<<"["<<i+1<<"] : "<<s[i]<<endl;
	}
	cout<<"\n l = "<<l<<endl;
}



/*////////////////////////////////////////////
	Returns a set with only unique elements
////////////////////////////////////////////*/

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




/*////////////////////////////////////////////
				SUBSET
		Usage - A.subSet(B)
		returns true if B is subset of A 
////////////////////////////////////////////*/

bool SET::subSet(SET b)
{
	for(int i=0; i<b.l;i++)
	{
		for(int j=0;j<l;j++)
		{
			if (s[j]==b.s[i])
				break;
			if(j==(l-1))
				return false;
		}
	}
	return true;
}




/*////////////////////////////////////////////
				UNION
		Usage - A.Uni(B)
		returns a set which is union of A and B
////////////////////////////////////////////*/

SET SET::Uni(SET b)
{
	SET c;
	c.l = l+b.l;
	c.b=n++;
	for(int i=0; i<l+b.l;i++)
	{
		if(i<l)
			c.s[i]=s[i];
		else
			c.s[i]=b.s[i-l];
	}
	c = c.unique();
	return c;
}




/*////////////////////////////////////////////
				Intersection
		Usage - A.Inter(B)
		returns a set which is intersection of A and B
////////////////////////////////////////////*/

SET SET::Inter(SET b)
{
	SET c;
	c.l = l+b.l;
	c.b=n++;
	int k=0; 
	for(int i=0; i<l;i++)
	{
		for(int j=0; j<b.l; j++)
		{
			if(s[i]==b.s[j])
			{
				c.s[k]=s[i];
				k++;
			}
		}
	}
	c.l = k;
	return c;
}




/*////////////////////////////////////////////
				COMPLIMENT
			Usage - A.Comp(B)
	where	B = Universal set
		returns a set which is compliment of A w.r.t B
////////////////////////////////////////////*/

SET SET::Comp(SET b)
{ 
	if(!b.subSet(*this))
	{
		cout<<"Set must be a sub set of universal set!\n Please try again,\n Universal set returned!\n";
		return b;
	}
	return b.setDiffer(*this);
}




/*////////////////////////////////////////////
				SET DIFFERENCE
				     A-B
			Usage - A.setDiffer(B)
		returns a set which is compliment of A w.r.t B
////////////////////////////////////////////*/

SET SET::setDiffer(SET b)
{
	SET c = *this;
	for(int i = 0; i<b.l; i++)
	{
		for(int j=0; j<c.l; j++)
		{
			if(c.s[j] == b.s[i])
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


/*////////////////////////////////////////////
				SYMMETRIC DIFFERENCE
			Usage - A.symDiffer(B)
		Summetric difference is (AUB)-(AnB)
////////////////////////////////////////////*/

SET SET::symDiffer(SET b)
{
	SET u,i,ans;
	u = this->Uni(b);
//	cout<<"\nUnion\n ";
//	u.showSet();
//	cout<<"\nInter\n ";
	i = this->Inter(b);
//	i.showSet();
//	cout<<"\nANs\n ";
	ans = u.setDiffer(i);
//	ans.showSet();
	return ans;
}


/*////////////////////////////////////////////
				Cartesian Product
			Usage - A.carp(B)
		prints all (a,b) for a in A & b in B
////////////////////////////////////////////*/

void SET::carp(SET b)
{
	cout<<"The Cartesian product is : \n {\n";
	for(int i = 0; i<l; i++ )
	{
		for(int j = 0; j<b.l; j++)
		{
			cout<<"  { "<<s[i]<<" , "<<b.s[j]<<" }\n";
		}
	}
	cout<<" }";
}

int main()
{
	SET a,b;
	a.getSet();
	a.showSet();
	b.getSet();
	b.showSet();
		a.getSet();
	a.showSet();
		a.getSet();
	a.showSet();	
	cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	cout<<"                           MENU                              \n";
	cout<<".............................................................\n";
	cout<<"1. Check A is Subset of B\n";
	cout<<"2. Check B is Subset of A\n";
	cout<<"3. Show union of A and B\n";
	cout<<"4. Show intersection of A and B\n";
	cout<<"5. Show compliment of A (w.r.t B)\n";
	cout<<"6. Show B-A\n";
	cout<<"7. Show A-B\n";
	cout<<"8. Show Symmetric difference \n";
	cout<<"9. Show cartesian product\n";
	cout<<"10.Re-enter A\n";
	cout<<"11.Re-enterB\n";
	cout<<"12.Exit";
	
	
	getch();
	return 0;
}

