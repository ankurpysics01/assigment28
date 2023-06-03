// Define a class Complex with appropriate instance variables and member functions.
// Overload following operators
// a. << insertion operator
// b. >> extraction operator
#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        complex(){

        }
        complex(int x,int y){
            a=x;
            b=y;
        }
        friend ostream & operator<< (ostream & os,complex t);
        friend istream & operator>> (istream & is,complex t);

};
ostream & operator<< (ostream & os,complex t){
    os<<t.a<<" + "<<"i"<<t.b<<endl;
    return os;
}
istream & operator>> (istream & is ,complex t){
    cout<<"Enter the value a :-"<<endl;
    is>>t.a;
    cout<<"Enter the value b :-"<<endl;
    is>>t.b;
    return is;
}

int main() {
    complex c1(2.5, 3.7);
    cout << "c1: " << c1 << std::endl;

    complex c2;
    
    cout << "Enter a complex number: ";
    cin >> c2;
    cout << "c2: " << c2 << std::endl;

    return 0;
}


// #include <iostream>

// class Complex {
// private:
//     double real;
//     double imaginary;

// public:
//     // Default constructor
//     Complex() : real(0.0), imaginary(0.0) {}

//     // Parameterized constructor
//     Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}

//     // Getter functions
//     double getReal() const { return real; }
//     double getImaginary() const { return imaginary; }

//     // Overloaded insertion operator (<<)
//     friend std::ostream& operator<<(std::ostream& os, const Complex& c);

//     // Overloaded extraction operator (>>)
//     friend std::istream& operator>>(std::istream& is, Complex& c);
// };

// // Overloaded insertion operator (<<)
// std::ostream& operator<<(std::ostream& os, const Complex& c) {
//     os << c.real;
//     if (c.imaginary >= 0.0) {
//         os << " + " << c.imaginary << "i";
//     } else {
//         os << " - " << -c.imaginary << "i";
//     }
//     return os;
// }

// // Overloaded extraction operator (>>)
// std::istream& operator>>(std::istream& is, Complex& c) {
//     std::cout << "Enter the real part: ";
//     is >> c.real;
//     std::cout << "Enter the imaginary part: ";
//     is >> c.imaginary;
//     return is;
// }

// int main() {
//     Complex c1(2.5, 3.7);
//     std::cout << "c1: " << c1 << std::endl;

//     Complex c2;
//     std::cout << "Enter a complex number: ";
//     std::cin >> c2;
//     std::cout << "c2: " << c2 << std::endl;

//     return 0;
// }
