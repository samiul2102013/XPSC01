#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        dq.push_back(k);
    }
    sort(dq.begin(), dq.end(), greater<int>());
    long long sum = 0;
    deque<int>t=dq;
    int one=0;
    while(!t.empty()){
        if(t.back()==1){
            one=1;
        }
        t.pop_back();
    }
    if(one==0){
        cout<<"NO"<<endl;
        return;
    }
    if(n==1){
        if(dq.back()==1){
            cout<<"YES"<<endl;
            return;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        sum += dq.back();
        dq.pop_back();
        if (dq.back() > sum)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main()
{
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}