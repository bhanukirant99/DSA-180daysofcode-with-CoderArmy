#include<iostream>
#include <vector>
using namespace std;


// void fun0(int n){
//     if(n==1){
//         cout << n << " ";
//         return;
//     }
//     fun0(n-1);
//     cout << n<< " ";
// }

// int main(){
//     fun0(5);

// }

// void fun0(int n, int num){
//     if(n==num){
//         cout << num << " ";
//         return;
//     }
//     cout << num<< " ";
//     fun0(n,num+1);

// }

// int main(){
//     fun0(5,1);

// }

// void fun0(int n, int num){
//     if(num>n){
//         cout << n << " ";
//         return;
//     }
//     cout << n<< " ";
//     fun0(num+2,n);

// }

// int main(){
//     fun0(2,5);

// }

// void fun0(int n){
//     if(n==2){
//         cout << n << " ";
//         return;
//     }
//     fun0(n-2);

//     cout << n<< " ";

// }

// int main(){
//     int n=13;
//     if(n%2==1)
//         n--;
//     fun0(n);

// }

void fun0(int n){
    if(n==1){
        cout << n << " ";
        return;
    }
    fun0(n-2);

    cout << n<< " ";

}

int main(){
    int n=13;
    if(n%2==0)
        n--;
    fun0(n);

}