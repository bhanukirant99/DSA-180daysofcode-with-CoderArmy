#include<iostream>
#include <vector>
using namespace std;


// int fact(int n){
//     if(n==1 || n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// }

// int main(){
//     cout << fact(5);

// }

// int sum(int n, int total){
//     if(n==0)
//         return total;
//     total+=n;
//     sum(n-1, total);
// }

// int main(){
//     cout << sum(3,0);

// }

// int sum(int n){
//     if(n==1)
//         return 1;
//     return n+sum(n-1);
// }

// int main(){
//     cout << sum(3);

// }

// int powOf2(int num, int n){
//     if(n==1)
//         return num;
//     return num*powOf2(num,n-1);
// }

// int main(){
//     cout << powOf2(3,3);

// }

int sum(int n){
    if(n==1)
        return 1;
    return (n*n)+sum(n-1);
}

int main(){
    cout << sum(5);
}

