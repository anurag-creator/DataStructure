#include<bits/stdc++.h>
using namespace std;
// Naive Approach
int LeftMostRepeatingChar(string str){
    for(int i=0;i<str.length();i++){
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]){
                return i;
            }
        }
    }
    return -1;
}
// Better Approach
const int CHAR=256;
int LeftMostRepeatingChar(string str){
    int count[CHAR]={0};
    for(int i=0;i<str.length();i++){
        count[str[i]]++;
    }
    for(int i=0;i<str.length();i++){
        if(count[i]>1)
             return i;
    }
    return -1;
}
int main(){
    string str="abbcc";
    cout<<LeftMostRepeatingChar(str);
}

