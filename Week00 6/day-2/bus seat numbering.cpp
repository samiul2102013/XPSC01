#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if (n <= 10)
    {
        cout << "Lower Double" << endl;
    }
    else if (n > 10 && n <= 15)
    {
        cout << "Lower Single" << endl;
    }
    else if (n > 15 && n <= 25)
    {
        cout << "Upper Double" << endl;
    }
    else
    {
        cout << "Upper Single" << endl;
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