#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    string longest="";
    string current="";
    
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            current+=str[i];
        }
        else{
            if(current.length()>longest.length()){
                longest=current;
            }
            current="";
        }
    }
    
    
    if(current.length()>longest.length()){
        longest=current;
    }

    cout<<"Longest word: "<<longest;

    return 0;
}