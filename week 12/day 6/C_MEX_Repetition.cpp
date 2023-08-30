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
       int n,k;cin>>n>>k;
       vector<int>v;
       vector<int>ps(n);
       ll sum=0;
       for(int i=0;i<n;i++){
        int p;cin>>p;
        v.push_back(p);
        sum+=p;
       }
       ll vecsum=0;
       ll s = (n*(n+1))/2;
       int z =k;
       vector<int>temvec;
       while(z--){
        vecsum=sum;
        temvec=v;
        for(auto i:v)cout<<i<<" ";
        for(auto i:temvec)cout<<"vs = "<<i<<" ";
        cout<<endl;
        v.clear();
       for(int i=0;i<temvec.size();i++){
        if(i==0){
            cout<<s-vecsum<<" ";
            sum=s-sum;
            v.push_back(s-vecsum);
        }
        else{
            ll d =vecsum -temvec[i-1];
            d+=sum;
            cout<<s-d<<" ";
            v.push_back(s-d);
            sum+= s-d;
        }
       }
       cout<<endl;
       }
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