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
       int mn=0,mx=0;
       for(int i=1;i<n;i++){
        int d = v[i]-v[i-1];
        if(v[i]==v[i-1]){
            continue;
        }
        else {
            if(mn!=-1){
                if(d%2==1){
                    mn =-1;
                    if(i==1){
                        mx = d;
                    }
                    else{
                        if(mx!=d){
                            cout<<-1<<endl;
                            return;
                        }
                    }
                }
                else{
                    if(i==1){
                        mx = d;
                    }
                    else{
                        if(mx!=d){
                            cout<<-1<<endl;
                            return;
                        }
                        else{
                            mx = d;
                            mn = d/2;
                        }
                    }

                }
            }
            else{
                if(d!=mx){
                    cout<<-1<<endl;
                }
                else{
                    mx =d;
                }
            }
        }
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