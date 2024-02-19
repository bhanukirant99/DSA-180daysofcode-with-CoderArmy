#include<iostream>
#include <vector>
using namespace std;

int main(){
    int *p = new int;
    float *p1 = new float;

    *p = 20;
    *p1 = 8.7;
    int n;
    cout<<"Enter the size of arr: ";
    cin >> n;


    int *arr = new int[n];

    for(int i=0; i<n; i++)
        arr[i]=i+1;

    for(int i=0; i<n; i++)
        cout<<arr[i]<<endl;


    cout<<p<<endl;
    cout<<p1<<endl;

    delete p,p1;
    delete[] arr;
    
}