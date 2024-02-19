#include<iostream>
#include <vector>
using namespace std;


// void permute(int arr[], vector<vector<int>> &ans,vector<int> &temp,vector<bool> &visited){
//    if(temp.size() == visited.size()){
//         ans.push_back(temp);
//         return;
//    }

//     for(int i=0; i<visited.size();i++){
//         if(visited[i]==0){
//             visited[i] = 1;
//             temp.push_back(arr[i]);
//             permute(arr, ans, temp, visited);
//             visited[i] = 0;
//             temp.pop_back();

//         }
//     }
    
// }

// int main(){
//     int arr[] = {1,3,4,2 };
//     vector<vector<int>> ans;
//     vector<int> temp;
//     vector<bool> visited(4,0);
//     permute(arr, ans, temp, visited);

//     for(int i=0; i<ans.size();i++){
//         for(int j=0; j<ans[i].size();j++){
//             cout << ans[i][j] << " ";
            
//         }
//         cout << endl;
//     }

// }

void permute(vector<int> &arr, vector<vector<int>> &ans, int index){
   if(index == arr.size()){
        ans.push_back(arr);
        return;
   }

    for(int i=0; i<arr.size();i++){
        swap(arr[i], arr[index]);
        permute(arr, ans, index+1);
        swap(arr[i], arr[index]);

    }
    
}

int main(){
    int arr[] = {1,3,4,2};
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited(4,0);
    permute(arr, ans, 0);

    for(int i=0; i<ans.size();i++){
        for(int j=0; j<ans[i].size();j++){
            cout << ans[i][j] << " ";
            
        }
        cout << endl;
    }

}