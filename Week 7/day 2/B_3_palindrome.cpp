#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int p = n;
    while (p)
    {
        queue<char> q1, q2;
        q1.push('a');
        q1.push('a');
        q2.push('b');
        q2.push('b');
        while (!q1.empty() && p>0)
        {
            cout << q1.front();
            q1.pop();
            p--;
        }
        while (!q2.empty() && p>0)
        {
            cout << q2.front();
            q2.pop();
            p--;
        }
    }
    cout<<endl;
}
int main()
{
    solve();
    return 0;
}