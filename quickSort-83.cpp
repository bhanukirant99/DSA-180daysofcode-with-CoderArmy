#include<iostream>
#include <vector>
using namespace std;

int partition(int arr[], int start, int end){
    int pos = start;
    for(int i = start; i<=end; i++){
        if(arr[i]<=arr[end]){
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos-1;
    
}

void quickSort(int arr[], int start, int end){
    if(start >= end)
        return;
    
    int pivot = partition(arr, start,end);

    quickSort(arr, start, pivot-1);
    quickSort(arr, pivot+1, end);
}

int main(){
    int arr[] = {1,4,7,0,2};
    int start = 0, end = 4;
    quickSort(arr, start, end);
    for( int i=0; i<5; i++)
        cout<<arr[i]<<" ";
}