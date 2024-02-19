#include<iostream>
#include <vector>
using namespace std;
//pass by reference
void swapping( int &p1,int &p2){
    int temp=p1;
    p1=p2;
    p2=temp;

}

void pass( vector<int>&v){

    for(int i=0;i<5;i++)
        v[i] = i+v[i];

}

void dou( int p1[]){

    for(int i=0;i<5;i++)
        p1[i] = 2*p1[i];

}
int main(){
    int val = 10;
    int &temp = val;
    cout<<&val<<" "<<&temp<<endl;


    int first =10, second=20;
    swapping(first ,second);
    cout<<first<<" "<<second<<endl;

    vector<int>v(5,0);
    pass(v);
    for(int i=0;i<5;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    int arr[5] = {1,2,3,4,5};
    dou(arr);
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";


}