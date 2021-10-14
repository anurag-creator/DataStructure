#include<bits/stdc++.h>
using namespace std;
bool areAnagram(string s1,string s2){
    if(s1.length()!=s2.length())return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return s1==s2;
}
int main() { 
    string str1 = "abaac"; 
    string str2 = "aacba"; 
    if (areAnagram(str1, str2)) 
        cout << "The two strings are anagram of each other"; 
    else
        cout << "The two strings are not anagram of each other"; 
  
    return 0; 
} 