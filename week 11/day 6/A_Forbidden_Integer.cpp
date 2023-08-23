#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    if (k == 1)
    {
        cout << "NO" << endl;
    }
    else if (k == 2 && x == 1)
    {
        if ((n & 1))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            int ans = n / 2;
            cout<<ans<<endl;
            while (ans)
            {
                cout << 2 << " ";
                ans--;
            }
            cout << endl;
        }
    }
    else
    {
        cout << "YES" << endl;
        if (!(n & 1))
        {
            if (x == 1)
            {
                cout<<n/2<<endl;
                int ans = n / 2;
                while (ans)
                {
                    cout << 2 << " ";
                    ans--;
                }
                cout << endl;
            }
            else
            {
                cout<<n<<endl;
                while (n)
                {
                    cout << 1 << " ";
                    n--;
                }
                cout << endl;
            }
        }
        else{
            if(x==1){
                cout<<n/2<<endl;
                cout<<3<<" ";
                n-=3;
                while(n){
                    cout<<2<<" ";
                    n-=2;
                }
                cout<<endl;
            }
            else{
                cout<<n<<endl;
                while(n){
                    cout<<1<<" ";
                    n-=1;
                }
                cout<<endl;
            }

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