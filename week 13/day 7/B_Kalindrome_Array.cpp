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

bool check(vector<int>a,int x){
    vector<int>v;
    for(auto i:a){
        if(i!=x) v.push_back(i);
    }
    for(int i=0;i<v.size();i++){
        if(v[i]!=v[v.size()-1-i]){
            return false;
        }
    }
    return true;
}

void TEST_CASES()
{
       int n;cin>>n;
       vector<int>a,b;
       for(int i=0;i<n;i++){
        int k;cin>>k;
        a.push_back(k);
       }
       bool ans =true;
       for(int i=0;i<n;i++){
        if(a[i]!=a[n-1-i]){
            ans = check(a,a[i]);
            if(ans){
                cout<<"YES"<<endl;
                return;
            }
            ans = check(a,a[n-1-i]);
            break;
        }
       }
       if(ans){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
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