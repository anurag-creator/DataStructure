#include<iostream>
#include<string>
using namespace std;
bool Palindrome(string str){
    int start=0;
    int end=str.length()-1;
    while(start<=end){
        if(str[start]!=str[end]){
            return false;
        }
        start++,end--;
    }
    return true;
}
int main(){
    string str;
    getline(cin,str);
    cout<<Palindrome(str);
}