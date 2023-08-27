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
const int N = 2e5 + 5;
typedef pair<int, int> pii;

bool is_prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void TEST_CASES()
{
    int n = 30;
    vector<int> prime;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i))
            prime.push_back(i);
    }
    debug(prime);
    int terget = 100;
    cin>>terget;
    map<int, int> cnt;
    for (int i = 0; i < prime.size(); i++)
    {
        if (terget % prime[i]==0)
        {
            while (terget % prime[i] == 0)
            {
                cnt[prime[i]]++;
                terget /= prime[i];
            }
        }
    }
    if(terget>1) cnt[terget]++;
    for (auto [x, y] : cnt)
    {
        cout << x << " " << y<<endl;
    }
}

int32_t main()
{ 
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t = 1;
    cin>>t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}