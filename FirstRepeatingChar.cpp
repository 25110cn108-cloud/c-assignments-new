#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);

    int freq[256];
    for(int i=0;i<256;i++){
        freq[i]=0;
    }
    char first_repeating='\0';
    for(int i=0;i<s.length();i++){
        freq[s[i]]++;
        if(freq[s[i]]==2){
            first_repeating=s[i];
            break;
        }
    }
    if(first_repeating!='\0'){
        cout<<"First repeating character is: "<<first_repeating<<endl;
    }
    else{
        cout<<"No repeating character found."<<endl;
    }
    return 0;
}