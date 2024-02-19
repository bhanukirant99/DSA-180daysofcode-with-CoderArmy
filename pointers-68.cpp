#include<iostream>
using namespace std;

int main(){

    int arr[5] = {1,2,3,4,5};
    int *p = arr;
    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << p << endl;
    cout << arr+1 << endl;

    cout << *p << endl;
    cout << *arr << endl;
    cout << *(arr+1) << endl;

    for(int i=0; i<5;i++){
        cout << (arr+i) << endl;
    }


    for(int i=0; i<5;i++){
        cout << *(arr+i) << endl;
    }

    for(int i=0; i<5;i++){
        cout << *(p+i) << endl;
    }

    for(int i=0; i<5;i++){
        cout << p[i] << endl;
    }

    for(int i=0; i<5;i++){
        cout << p << endl;
        p++;
    }

    //the symbol table is always constant, we can't change the values stored in that
    for(int i=0; i<5;i++){
        cout << arr << endl;
        // arr++;
    }

    cout << arr << endl;
    cout << &arr << endl;

    return 0;
}