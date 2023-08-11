#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n,q;
      int cnt=0;
      while(cin>>n>>q){
        cnt++;
        if(n==0 && q==0) break;
        cout<<"CASE# "<<cnt<<":"<<endl;

        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        while(q--){
            int a;cin>>a;
            auto i=lower_bound(v.begin(),v.end(),a);
            int index = i - v.begin();
            if(v[index]==a){
                auto u = upper_bound(v.begin(),v.end(),a);

                cout<<a<<" is found at 4"<<endl;
            }
            else{
                cout<<a<<" not found"<<endl;
            }
        }
      }
}
int main(){
    solve();
    return 0;
}