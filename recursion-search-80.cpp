#include<iostream>
#include <vector>
using namespace std;

// bool linerSearch(int arr[], int key, int index){
//     if(index == -1)
//         return 0;
    
//     if(arr[index]==key)
//         return 1;
//     return linerSearch(arr,key,index-1);
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     cout<< linerSearch(arr,5,4);
// }

// bool binarySearch(int arr[], int key, int start, int end){
//     if(start > end)
//         return 0;
    
//     int mid = start+(end-start)/2;

//     if(arr[mid]==key)
//         return 1;
//     else if(key<arr[mid])
//         return binarySearch(arr,key,start,mid-1);
//     else
//         return binarySearch(arr,key,mid+1, end);
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     cout<< binarySearch(arr,5,0,4);
// }

int binarySearch(int arr[], int start, int end, int key){
    if(start > end)
        return -1;
    
    int mid = start+(end-start)/2;

    if(arr[mid]==key)
        return 1;
    else if(arr[mid]<key)
        return binarySearch(arr,mid+1, end,key);
    else
        return binarySearch(arr,start,mid-1,key);
}

int main(){
    int arr[] = {1,2,3,4,5};
    cout<< binarySearch(arr, 0, 5, 0 );
}