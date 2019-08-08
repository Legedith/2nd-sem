#include <iostream>
#include <conio.h>
using namespace std;

class truth{
	int a, b;
	int ai[8] = {0};
	int bi[8] = {0};
	public:
		void set();
		void get();
		void dtb();
		void coj();
		void dis();
		void exo();
		void con();
		void bic();
		void exn();
		void neg();
		void nan();
		void nor();
};

void truth::set()
{
	cout<<"Enter a and b: ";
	cin>>a>>b;
	cout<<"A is "<<a<<endl;
	cout<<"B is "<<b<<endl;
	dtb();
}
void truth::get()
{
	cout<<"A is :";
	for(int i=0; i<8; i++)
	{
		cout<<ai[i];
	}
	cout<<"\nB is :";
	for(int i=0; i<8; i++)
	{
		cout<<bi[i];
	}
	cout<<endl;
}
void truth::dtb()
{
	int i=7;
	while(a>0)
	{
		ai[i] = a%2;
		a/=2;
		i--;
	}
	i=7;
	while(b>0)
	{
		bi[i] = b%2;
		b/=2;
		i--;
	}
}
void truth::coj()
{
	cout<<"Conjunction is "<<endl;
	for(int i=0; i<8; i++)
	{
		
		cout<<((ai[i]) & (bi[i]));
	}
	cout<<endl;
	
}
void truth::dis()
{
	cout<<"Disjunction is "<<endl;
	for(int i=0; i<8; i++)
	{
		
		cout<<(ai[i]|bi[i]);
	}
	cout<<endl;
	
}
void truth::exo()
{
	cout<<"XOR is "<<endl;
	for(int i=0; i<8; i++)
	{
		
		cout<<(ai[i]^bi[i]);
	}
	cout<<endl;
	
}
void truth::con()
{
	cout<<"Conditional: "<<endl;
	for(int i=0; i<8; i++)
	{	
		cout<<(!ai[i]|bi[i]);
	}
	cout<<endl;
	
}
void truth::bic()
{
	cout<<"Bi-Conditional: "<<endl;
	for(int i=0; i<8; i++)
	{	
		cout<<((!ai[i]|bi[i])&(!bi[i]|ai[i]));
	}
	cout<<endl;
	
}
void truth::exn()
{
	cout<<"Exclusive NOR: "<<endl;
	for(int i=0; i<8; i++)
	{	
		cout<<(!(ai[i]^bi[i]));
	}
	cout<<endl;
	
}
void truth::neg()
{
	cout<<"Negation: "<<endl;
	cout<<"A: ";
	for(int i=0; i<8; i++)
	{	
		cout<<(!ai[i]);
	}
	cout<<endl;
	cout<<"B: ";
	for(int i=0; i<8; i++)
	{	
		cout<<(!bi[i]);
	}
	cout<<endl;
	
}
void truth::nan()
{
	cout<<"NAND "<<endl;
	for(int i=0; i<8; i++)
	{
		
		cout<<(!(ai[i]&bi[i]));
	}
	cout<<endl;
}
void truth::nor()
{
	cout<<"NOR "<<endl;
	for(int i=0; i<8; i++)
	{
		
		cout<<!(ai[i]|bi[i]);
	}
	cout<<endl;
}
int main()
{
	truth t;
	t.set();
	t.get();
	int o;
	while (true)
	{
		cout<<"Menu\n";
		cout<<"1. conjuction of two numbers .\n";
		cout<<"2. disjunction of two numbers .\n";
		cout<<"3. exclusive or of two numbers .\n";
		cout<<"4. negation of anumber .\n";
		cout<<"5. nand of any numbers .\n";
		cout<<"6. nor of any number .\n";
		cout<<"7. exclusive nor .\n";
		cout<<"8. conditional of two numbers .\n";
		cin>>o;
		switch(o)
		{
			case 1:{
				t.coj();
				break;
		        	}
		    case 2:{
		    	t.dis();
				break;
		        	}
		    case 3:{
		    	t.exo();
				break;
			    }
			case 4:{
				t.neg();
				break;
		    	}
		    case 5:{
		    	t.nan();
				break;
			     }
		    case 6:{
		    	t.nor();
				break;
			    }
			case 7:{
			t.exn();
				break;
			    }
			case 8:{
				t.con();
				break;
			}
			
			case 9:{
				t.bic();
				break;
			}
			case 10: return 0;
		}
	}

	getch();
}
