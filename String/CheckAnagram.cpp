#include<bits/stdc++.h>
using namespace std;
//Naive Approach
bool areAnagram(string s1,string s2){
    if(s1.length()!=s2.length())return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return s1==s2;
}
//Efficient Approach Frequency Method
const int CHAR=256;
bool areAnagram1(string s1,string s2){
    if(s1.length()!=s2.length())return false;
    int count[CHAR]={0};
    for(int i=0;i<s1.length();i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0;i<CHAR;i++)
        if(count[i]!=0)
               return false;
    return true;
    
}
int main() { 
    string str1 = "abaac"; 
    string str2 = "aacba"; 
    if (areAnagram1(str1, str2)) 
        cout << "The two strings are anagram of each other"; 
    else
        cout << "The two strings are not anagram of each other"; 
  
    return 0; 
} 