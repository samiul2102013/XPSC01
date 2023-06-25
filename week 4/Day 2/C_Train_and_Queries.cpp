#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int p;
            cin >> p;
            v.push_back(p);
            s.insert(p);
        }
        while (k--)
        {
            int x, y;
            cin >> x >> y;
            auto it1 = s.find(x);
            auto it2 = s.find(y);
            int a = distance(s.begin(), it1);
            int b = distance(s.begin(), it2);
            if (it2 != s.end())
            {
                int b = distance(s.begin(), it2);
            }
            if (s.count(y) && a < b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}