#include<iostream>
using namespace std;


class Student{
    public:
    string name;
    int age;
    string grade;
    // Function Getter and Setter
    public:
    void setname(string s){
    name=s;

    }
    void setage( int a){
    age=a;

    }

    void setgrade(string s){
    grade=s;

    }

    void getgrade(){
    cout << grade;

    }
};

int main(){
    // Student Sl;
    // Sl.name = "Rohit";
    // Sl.age = 5;
    // Sl.grade = "A";

    // Sl.getgrade();
    Student *Sl = new Student;
    (*Sl).name = "Rohit";
    // Sl.age = 5;
    (*Sl).grade = "A";

    Sl->getgrade();
}
