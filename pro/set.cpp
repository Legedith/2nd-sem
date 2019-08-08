#include <iostream>
#include <conio.h>
#include<math.h>
using namespace std;
class SET
{
	private:
		int l;
		char set[];
	public:
		SET();
		void input();
		bool is_member(char);
		void powerset();
		int cardinality();
		SET unique();
		void display();
		void cartesian(SET& Ob);
	    static SET Union(SET& set,SET& B);
		bool issubset(SET &Ob);
		
};
SET::SET()
{
	l=1;
	set[l]={0};
}
//SET::SET(int l;char[] s)

void SET::display()
{
	for (int i=0;i<l;i++)
	{
		cout<<set[i];
	}
	cout<<endl;
}
//*********************
//       INPUT
//*********************
void SET ::input()
{
	cout<<"Enter the number of elements: ";
	cin>>l;
	set[l];
	cout<<"Enter elements: ";
	for (int i=0;i<l;i++)
	{
		cin>>set[i];
	}
}
//*********************
//       UNIQUE
//*********************
SET SET::unique()
{/*
        int k = 0;
        char t[l];
        int flag=0;
        for(int i =0; i<l;i++)
        {	
        		flag=0;
                for(int j = i-1; j>=0;j--)
                {
                        if(set[i]==set[j])
						{
                                flag = 1;
                                break;
                        }
                }
                if (flag==0)
                {
                        t[k] = set[i];
                        k++;
                }
        }
        l=k;
        set[l];
        set[k]=t[l];
        
        
        return *this; */

	char temp;
	for (int i=0;i<l;i++)
	{
		for (int j=i+1;j<l;)
		{
			if (set[i]==set[j])
			{
				for (int k=j;k<l-1;k++)
				{
					set[k]=set[k+1];
				}
				l--;
				
			}
			else
			{
				j++;
			}
		}
	}
	return *this;	
}
//*********************
//       ISMEMBER
//*********************
bool SET::is_member(char c)
{
	char elem=c;
	for (int i=0;i<l;i++)
	{
		if (set[i]==elem)
		{
			return true;
		}

	}
	return false;
}
//*********************
//       POWERSET
//*********************
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
			  	cout<<set[j];
			  	comma++;
			  
			}
	  	}
	  	cout<<"}";
	  		if(i<power-1)
	  			cout<<",";
	    }
		cout<<"};";
}
//*********************
//        SUBSET
//*********************
bool SET::issubset(SET &Ob)
{
	if (l>Ob.l)
	{
		return false;
	}
	else
	{
		for(int i=0;i<l;i++)
		{
			if(!Ob.is_member(set[i]))
			{
				return false;
			}
		}
	}
	return true;
}
//*********************
//  CARTESIAN PRODUCT
//*********************
void SET:: cartesian(SET& Ob)
{
	int comma=0;
	cout<<"{";
	cout<<Ob.l;
	cout<<Ob.set[0];
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<Ob.l;j++)
		{
			if(comma)
			{
				cout<<",";
			}
			cout<<"("<<set[i]<<","<<Ob.set[j]<<")";
			comma++;
		}
	}
	cout<<"}";
}
//*********************
//     CARDINALITY
//*********************
int SET::cardinality()
{
	int c=l;  
	for (int i=1;i<l;i++)
	{
		for (int j=0;j<i;j++)
		{
			if (set[i]==set[j])
			{
				c--;
				break;
			}
		}
	}
	return c;
	
	
}
//*********************
//       UNION
//*********************
SET SET::Union(SET& a,SET& b)
{
	SET Un;
	int c=0;	
	char U[a.l+b.l];
	for (int i=0;i<a.l;i++)
	{
		U[i]=a.set[i];
		c++;
	}
	for (int i=0;i<b.l;i++)
	{
		if(!a.is_member(b.set[i]))
		{
			U[c]=b.set[i];
			c++;
		}
	}
	cout<<"{";
	for(int i=0;i<c;i++)
	{
		Un.set[i]=U[i];
		if (i)
		{
		cout<<",";
		}
		cout<<U[i];
	}
	cout<<"}"<<endl;
	Un.l=c;
	SET UNII;
	UNII=Un;
		/*for(int i=0;i<c;i++)
	{
		UNII.set[i]=U[i];
		if (i)
		{
		cout<<",";
		}
		cout<<U[i];
	}*/
	UNII.display();
	//Un.set=U;
	return Un;
	
}
//*********************
//    MAIN FUNCTION
//*********************
int main()
{
	SET A;
	SET B;
	A.input();
	A.unique();
	
	B.input();
	B.unique();
	
	
	//*********************
	//       MENU
	//*********************
	char choice;
	char ch;
	do{
		cout<<"1.Check whether A is a subset of B"<<endl;
		cout<<"2.Check whether B is a subset of A"<<endl;
		cout<<"3.Print Union"<<endl;
		cout<<"4.Print Intersection"<<endl;
		cout<<"5.Print Symmetric Difference"<<endl;
		cin>>choice;
		switch(choice)
		{
			case '1':	
			{
					if(A.issubset(B))
			 		{
			 			cout<<"A is a subset of B"<<endl;
			 		}
			 		else
			 		{
			 			cout<<"A is not a subset of B"<<endl;
			 		}
					break;
			}
			case '2':
			{
				if(B.issubset(A))
			 		{
			 			cout<<"B is a subset of A"<<endl;
			 		}
			 		else
			 		{
			 			cout<<"B is not a subset of A"<<endl;
			 		}
					break;
			}
			case '3':
			{
				SET Uni=SET::Union(A,B);
				Uni.display();
				break;
			}
			case '5':
			{
					
			}
			case '6':
			{
				A.cartesian(B);
				break;
			}
			case '7':
			{
				B.cartesian(A);
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
