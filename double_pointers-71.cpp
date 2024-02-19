#include<iostream>
#include <vector>
using namespace std;


int main(){
    int val = 10;
    int *p1 = &val;
    int **p2 = &p1;


    cout<<p1<<endl;
    cout<<&p1<<endl;
    cout<<p2<<endl;


}