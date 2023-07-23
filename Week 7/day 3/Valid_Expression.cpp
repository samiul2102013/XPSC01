#include<bits/stdc++.h>
using namespace std;
void solve(){
      int a,b;
      cin>>a>>b;
      if(b<0){
        if(abs(b)>a){
            cout<<-1<<endl;
            return;
        }
        if(a==abs(b)){
            cout<<-1<<endl;
            return;
        }
        vector<char>v;
        int ans =1;
        int cnt =0;
        while(ans!=b){
            v.push_back('-');
            ans--;
            cnt++;
        }
        cnt = a-cnt;
        while(cnt){
            v.push_back('*');
            cnt--;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]=='*'){
                cout<<v[i];
            }
        }
        for(int i=0;i<v.size();i++){
            if(v[i]!='*'){
                cout<<v[i];
            }
        }
        cout<<endl;
        return;
      }
      else if(b>a+1){
        cout<<-1<<endl;
      }
      else {
        if(b>a){
            int t = a;
            while(t--){
                cout<<'+';
            }
            cout<<endl;
            return;
        }
        vector<char>v;
        int ans =1;
        while(ans!=b){
            v.push_back('+');
            ans++;
        }
         ans = a-ans +1;
        while(ans){
            v.push_back('*');
            ans--;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]=='*'){
                cout<<v[i];
            }
        }
        for(int i=0;i<v.size();i++){
            if(v[i]!='*'){
                cout<<v[i];
            }
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