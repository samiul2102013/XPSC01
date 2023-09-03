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


//samiul 
void TEST_CASES()
{
       int n,k;cin>>n>>k;
       string s;cin>>s;
       if(k%2==0){
        sort(s.begin(),s.end());
        cout<<s<<endl;
       }
       else{
        string odd="",even="";
        for(int i=0;i<s.size();i++){
            if(i%2==0){
                even+=s[i];
            }
            else{
                odd+=s[i];
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        int cnt=0;
        int i=0;
        while(cnt<s.size()){
            cout<<even[i];
            cnt++;
            if(cnt>=s.size()){
                break;
            }
            cout<<odd[i];
            cnt++;
            i++;
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
    cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}