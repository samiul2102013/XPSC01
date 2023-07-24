#include<bits/stdc++.h>
using namespace std;
void solve(){
      long long a,b; cin>>a>>b;
      long long mini = min(a,b);
      long long chef_move =0;
      long long chefni_move = 0;
      if(a>b){
         a-=mini;
         chef_move = mini +a/2;
      }
      else{
        chef_move = mini;
      }

      if(b>a){
        b-=mini;
         chefni_move = mini +b/2;
      }
      else{
        chefni_move = mini;
      }

      if(chef_move>chefni_move){
        cout<<"CHEF"<<endl;
      }
      else{
        cout<<"CHEFINA"<<endl;
      }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}