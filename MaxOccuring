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
    char max_occuring='\0';
    int max_freq=0;
    for(int i=0;i<256;i++){
        if(freq[i]>max_freq){
            max_freq=freq[i];
            max_occuring=i;
        }
    }
    if(max_occuring!='\0'){
        cout<<"Maximum occurring character is: "<<max_occuring<<endl;
    }
    else{
        cout<<"No character found."<<endl;
    }
    return 0;
}