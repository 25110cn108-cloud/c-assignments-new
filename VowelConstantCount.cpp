include<iostream>
using namespace std;
int main(){
    string str;
    int vowels=0,consonants=0;
    cout<<"Enter the string: ";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
                str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
                vowels++;
                }
            else{
                consonants++;
            }
        }
    }
    cout<<"Vowels: "<<vowels<<endl;
    cout<<"Consonants: "<<consonants<<endl;
    return 0;
}