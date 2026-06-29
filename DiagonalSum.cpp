#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the no. of rows and columns of matrix: ";
    cin>>r>>c;

    int matrix[r][c];
    cout<<"Enter the elements in matrix: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                sum+=matrix[i][j];
            }
        }
    }
    cout<<"Diagonal sum of the matrix is: "<<sum;
    return 0;
}