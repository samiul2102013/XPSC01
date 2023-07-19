#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        s.insert(p);
    }
    vector<int> set_si(s.size(), 0);
    int i = 0;
    int c=0;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        if (set_si[i] == 0)
        {
            auto d = *it;
            int e = d*2;
             if(s.count(e)>0){
               int index1 = distance(s.begin(),s.find(e));
               set_si[index1]=1;
             }
             else{
                c++;
             }
        }
        set_si[i] = 1;
        i++;
    }

    cout<<c;
}
int main()
{
    solve();
    return 0;
}