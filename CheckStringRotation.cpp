#include<iostream>
using namespace std;

int main(){
    string str1,str2;
    cout<<"Enter string 1: ";
    getline(cin,str1);
    cout<<"Enter string 2: ";
    getline(cin,str2);

    if(str1.length()!=str2.length()){
        cout<<"Strings are not rotations of each other.";
        return 0;
    }
    
    string temp=str1+str2;
    if(temp.find(str2)!=string::npos){
        cout<<"Strings are rotations of each other.";
    }
    else{
        cout<<"Strings are not rotations of each other.";
    }
    return 0;
}