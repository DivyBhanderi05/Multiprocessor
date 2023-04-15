#include<iostream>
#include<string.h>
using namespace std;

class Math{

	public : 
		int a;
		void set(int n){
			a = n;
		}
		void get(){
			cout<<a<<"\t"<<endl	;	
		}
		Math operator ++(){
			Math temp;
			temp.a = ++a;
			return temp;
		}
		Math operator --(){
			Math temp;
			temp.a = --a;
			return temp;
		}
		
};

int main(){
 	Math obj1,obj2,obj3;
 	
 	obj1.set(5);
 	obj1.get();
 	
 	obj2 = ++obj1;
 	obj2.get();
 	
 	obj3 = --obj1;
 	obj3.get();
	
	return 0;
}
