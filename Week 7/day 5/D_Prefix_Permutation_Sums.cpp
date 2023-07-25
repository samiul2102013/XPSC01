#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;
      cin>>n;
      vector<int>v;
      vector<int>prefix;
      int maxi =0;
      for(int i=1;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
        maxi = max(maxi , k);
        if(i==1){
            prefix.push_back(1);
        }
        else{
         int p = prefix[i-2]+i;
        prefix.push_back(p);
        }
      }
      int pp = prefix[prefix.size()-1] +n;
      prefix.push_back(pp);
      if(maxi>prefix[prefix.size()-1]){
        cout<<"NO"<<endl;
        return;
      }
      vector<int>diff;
      for(int i=0;i<v.size()-1;i++){
        int k = abs(v[i]-v[i+1]);
        diff.push_back(k);
      }
      sort(diff.begin(),diff.end());
      int diff_sum=0;
      vector<int>freq(n,0);
      int cnt =0;
      for(int i=0;i<diff.size();i++){
        if(i!=diff.size()-1){
            int k = abs(diff[i]-diff[i+1]);
            if(k==0){
                cout<<"NO"<<endl;
                return;
            }
            if(freq[k]==0){
                v[k]=1;
                cnt++;
            }
            if(k>n){
                cnt+=2;
            }
        }
        diff_sum+=diff[i];
      }
      cout<<cnt;
      if(cnt==n){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
}
int main(){
    solve();
    return 0;
}