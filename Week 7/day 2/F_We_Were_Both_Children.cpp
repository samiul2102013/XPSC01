#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;

    map<long long, long long> m;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        m[k]++;
        cout<<k<<" "<<m[k]<<" ";
        int p =k;
        for (int j = 1; j < n ; j++)
        {
            
            int n= k*(j+1);
            m[n]++;
            cout<<"n="<<n<<" k="<<k<<" "<<p<<" "<<m[k]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<endl<<endl;
    for(auto i:m)cout<<i.first<<" "<<i.second<<endl;
    cout<<endl;
    long long maxi = INT_MIN;
    for(auto i:m){
        maxi = max(maxi,i.second);
    }
    cout<<maxi<<endl;
}
int main()
{
    solve();
    return 0;
}