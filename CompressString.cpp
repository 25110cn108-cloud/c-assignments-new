#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    string compressed="";
    int count=1;

    for(int i=0;i<str.length();i++){
        if(str[i]==str[i+1]){
            count++;
        }
        else{
            compressed+=str[i];
            compressed+=to_string(count);
            count=1;
        }
    }

    if(compressed.length()<str.length()){
        cout<<"Compressed string: "<<compressed;
    }
    else{
        cout<<"Compressed string is not shorter than original string.";
    }

    return 0;
}