#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n;
    long long count =0,o=0,t=0;
    for(long long  i=0;i<n;i++){
        long long k;
        cin>>k;
        k%=3;
        if(k==0){
            count++;
        }
        else if(k==1){
            o++;
        }
        else{
            t++;
        }
    }
    if(o>t){
        long long  mini = min(o,t);
        count+=mini;
        count+=(o-mini)/3;
        cout<<count<<endl;
    }
    else if(t>0){
        long long mini = min(o,t);
        count+=(t-mini)/3;
        cout<<count+mini<<endl;
    }
    else{
        cout<<count+o<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        solve();
    }

    return 0;
}
