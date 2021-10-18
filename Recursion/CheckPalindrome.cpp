#include<bits/stdc++.h>
using namespace std;
bool CheckPalindromeHelper(string str,int start,int end){
    if(str[0]=='\0' || str[1]=='\0')return 1;
    if(start>=end)return 1;
    if(str[start]==str[end]){
        return CheckPalindromeHelper(str,start+1,end-1);
    }
    else{
        return 0;
    }
}
bool checkPalindrome(string str){
    int len=str.length();
    return CheckPalindromeHelper(str,0,len-1);
}
int main(){
    string str1="anuna";
    cout<<checkPalindrome(str1);
}