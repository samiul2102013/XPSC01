#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
        int a = 2;
        if (n == 1)
    {
        cout << 1 << endl
             << 1 << " " << 2 << endl;
        return;
    }
    else if(n==2){
        cout<<1<<endl<<2<<" "<<6<<endl;
        return;
    }
    int b = n * 3;
    if ((n & 1))
    {
        int t = (n+1)/2;
        cout << t << endl;
        while (t--)
        {
            cout << a << " " << b << endl;
            a += 3;
            b -= 3;
        }
    }
    else{
        int t=n/2;
        cout << t << endl;
        while (t--)
        {
            cout << a << " " << b << endl;
            a += 3;
            b -= 3;
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