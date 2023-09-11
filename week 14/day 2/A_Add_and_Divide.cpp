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

int count(int x){
    int sum=0,y=1;
    while(sum<x){
        ++y;
        sum=sum+y;
        
    }
    return (y-1);
}

void TEST_CASES()
{
    int a,b;
    cin >> a >> b;
    if(a==1){
        cout << b << endl;
    }
    else if(a==b){
        cout << 1 << endl;
    }
    else if(a>b){
        cout << count(b) << endl;
    }
    else if(a<b){
        cout << count(a) << endl;
    }
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t;
    cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}