#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter no. of rows and columns: ";
    cin>>r>>c;

    int matrix[r][c];
    cout<<"Enter the elements in the matrix: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }

    int column_sum;
    for(int i=0;i<c;i++){
        column_sum=0;
        for(int j=0;j<r;j++){
            column_sum+=matrix[j][i];
        }
        cout<<"Sum of column "<<i+1<<" is: "<<column_sum<<endl;
    }
    return 0;
}