// 2. Define a class Complex with appropriate instance variables and member functions. One
// of the functions should be setData() to set the properties of the object. Make sure the
// names of formal arguments are the same as names of instance variables.
#include<iostream>
using namespace std;

class Complex{
    float real,img;
    public:

        Complex(int real =0,int img=0):real(real),img(img){

        }
        void setData(int real ,int img){
            this ->real=real;
            this ->img=img;
        }
        float getReal(){
            return real;
        }
        float getimg(){
            return img;
        }
        void display(){
            cout<<"Real = "<<real<<" "<<"Img = "<<img<<endl;
        }
        
};

int main(){
    Complex c;
    int a,b;
    cout<<"Enter the value a,b = ";
    cin>>a>>b;
    c.setData(a,b);
    float e=c.getReal();
    float d=c.getimg();
    cout<<"Real = "<<e<<" "<<"Img = "<<d<<endl;
    c.display();
    return 0;
}