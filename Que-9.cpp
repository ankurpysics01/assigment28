// 9. Create an Integer class that contains int x as an instance variable and overload
// casting int() operator that will type cast your Integer class object to int data type.
#include<iostream>
using namespace std;

class Integer{
    int x;
    public:
    Integer(int x){
        this->x = x;
    }
    int getValue(){
        return x;
    }
    operator int() const{
        return x;
    }


};

int main(){
    Integer i(10.5);
    int c=i;
    cout<<c<<endl;
    return 0;
}