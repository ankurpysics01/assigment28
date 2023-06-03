// 5. Create a student class and overload new and delete operators outside the class.


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

        static void* operator new(size_t size);
        
        static void operator delete(void *ptr);
        
        void studentDetails(){
            cout<<"id = "<<id<<endl<<"Name = "<<Name<<endl;
        }

};
void* Student::operator new(size_t size){
    cout<<"Allocated the new student "<<endl;
    return malloc(size);
}
void Student::operator delete(void *ptr){
    cout<<"Student Memory is freeing "<<endl;
    free(ptr);
}

int main(){
    Student *student= new Student(12,"Ankur sharma");
    student->studentDetails();
    delete student;
    student->studentDetails();
    return 0;  
}

