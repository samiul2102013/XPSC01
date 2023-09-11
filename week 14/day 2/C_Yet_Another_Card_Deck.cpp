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

void TEST_CASES()
{
    int n, q;
    cin >> n >> q;
    deque<int> dq;
    while (n--)
    {
        int k;
        cin >> k;
        dq.push_back(k);
    }
    vector<int> v(q);
    for (auto &i : v)
        cin >> i;

    for(int j=0;j<q;j++){
        for (int i = 0; i < dq.size(); i++)
        {
            if (dq[i] == v[j])
            {
                cout<<i+1<<" ";
                dq.erase(dq.begin() + i, dq.begin() + i + 1);
                break;
            }
        }
        dq.push_front(v[j]);
    }
    cout<<endl;
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t = 1;
    // cin>>t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}