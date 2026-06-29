#include<iostream>
using namespace std;

int main(){
    string str,rev="";
    cout<<"Enter the string: ";
    getline(cin,str);
    for(int i=str.length()-1;i>=0;i--){
        rev+=str[i];
    }
    cout<<"Reversed string is: "<<rev<<endl;
    return 0;
}