#include <bits/stdc++.h>
#define ll long long
using namespace std;
int gcd(ll a, ll b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}
void solve()
{
    ll n;
    cin >> n;

    vector<ll> even;
    vector<ll>odd;

    for (int i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        if(i&1){
            even.push_back(k);
        }
        else{
            odd.push_back(k);
        }
    }

    int result = even[0];
    for (int i = 1; i < n; i++)
    {
        if(result ==1){
            break;
        }
        result = gcd(result, even[i]);
    }
    cout << result;
}
int main()
{
    solve();
    return 0;
}