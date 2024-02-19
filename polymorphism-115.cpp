#include<iostream>
using namespace std;


class Area{
    int l,b;
    public:

    
    void calc(int l){
        cout << l* l;

    }
    void calc(int l, int b){
    cout << l* b;

    }
};



int main(){
    Area S1;


    S1.calc(2,5);

}
