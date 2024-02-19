#include<iostream>
#include <vector>
using namespace std;

// int subset(int arr[], int index, int n,int sum){
//     if(index == n)
//         return sum==0;
    
//     return subset(arr, index+1, n,sum) + subset(arr, index+1, n, sum-arr[index]);

// }

// int main(){
//     int arr[] = {1,2,3,4};
//     int sum = 5;
//     vector<int>ans;
//     cout << subset(arr, 0, 4, sum);

// }

int subsetSum(int arr[], int index, int n,int sum){
   if(sum == 0)
        return 1;
    if(index == n || sum < 0)
        return 0;
    
    return subsetSum(arr, index+1, n,sum) + subsetSum(arr, index, n, sum-arr[index]);

}

int main(){
    int arr[] = {1,2,3,4};
    int sum = 5;
    vector<int>ans;
    cout << subsetSum(arr, 0, 4, sum);

}