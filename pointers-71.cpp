// #include<iostream>
// #include <vector>
// using namespace std;
// //pass by reference
// void swapping( int *&p1){
//     p1++;
// }

// int main(){
//     int val = 10;
//     int &temp = val;


//     int first =10, second=20;
//     int *p1 = &first, *p2 = &second;
//     cout<<p1<<endl;

//     swapping(p1);
//     cout<<p1<<endl;
// }

#include<iostream>
#include <vector>
using namespace std;
//pass by reference
void swapping( int **p1){
    *p1=*p1+1;
}

int main(){
    int val = 10;
    int &temp = val;


    int first =10, second=20;
    int *p1 = &first, **p2 = &p1;
    cout<<p1<<endl;

    swapping(p2);
    cout<<p1<<endl;
}