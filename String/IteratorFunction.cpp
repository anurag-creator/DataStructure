#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<"Initial String"<<endl;
    cout<<str<<endl;
    //Declare Iterator
    std::string::iterator it;
    //forword Iterator
    for(it=str.begin();it!=str.end();it++)
    cout<<*it;
    cout<<endl;
    
    //Declaring Reverse Iterator
    std::string::reverse_iterator it1;
    for(it1=str.rbegin();it1!=str.rend();it1++)
    cout<<*it1;
    cout<<endl;
    
}