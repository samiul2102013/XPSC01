#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,o,p;
    vector<int>v;
    cin>>m;
    v.push_back(m);
    cin>>n;
    v.push_back(n);
    cin>>o;
    v.push_back(o);
    cin>>p;
    v.push_back(p);
    
    sort(v.begin(),v.end());
    int a,b,c;
    a= v[3]-v[0];
    b=v[3]-v[1];
    c=v[3]-v[2];
    cout<<a<<" "<<b<<" "<<v[v.size()-1]-(a+b)<<endl;
    return 0;
}