#include<iostream>
#include <vector>
using namespace std;

void merge(int arr[], int start, int mid, int end){
    int left = start, right = mid+1, index = 0;
    vector<int>temp(end-start+1);

    while(left <= mid && right <= end){
        if(arr[left] <= arr[right]){
            temp[index] = arr[left];
            index++, left++;
        }else{
            temp[index] = arr[right];
            index++, right++;
        }
    }
    while(left <= mid){
        temp[index] = arr[left];
        index++, left++;
    }
    while(right <= end){
        temp[index] = arr[right];
        index++, right++;
    }
    index = 0;
    while (start <= end){
        arr[start] = temp[index];
        index++, start++;
    }
    
}

void mergeSort(int arr[], int start, int end){
    if(start == end)
        return;
    int mid = start + (end - start)/2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, mid, end);
}

int main(){
    int arr[] = {1,4,7,0,2};
    int start = 0, end = 4;
    mergeSort(arr, start, end);
    for( int i=0; i<5; i++)
        cout<<arr[i]<<" ";
}