// 11. Create a class Marks that have one member variable marks and one member function
// that will print marks. We know that we can access member functions using (.) dot operator. Now
// you need to overload (->) arrow operator to access that function.
#include<iostream>
using namespace std;

class Marks{
    public:
    int marks;
        void print(){
            cout<<"Print marks is = "<<marks<<endl;
        }

        Marks* operator->(){
            return this;
        }
};

int main(){
    Marks m;
    m.marks=100;
    m.print();

    m->print();
    return 0;
}