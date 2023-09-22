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
const int N = 1e9+1;
typedef pair<int,int> pii;



void TEST_CASES()
{
         int n;cin>>n;
          vector<int>cnt(N);
          vector<int>nai;
           vector<int>unique;
          for(int i=0;i<n;i++){
            int k;cin>>k;
            cnt[k]++;
            debug(k,cnt[k]);
            if(k<=n && cnt[k]==1){
                unique.push_back(k);
            }
            else{
                nai.push_back(k);
            }
          }
          debug("aise");
          debug(unique);
          vector<int>d;
          for(int i=n;i>0;i--){
            if(cnt[i]==0){
                d.push_back(i);
            }
          }
          sort(nai.begin(),nai.end(),greater<int>());
          sort(d.begin(),d.end(),greater<int>());
          debug(d);
          debug(nai);
        
          for(int i=0;i<d.size();i++){
            if(d[i]*2>nai[i]){
                cout<<-1<<endl;
                return;
            }
          }
          cout<<nai.size()<<endl;   


}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}