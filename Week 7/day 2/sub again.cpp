#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n; cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)cin>>arr[i];


      vector<vector<int>>subsets;

      for(int i=0;i<(1<<n);i++){

        vector<int>subset;

        for(int j=0;j<n;j++){
            if((i& (1<<j))!=0){
                subset.push_back(arr[j]);
            }
        }
        subsets.push_back(subset);
      }

      for(auto subset:subsets){
        for(auto i:subset){
            cout<<i<<" ";
        }
        cout<<endl;
      }
}
int main(){
    solve();
    return 0;
}