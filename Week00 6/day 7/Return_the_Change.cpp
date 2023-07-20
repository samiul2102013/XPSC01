#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;
      cin>>n;
      int reminder = n%10;
      int round_number = (reminder<5)? n-reminder : n+(10-reminder);
      cout<<100-round_number<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}