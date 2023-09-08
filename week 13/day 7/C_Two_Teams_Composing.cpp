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
       sort(v.begin(),v.end());
       int mx =0;
       int cnt =1;
       int val=0;
       for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            cnt++;
        }
        else{
            cnt =1;
        }
        if(cnt>mx){
            mx=cnt;
            val = v[i];
        }
       }
       int a =0 ;
       vector<int>c;
       for(int i=0;i<n-1;i++){
        if(v[i]!=v[i+1]){
            if(i==n-2){
                c.push_back(v[i]);
                c.push_back(v[i+1]);
            }
            else{
                c.push_back(v[i]);
            }
        }
       }
       for(auto &i:c){
        if(i!=val){
            a++;
        }
       }
       debug(mx,a);
       if(a+1==mx){
        cout<<a<<endl;
       }
       else if(mx>a && (mx + a)<n){
        cout<<a+1<<endl;
       }
       else if(mx>a+1){
        cout<<a+1<<endl;
       }
       else if(mx>a){
        cout<<a<<endl;
       }
       else{
        cout<<mx<<endl;
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