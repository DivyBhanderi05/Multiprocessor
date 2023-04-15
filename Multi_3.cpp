#include<iostream>
#include<string.h>
using namespace std;

class A{

	public : 
		void display(){
			cout<<"Class A Method"<<endl;
		}
		
};
class B : public A{

	public : 
		void display(){
			cout<<"Class B Method"<<endl;
		}
		
};
int main(){
 	B obj;
 	obj.A :: display();
 	obj.display();
 	
	
	return 0;
}
