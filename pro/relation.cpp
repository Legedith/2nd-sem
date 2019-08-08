#include <iostream>
#include <conio.h>
using namespace std;
void Menu();
class Relation{
	public:
	int l;
	int**p;
	
		Relation();
		void setSize(int);
		void setRel();
		void getRel();
		bool Ref();
		bool Sym();
		bool aSym();
		bool Tran();
};

Relation::Relation()
{
	l=0;
	p = new int*[l];
	for(int i =0; i<l; i++)
	{
		*(p+i) = new int[l];
	}
}
void Relation::setSize(int n)
{
	l=n;
	p = new int*[l];
	for(int i =0; i<l; i++)
	{
		*(p+i) = new int[l];
	}
	setRel();
}
void Relation::setRel()
{
	for(int i = 0; i<l; i++)
	{
		for(int j = 0; j<l; j++)
		{
			cout<<"Include relation from "<<i<<" to "<<j<<" :";
			cin>>p[i][j];
		}	
	}
}
void Relation::getRel()
{
	cout<<"Showing: \n";
	for(int i = 0; i<l; i++)
	{
		for(int j = 0; j<l; j++)
		{
			cout<<p[i][j]<<"	";
		}	
		cout<<endl;
	}
}
bool Relation::Ref()
{
	for(int i=0; i<l;i++)
	{
		if(p[i][i]!=1)
			return false;
	}
	return true;
}
bool Relation::Sym()
{
	for(int i=0;i<l;i++)
	{
		for (int j=i+1;j<l;j++)
		{
			if(p[i][j] != p[j][i])
				return false;
		}
	}
	return true;
}
bool Relation::aSym()
{
	for(int i=0;i<l;i++)
	{
		for (int j=i+1;j<l;j++)
		{
			if(p[i][j])
			{
				if(p[j][i])
					return false;
			}
		}
	}
	return true;
}
bool Relation::Tran()
{
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<l;j++)
		{
			if(p[i][j]==1)
			{
				for(int k=0; k<l;k++)
				{
					if(p[j][k]==1)
					{
						if(p[i][k]==0)
							return false;
					}
				}
			}
		}
	}
	return true;
}
void Switch(Relation b, char c);
int main()
{
	Relation b;
	b.setSize(3);
	char c;	
	do
	{
		b.getRel();
		Menu();
		cin>>c;
		Switch(b,c);
	}while(c!='x'&& c!='X');
	return 0;
}

void Menu()
{
	cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	cout<<"                           MENU                              \n";
	cout<<".............................................................\n";
	cout<<"1. Is it reflexive?\n";
	cout<<"2. Is it Symmetric?\n";
	cout<<"3. Is it anti-Symmetric?\n";
	cout<<"4. Is it transitive?\n";
	cout<<"5. Is it equivalence?\n";
	cout<<"6. Is it Partial order realtion?\n";
	cout<<"7. Is it none?\n";
	cout<<"8. Re-enter relation\n";
	cout<<" TO EXIT, TYPE X\n\n";
}

void Switch(Relation b, char c)
{
	switch(c)
	{
		case '1':
			{
				if(b.Ref())
					cout<<"YES!\n";
				else
					cout<<"NO!\n";
				break;
			}
		case '2':
			{
				if(b.Sym())
					cout<<"YES!\n";
				else
					cout<<"NO!\n";
				break;
			}
		case '3':
			{
				if(b.aSym())
					cout<<"YES!\n";
				else
					cout<<"NO!\n";
				break;
			}
		case '4':
			{
				if(b.aSym())
					cout<<"YES!\n";
				else
					cout<<"NO!\n";
				break;
			}
		case '5':
			{
				if(b.Ref()&&b.Sym()&&b.Tran())
					cout<<"YES!\n";
				else
					cout<<"NO!\n";
				break;
			}
		case '6':
			{
				if(b.Ref()&&b.aSym()&&b.Tran())
					cout<<"YES!\n";
				else
					cout<<"NO!\n";
				break;
			}
		case '7':
			{
				if(b.aSym()||b.Ref()||b.Sym()||b.Tran())
					cout<<"NO!\n";
				else
					cout<<"YES!\n";
				break;
			}
		case '8':
			{
				b.setRel();
				break;
			}
		case 'x':
		case 'X':break;
		default:
			cout<<"Wrong input\n"; 
	}
}


