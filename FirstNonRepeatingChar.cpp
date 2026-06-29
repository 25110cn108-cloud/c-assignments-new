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
    for(int i=0;i<s.length();i++){
        freq[s[i]]++;
    }
    char first_nonrepeating='\0';
    for(int i=0;i<s.length();i++){
        if(freq[s[i]]==1){
            first_nonrepeating=s[i];
            break;
        }
    }
    if(first_nonrepeating!='\0'){
        cout<<"First non-repeating character is: "<<first_nonrepeating<<endl;
    }
    else{
        cout<<"No non-repeating character found."<<endl;
    }
    return 0;
}