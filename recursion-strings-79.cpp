#include<iostream>
#include <vector>
using namespace std;

// bool checkPlaindrome(string str, int start, int end){
//     if(start>=end)
//         return 1;
    
//     if(str[start] != str[end])
//         return 0;
//     else
//         return checkPlaindrome(str, start+1, end-1);
// }

// int main(){
//     string str = "namas";
//     cout << checkPlaindrome(str, 0,4);

// }

// int countVowels(string str, int start, int end, int total){
//     if(start>end)
//         return total;
    
//     if((start < end) && (str[start] == 'a' || str[start] == 'e' || str[start] == 'i'|| str[start] == 'o'|| str[start] == 'u'))
//         total += 1;
//     else
//         return countVowels(str, start+1, end, total);
// }

// int main(){
//     string str = "naaamaaas";
//     cout << countVowels(str,0,4, 0);

// }

// int countVowels(string str, int index){
//     if(index==-1)
//         return 0;
    
//     if(str[index] == 'a' || str[index] == 'e' || str[index] == 'i'|| str[index] == 'o'|| str[index] == 'u')
//        return countVowels(str, index-1) +1;
//     else
//         return countVowels(str,index-1);
// }

// int main(){
//     string str = "naoan";
//     cout << countVowels(str,4);

// }

// void reverse(string &str, int start, int end){
//     if(start>=end)
//         return;
    
//     int c = str[start];
//     str[start] = str[end];
//     str[end] = c;
//     reverse(str,start+1, end-1);
// }

// int main(){
//     string str = "abcde";
//     reverse(str,0,4);
//     cout << str;

// }

void lowerToUpper(string &str, int index){
    if(index==-1)
        return;
    
    str[index] = 'A' + str[index] - 'a';
    lowerToUpper(str,index-1);
}

int main(){
    string str = "abcde";
    lowerToUpper(str,4);
    cout << str;

}