#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str;
    cout << "Enter your name";
    getline(cin, str);
    cout << "\nYour name is " << str;
    return 0;
}