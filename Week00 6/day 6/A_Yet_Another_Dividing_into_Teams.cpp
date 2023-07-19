#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());
    if (n == 2)
    {
        if ((v[1] - v[0] > 1))
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            cout << 2 << endl;
            return;
        }
    }
    int mid = n / 2;
    int c = 0;
    for (int i = 0; i < n / 2; i++, mid++)
    {
        if ((v[mid] - v[i]) > 1)
        {
            c++;
        }
    }
   if(n>=3 && n%2==1){
    if(c<2){
        cout<<2<<endl;
    }
    else{
        cout<<c<<endl;
    }
   }
   else{
    cout<<c<<endl;
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