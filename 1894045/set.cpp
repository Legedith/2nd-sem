#include<iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class Set {
	int s[100];
	int l;
	public:
//		Set();
//		Set(int n, int[]);
		void getSet(int n);
		void displaySet();
		bool ismember(int);
		int cardinality();
		void pow_s();
};
//Set::Set(){
//l=0;
//}
//Set::Set(int n,int a[]){
//	s=a;
//	l=n;
//}
bool Set::ismember(int n){
	for(int i =0; i<l;i++){
	if(n==s[i])
		return true;
	}
	return false;
}
void Set::getSet(int n){
	for(int i=0;i<n;i++)
	{
		cout<<"Enter member "<<i+1<<" of set: ";
		cin>>s[i];
	}
	l=n;
}
void Set::displaySet(){
	for (int i=0;i<l;i++){
		cout<<s[i]<<endl;
	}
}
int Set::cardinality(){
	int k=l;
	for(int i=0; i<l;i++){
			for(int j=i+1;j<l;j++){
				if(s[i]==s[j]){
					k--;
					break;}
				}
	}
	return k;
}
void Set::pow_s()
{
	 int pos=pow(2,l);
	 cout<<"powers set= {";
	 for (int i=0;i<pos;i++)
	 {   cout<<"{";
	 	for(int j=0;j<l;j++)
	 	{
	 		if (i&(1<<j))
	 		{
	 		 cout<<s[j];
	 	    }
		}
		 cout<<"},";
		 if(pos)
	 }
	 cout<<"}";
 
}
int main(){
	Set a = Set();
	a.getSet(3);
	a.displaySet();
	cout<<a.cardinality();
	a.pow_s();
	getch();
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
