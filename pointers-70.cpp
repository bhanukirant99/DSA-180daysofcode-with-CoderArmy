#include<iostream>
using namespace std;
//pass by pointers
void swapping( int *p1,int *p2){
int temp=*p1;
*p1=*p2;
*p2=temp;

}
int main(){

//     char arr[5] = "1234";
//     char *p1 = arr;

//     cout << arr << endl;

//     cout << p1 << endl;

//   cout << (void*)arr << endl;

//     cout <<(void*) p1 << endl;

    // char c = 'a';

    // char *p = &c;
    //  cout << p << endl;


    // return 0;



int first =10, second=20;
swapping (&first ,&second);
cout<<first<<" "<<second<<endl;
}