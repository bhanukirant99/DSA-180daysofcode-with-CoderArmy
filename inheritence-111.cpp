#include<iostream>
using namespace std;

class Human{
    protected:
    string name;
    int age;
};
class Student: protected Human{

    string grade;
    public:

    // Function Getter and Setter

    Student(string name, string grade){
        this->name=name;
        this->grade=grade;
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
};



int main(){
    Student S1("ramu", "5");
    Student S2("ramu", "5");
    Student S3("ramu", "5");


    S1.getgrade();

}
