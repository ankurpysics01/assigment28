// 8. Create a Coordinate class for 3 variables x,y and z and overload comma operator such
// that when you write c3 = (c , c2 ) then c2 is assigned to c3. Where c,c2,and c3 are
// objects of 3D coordinate class.
#include<iostream>
using namespace std;

class Coordinate{
    int x,y,z;
    public:
    Coordinate(int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }
    Coordinate(){

    }
    Coordinate operator,(Coordinate c){
       c.x=x;
       c.y=y;
       c.z=z;
     return c;   
    }
    void display(){
        cout<<"Display final value "<<endl;
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
};

int main(){
    Coordinate c(1,2,3),c2(4,7,9),c3;
    c3=(c2,c);
    c3.display();
    return 0;
}
