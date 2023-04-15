#include<iostream>
#include<string.h>
using namespace std;

class Message{

	public : 
		void A(){
			cout<<"No"<<endl;
		}
		void A(int a){
			cout<<a<<endl;
			
		}
		void A(int a, int b){
			cout<<a+b<<endl;
			
		}
		void A(int a, int b, int c){
			cout<<a+b+c<<endl;
			
		}
};
int main(){
 	Message obj;
 	obj.A();
 	obj.A(2);
 	obj.A(3,4);
 	obj.A(2,3,4);
	
	return 0;
}
