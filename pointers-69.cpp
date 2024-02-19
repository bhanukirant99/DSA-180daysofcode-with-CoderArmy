#include<iostream>
using namespace std;

int main(){

    char arr[5] = {'a','b','c','d','e'};
    char ar[5] = {1,2,3,4,5};

    char c = 'a';

    char *p = &c;
    char *p1 = arr;
    char *p2 = ar;


    cout << *p << endl;
    cout << *p1 << endl;
    cout << *p2 << endl;

    return 0;
}