#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v;
    v.reserve(n); // Preallocate memory

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    if(n==1){
        cout<<v[0]-1<<endl;
        return;
    }
    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > i + 1)
        {
            while (v[i] > i + 1)
            {
                v.insert(v.begin() + i, 1);
                cnt++;
                i++;
            }
        }
    }

    cout << cnt << endl;
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
