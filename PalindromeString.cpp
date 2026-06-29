#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    string rev_str = "";
    for(int i=str.length()-1; i>=0; i--){
        rev_str += str[i];
    }
    if(str == rev_str){
        cout<<"The string is a palindrome."<<endl;
    }else{
        cout<<"The string is not a palindrome."<<endl;
    }
    return 0;
}