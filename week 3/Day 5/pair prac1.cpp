#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int ,string>>vec;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        string s;
        cin>>s;
        auto p=make_pair(k,s);
        vec.push_back(p);
    }
    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}