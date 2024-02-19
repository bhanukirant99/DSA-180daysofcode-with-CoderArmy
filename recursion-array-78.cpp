#include<iostream>
#include <vector>
using namespace std;

// void printArr(int arr[], int index, int n){
//     if(index==n)
//         return;
//     cout << arr[index]<<" ";
//     printArr(arr,index+1,n);
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     printArr(arr,0,5);
// }

// void printArr(int arr[], int index, int n){
//     if(index==n)
//         return;
//     printArr(arr,index+1,n);
    
//     cout << arr[index]<<" ";
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     printArr(arr,0,5);
// }

// void printArr(int arr[], int index){
//     if(index==-1)
//         return;
//     printArr(arr,index-1);
    
//     cout << arr[index]<<" ";
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     printArr(arr,4);
// }


// int sumArr(int arr[], int index, int sum){
//     if(index==-1)
//         return sum;
//     sum+=arr[index];
    
//     sumArr(arr,index-1, sum);
    
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int sum;
//     cout<< sumArr(arr,4, 0);

// }

// int sumArr(int arr[], int index, int n){
//     if(index==n)
//         return 0;
    
//     return arr[index]+ sumArr(arr,index+1, n);
    
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     cout<< sumArr(arr,0, 5);

// }

int minElement(int arr[], int index, int n){
    if(index==n-1)
        return arr[index];
    
    return min(arr[index], minElement(arr,index+1, n));
    
}

int main(){
    int arr[] = {1,2,3,4,5};
    cout<< minElement(arr,0, 5);

}