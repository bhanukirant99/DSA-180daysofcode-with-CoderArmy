#include<iostream>
#include <vector>
using namespace std;


// void subsetSum(int arr[], int index, int n,int sum, vector<int>&ans){

//     if(index == n){
//         ans.push_back(sum);

//         return;
//     }
    
//     subsetSum(arr, index+1, n, sum, ans);
//     subsetSum(arr, index+1, n, sum+arr[index], ans);

// }

// int main(){
//     // int arr[] = {3,4,5};
//     int arr[] = {1,2,3,4};
//     vector<int>ans;
//     subsetSum(arr, 0, 4, 0, ans);

//      for(int i=0;i<ans.size();i++){
//             cout << ans[i]<<" ";
//     }

// }


bool targetSum(int arr[], int index, int n,int target){

    if(target == 0)
        return 1;
    if(index == n || target < 0)
        return 0;
    
    return targetSum(arr, index+1, n,target) || targetSum(arr, index+1, n, target-arr[index]);

}

int main(){
    int arr[] = {1,2,3,4};
    int target = 10;
    vector<int>ans;
    cout << targetSum(arr, 0, 4, target);

}