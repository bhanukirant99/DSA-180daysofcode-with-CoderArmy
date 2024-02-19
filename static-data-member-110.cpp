#include<iostream>
using namespace std;


class Student{
    static int total_students;

    public:
    string name;
    int age;
    string grade;
    // Function Getter and Setter

    Student(string name, string grade){
        this->name=name;
        this->grade=grade;
        cout << "calling Student constructor"<< endl;
        total_students += 1;

    }
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
    void getname(){
        cout << name;

    }
    void getgrade(){
    cout << grade;

    }

    void gettotal(){
        cout << total_students;

    }

};

int Student::total_students = 0;


int main(){

    // Student *Sl = new Student("ramu", "5");
    Student S1("ramu", "5");
    Student S2("ramu", "5");
    Student S3("ramu", "5");


    S1.gettotal();
    // Student::total_students = 5; // can't be done as it's of the class member not the object's
    // Student::gettotal(); // can't get as it's not the class function
    // Sl->getname();
    // cout << endl;

    // Sl->getgrade();

}
