//3. Overload subscript operator [] that will be useful when we want to check for an index out
// of bound.

#include<iostream>
using namespace std;

class Sunscript{

    int arr[100];
    const int size=100;
    public:
        void setArray(int n,int index){
            if(index>=size){
                cout<<"Array index out of bound "<<endl;
                exit(0);
            }
            arr[index]=n;
        }

        void display(int index){
            cout<<"the value of array :-"<<arr[index]<<endl;
        }
    

    int operator[](int index){
        if(index>= size){
            cout<<"Array index out of bound "<<endl;
            exit(0);
        }
        return arr[index];
    }
};

int main(){
    Sunscript s;
    cout<<"Enter the index where you add number is :-"<<endl;
    int index;
    cin>>index;
    cout<<"Enter the number at this index :-"<<endl;
    int n;
    cin>>n;
    s.setArray(n,index);
    int a=s[index];
    cout<<"At the given position value is "<<a<<endl;
    // s.display(index);

}
