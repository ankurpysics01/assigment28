// 10. Create a Distance class having 2 instance variable feet and inches. Also create default
// constructor and parameterized constructor takes 2 variables . Now overload () function call
// operator that takes 3 arguments a , b and c and set feet = a + c + 5 and inches = a+b + 15.

#include<iostream>
using namespace std;

class Distance{
    int feet=0,inches=0;
    public:
     Distance(){}
     Distance(int f,int i){
        feet=f;
        inches=i;
     }
     Distance operator() (int a,int b,int c){
        Distance temp;
        temp.feet=a+b+c+5;
        temp.inches=a+b+15;
        return temp;
     }
     void display(){
        cout<<"Feet : "<<feet<<"\tInches : "<<inches<<endl;
     }
};

int main(){
    Distance d1;
    d1.display();

    Distance d2(2,4);
    d2.display();

    Distance d3=d2(1,2,3);
    d3.display();
    return 0;

}