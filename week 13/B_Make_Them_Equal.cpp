#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 +5;
typedef pair<int,int> pii;



void TEST_CASES()
{
       int n;cin>>n;
       vector<int>v(n);
       for(auto &i:v)cin>>i;

       if(v.size()==1){
        cout<<0<<endl;
        return;
       }
       bool state =false;
       for(int i=1;i<v.size();i++){
        if(v[i]!=v[i-1]) state =true;
        break;
       }
       if(!state){
        cout<<v[0]<<endl;
       }
       sort(v.begin(),v.end());
       vector<int>ans;
       for(int i=1;i<n;i++){

        if(v[i]==v[i-1]) continue;

        ans.push_back(v[i]-v[i-1]);
       }
       if(ans.size()==1){
        if(ans[0]%2==0){
            cout<<ans[0]/2<<endl;
        }
        else{
            cout<<ans[0]<<endl;
        }
        return;
       }
       debug(v,ans);
       int a;
       for(int i =1;i<ans.size();i++){
        if(ans[i]%2==0 && ans[i-1]%2==1 || ans[i]%2==1 && ans[i-1]%2==0){
            cout<<-1<<endl;
            return;
        }
        if(ans[i]<ans[i+1] && ans[i-1]%ans[i]==0){
            continue;
        }
        else{
            cout<<-1<<endl;
            return;
        }
       }
       cout<<ans[ans.size()-1]<<endl;
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    //cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}