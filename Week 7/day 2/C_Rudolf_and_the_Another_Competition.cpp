#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n,m,h;      cin>>n>>m>>h;
      vector<vector<int>>a;
      for(int i=0;i<n;i++){
        vector<int>t;
        for(int j=0;j<m;j++){
            int in;
            cin>>in;
            t.push_back(in);
        }
        sort (t.begin(),t.end());
        a.push_back(t);
      }

      cout<<endl;
      for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
      vector<pair<int,pair<int,long long> > >vp;

      for(int i=0;i<n;i++){
        int points=0,tot=0;
        int penalty = 0;
        vector<long long >p;
        for(int j=0;j<m;j++){
            if((tot+= a[i][j]) >h){
                break;
            }
            
            points ++;
            tot += a[i][j];

            if(j==0){
                p.push_back(a[i][j]);
            }
            else{
                p.push_back(p.back()+a[i][j]);
            }
        }

        for(auto now:p){
            penalty+=now;
            vp.push_back({i,{points, penalty}});
        }
      }
      for(auto it:vp){
            cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;

        }
}
int main(){
    solve();
    return 0;
}