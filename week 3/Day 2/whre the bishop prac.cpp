#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrix[8][8];
    for(int i=0;i<8;i++){
        string s;
        cin>>s;
        for(int j=0;j<8;j++){
            if(s[j]=='.'){
                matrix[i][j]=-1;
            }
            else{
                matrix[i][j]=0;
            }
        }
    }
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    bool test=false;
    for(int i=1;i<8;i++){
        for(int j=0;j<8;j++){
            if(matrix[i][j]==0){
                if(matrix[i-1][j-1]==0 && matrix[i-1][j+1]==0 && matrix[i+1][j-1]==0 && matrix[i+1][j+1]==0){
                    cout<<i+1<<" "<<j+1<<endl;
                    test = true;
                    break;
                }
            }
        }
        if(test==true){
            break;
        }
    }
    return 0;
}