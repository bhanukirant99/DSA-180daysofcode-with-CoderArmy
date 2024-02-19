#include<iostream>
#include <vector>
using namespace std;


void fun0(int n){
    cout<<"Happy Birthday\n";
}
void fun3(int n){
    if(n==0){
        cout<<"Happy Birthday\n";
        return;
    }
    cout<<n<<" days left for birthday\n";
    fun3(n-1);
}
int main(){

    int n = 5;
    // Iterative approach
    // for(int i=n; i>0;i--){
    // cout<<i<<"days left for birthday\n";

    // }
    // cout<<"Happy Birthday\n";

    fun3(n);
}