#include <bits/stdc++.h>
using namespace std;
bool cmp (pair<int,int>a,pair<int,int>b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    return a.first>b.first;
}
void solve() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> vp;
    for (int i = 1; i <= n; i++) {
        int p;
        cin >> p;
        auto a = make_pair(p, i);
        vp.push_back(a);
    }
   
    vector<int> visited(n + 1, 0);
    sort(vp.begin(), vp.end(),cmp);
    for(auto it=vp.begin();it!=vp.end();){
        while(it->first>=0){
            sort(vp.begin(), vp.end(),cmp);
            for(auto j:vp)cout<<j<<" ";
            cout<<endl;
            it->first-=k;
            if(it->first<=0){
                cout<<it->second<<" ";
            }
        }
        it++;
    }
}

int main() {
    solve();
    return 0;
}
