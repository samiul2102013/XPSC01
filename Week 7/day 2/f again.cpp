#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    map<long long, long long> m;
    for (int j = 0; j < n; j++)
    {
        int k;
        cin >> k;
        cout<<k<<" ";
        m[k]++;
        for (int i = 1; i < (n-2); i++)
        {
            int d = (i + 1) * k;
            m[d]++;
            cout<<d<<" ";
        }
        cout<<endl;
    }

    int maxi = INT_MIN;
    for(auto i:m){
        int dd=i.second;
        maxi = max(maxi,dd);
    }
    cout<<maxi<<endl;
}
int main()
{
    solve();
    return 0;
}