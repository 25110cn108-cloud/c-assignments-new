include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter no. of rows and columns: ";
    cin>>r>>c;

    if(r!=c){
        cout<<"Matrix is not symmetric.";
        return 0;
    }

    int matrix[r][c];
    cout<<"Enter elements in the matrix: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }

    int transpose[c][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            transpose[j][i]=matrix[i][j];
        }
    }
    int isSymmetric=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(matrix[i][j]!=transpose[i][j]){
                isSymmetric=0;
                break;
            }
        }
    }
    if(isSymmetric==1){
        cout<<"Matrix is Symmetric";
    }
    else if(isSymmetric==0){
        cout<<"Matrix is not Symmetric";
    }
    return 0;
}