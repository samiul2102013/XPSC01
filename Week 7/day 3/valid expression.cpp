#include<bits/stdc++.h>
using namespace std;
void solve(){
      int x,n;
      cin>>n>>x;
      if(x>n+1 || x<1-n){
        cout<<-1<<endl;
      }
      else{
        if(x>0){
            int r = n-x +1;
            while(r--){
                cout<<'*';
            }
            x--;
            while(x--){
                cout<<'+';
            }
            cout<<endl;
        }
        else{
            int r = n - (abs(x)+1);
            while(r--){
                cout<<'*';
            }
            x = abs(x)+1;
            while(x--){
                cout<<'-';
            }
            cout<<endl;
        }
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