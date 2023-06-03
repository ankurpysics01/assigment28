//7. Create an Integer class and overload not operator for that class.
#include<iostream>
using namespace std;

class Integer{
    int i;
    public:
    Integer(int x){
        i=x;
    }
    int operator!(){
        return -i;
    }
    void display(){
        cout<<"Final value is :-"<<i<<endl;
    }
};

int main(){
    int a;
    cout<<"Enter the value :-"<<endl;
    cin>>a;
    Integer p(a);
    cout<<"Not operator final value : "<<!p<<endl;
    return 0;   
}