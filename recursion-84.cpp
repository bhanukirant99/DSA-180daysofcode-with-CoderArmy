#include<iostream>
#include <vector>
using namespace std;


// void subString(int arr[], int index, int n, vector < vector<int>>&ans, vector<int>temp){

//     if(index == n){
//         ans.push_back(temp);

//         return;
//     }

//     subString(arr, index+1, n, ans, temp);
//     temp.push_back(arr[index]);
//     subString(arr, index+1, n, ans, temp);
// temp.pop_back();
// }

// int main(){
//     int arr[] = {1,3,2};
//     vector< vector<int>> ans;
//     vector<int>temp;

//     subString(arr, 0, 3, ans, temp);

//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout << ans[i][j]<<" ";
//         }
//         cout << endl;
//     }


// }



void subset(string arr, int index, int n, vector <string>&ans, string temp){

    if(index == n){
        ans.push_back(temp);

        return;
    }

    subset(arr, index+1, n, ans, temp);
    temp.push_back(arr[index]);
    subset(arr, index+1, n, ans, temp);
    temp.pop_back();

}

int main(){
    string s = "abc";
    vector<string> ans;
    string temp;

    subset(s, 0, s.size(), ans, temp);

    for(int i=0;i<ans.size();i++)
        cout << ans[i]<<endl;

}