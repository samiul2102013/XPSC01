#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int p = n;
    int i = 2;
    while (p--)
    {
        cout <<i<<" ";
        i+=2;
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}