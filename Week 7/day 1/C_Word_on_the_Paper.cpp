#include<bits/stdc++.h>
using namespace std;
void solve(){
      char grid[8][8];
      for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            char a;
            cin>>a;
            grid[i][j]=a;
        }
      }
      bool a=false;
      for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(grid[j][i]!='.'){
                cout<<grid[j][i];
            }
        }
      }
      cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}