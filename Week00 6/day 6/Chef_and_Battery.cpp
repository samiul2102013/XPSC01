#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;
      cin>>n;
      if(n>50){
        int k = abs (n-50);
        if(k%3==1){
            cout<<k/3+2<<endl;
        }
        else if(k%3==2){
            cout<<k/3 +4 <<endl;
        }
        else{
            cout<<k/3<<endl;
        }
      }
      else if(n<50){
        int k = abs (n-50);
        if(k%2==1){
            cout<<k/2 +3<<endl;
        }
        else{
            cout<<k/2<<endl;
        }
      }
      else{
        cout<<0<<endl;
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