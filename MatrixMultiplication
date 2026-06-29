#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"Enter the no. of rows and columns for first matrix: ";
    cin>>r1>>c1;
    cout<<"Enter the no. of rows and columns for second matrix: ";
    cin>>r2>>c2;
    
    if(c1!=r2){
        cout<<"Matrix multiplication is not possible.";
        return 0;
    }

    int matrix1[r1][c1],matrix2[r2][c2],product_mat[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<"Enter elements for first matrix: ";
            cin>>matrix1[i][j];
        }
    }
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
                cout<<"Enter elements for second matrix: ";
                cin>>matrix2[i][j];
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
                product_mat[i][j]=0;
                for(int k=0;k<c1;k++){
                    product_mat[i][k]+=matrix1[i][k]*matrix2[k][j];
                }
            }
        }
    cout<<"Product of the two matrices is: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<product_mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}