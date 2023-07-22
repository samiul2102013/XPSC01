#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.first==b.first){
        return a.second>b.second;
    }
    return a.first<b.first;
}
void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
    }

    cout<<"befor sorted"<<endl;
    for(auto i:p)cout<<i.first<<" "<<i.second<<endl;

    sort(p.begin(),p.end());

    cout<<"after sorted"<<endl;
    for(auto i:p)cout<<i.first<<" "<<i.second<<endl;

    sort(p.begin(),p.end(),cmp);

    cout<<"cmp sorted"<<endl<<endl;
    for(auto i:p)cout<<i.first<<" "<<i.second<<endl;
}

int main() {
    solve();
    return 0;
}
