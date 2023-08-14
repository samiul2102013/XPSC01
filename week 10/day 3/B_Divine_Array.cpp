#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    vector<int> freq(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
        freq[k]++;
    }

    vector<vector<int>> vv;
    vv.push_back(v);
    int cnt = 0;
    int t = 4;
    while (t--)
    {
        cnt++;
        vector<int> v1;
        vector<int> temp_freq = freq; // Create a temporary vector for frequency
        vector<int> loopfreq(n + 1, 0); // Initialize loopfreq with zeros
        
        for (int i = 0; i < n; i++)
        {
            int p = temp_freq[v[i]];
            loopfreq[p]++;
            v1.push_back(p);
        }
        vv.push_back(v1);
        
        // Print the values of v1
        cout << endl << endl << endl;
        for (auto i : v1)
        {
            cout << i << " ";
        }
        cout << endl;
        
        // Print the values of the previous vector vv[cnt-1]
        for (int i = 0; i < n; i++)
        {
            cout << vv[cnt - 1][i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
}
