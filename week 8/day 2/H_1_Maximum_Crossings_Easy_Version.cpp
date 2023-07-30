#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;   cin>>n;
      vector<int>v;
      for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
      }
      int cnt=0;
      for(int i=1;i<n;i++){
        int k = v[i];
        int j=i;
        while(j--){
            if(v[i]<=v[j]){
                cnt++;
            }
        }
      }
      cout<<cnt<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}