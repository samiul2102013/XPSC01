#include<bits/stdc++.h>
using namespace std;
bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    return a.first < b.first;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        p.push_back(make_pair(k,i));
    }

    sort(p.begin(),p.end(),compare);

    for(auto i:p) cout<<i.second<<" "<<i.first<<endl;
    return 0;
}