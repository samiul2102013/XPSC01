#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long f, w;
    cin >> f >> w;
    cout<<f<<w<<endl;
    vector<long long> v;
    for (long long i = 0; i < f; i++)
    {
        long long p ;
        cin>>p;
        v.push_back(p);
    }
    for(auto i:v)cout<<i<<" ";
    cout<<endl;
    long long c = 0;
    long long sum=0;
    while (1)
    {
        for (int i = 0; i < f; i++)
        {
            long long c2 = c * 2;
            sum = 0;
            long long mul = (v[i] + c2);
            cout<<"mul="<<mul<<" ";
            long long mul2 = (mul)*(mul);
            cout<<" mul2"<<mul2<<" ";
            sum= sum + mul2;
            cout<<" sumv="<<sum<<" ";
        }
        c++;
        cout<<"c="<<c<<" sum="<<sum<<endl;
         if(sum>=w){
            cout<<c<<endl;
            return;
        }
    }
}
int main()
{
    solve();
    return 0;
}