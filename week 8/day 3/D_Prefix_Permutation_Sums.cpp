#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    long long ko;
    if (n == 2)
    {
        int z;
        cin >> z;
        if (z == 1 || z == 2 || z == 3)
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    vector<long long> v;
    bool ok = true;
    long long sum = 0;
    long long diff = 0;
    bool should_say_no = false;
    for (long long i = 0; i < n - 1; i++)
    {
        long long k;
        cin >> k;
        v.push_back(k);
        sum += i + 1;
        if (sum != k)
        {
            ok = false;
        }
        if (i > 0)
        {
            diff = k - v[i - 1];
            if (diff > (n * (n - 1)))
            {
                should_say_no = true;
            }
        }
        ko=k;
    }
    if (ok)
    {
        cout << "YES" << endl;
        return;
    }
    if (should_say_no)
    {
        cout << "NO" << endl;
        return;
    }
    vector<long long> visited;
    for (long long i = 1; i <= n; i++)
    {
        visited.push_back(i);
    }
    long long big = 0;
    bool bigi = false;

    for (int i = 0; i < n - 2; i++)
    {
        long long d = v[i + 1] - v[i];
        if (d > n)
        {
            big = d;
            bigi = true;
        }
        if(d-1<n){
            visited[d - 1] = 0;
        }
    }
    if (bigi == true)
    {
        visited[0] = 0;
        sum = 0;
        for (auto i : visited)
        {
            if (i != 0)
            {
                sum += i;
            }
        }
        if (sum == big)
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    else
    {
        sum = 0;
        for (auto i : visited)
        {
            if (i != 0)
            {
                sum += i;
            }
        }
        if (sum == v[0] || sum ==ko)
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}