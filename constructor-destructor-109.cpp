#include<iostream>
using namespace std;


class Student{
    public:
    string name;
    int age;
    string grade;
    // Function Getter and Setter

    Student(string name, string grade){
        this->name=name;
        this->grade=grade;
        cout << "calling Student constructor"<< endl;

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
    ~Student(){
        // delete name;
        // delete grade;
        cout << "calling Student Destructor"<<endl;
    }
};

int main(){

    // Student *Sl = new Student("ramu", "5");
    Student S1("ramu", "5");
    Student S2("ramu", "5");
    Student S3("ramu", "5");



    // Sl->getname();
    // cout << endl;

    // Sl->getgrade();

}
