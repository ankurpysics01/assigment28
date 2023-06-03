// 6. Create a complex class and overload assignment operator for that class.
#include<iostream>
using namespace std;

class Complex{
    int re,img;
    public:
    Complex(int a,int b){
        re=a;
        img=b;
    }
    Complex(){

    }
    Complex operator=(Complex c){
        re=c.re;
        img=c.img;
    }
    void display(){
        cout<<re<<"+"<<img<<"i"<<endl;
    }
};
int main(){
    Complex c(4,6),c1;
    c1=c;
    c1.display();
    return 0;
}
