// Create a student class and overload new and delete operators as a member function of
// the class.

#include<iostream>
using namespace std;

class Student{
    public:
        int id;
        string Name;
        Student(int i,string N){
        id=i;
        Name=N;
        }
        ~Student(){

        }

        static void* operator new(size_t size){
            cout<<"Allocated memory for new student "<<endl;
            return malloc(size);
        }

        static void operator delete(void *ptr){
            cout<<"freeing memory for student "<<endl;
            free(ptr);
        }
        void studentDetails(){
            cout<<"id = "<<id<<endl<<"Name = "<<Name<<endl;
        }

};

int main(){
    Student *student= new Student(12,"Ankur sharma");
    student->studentDetails();
    delete student;
    student->studentDetails();
    return 0;  
}

