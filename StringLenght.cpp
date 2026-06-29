#include<iostream>
using namespace std;
int main(){
    string str;
    int length=0;

    cout<<"Enter the string: ";
    getline(cin, str);
    for (int i=0;str[i]!='\0';i++){
        length++;
    }
    cout<<"Length is: "<<length<<endl;
    return 0;
}