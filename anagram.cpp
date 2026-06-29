#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string str1,str2;
    cout<<"Enter the string 1: ";
    getline(cin,str1);
    cout<<"Enter the string 2: ";
    getline(cin,str2);

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1==str2){
        cout<<"The strings are anagrams."<<endl;
    }
    else{
        cout<<"The strings are not anagrams."<<endl;
    }
    return 0;
}