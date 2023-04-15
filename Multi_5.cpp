#include <iostream>
using namespace std;

class NUM {
private:
    int n;

public:
    
    void get(int x){
        n = x;
    }
   
    void disp(void){
        cout << "Number is: " << n;
    }
    
    NUM operator+(NUM& obj) {
        NUM x; 
        x.n = this->n + obj.n;
        return (x); 
    }
};

int main(){
    NUM obj, obj2, sum;
    obj.get(10);
    obj2.get(20);

    sum = obj + obj2;

    sum.disp();
    cout << endl;

    return 0;
}
