#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,string>m;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[i]=s;
    }
    for(auto i:m)cout<<i.first<<" "<<i.second<<endl;
    return 0;
}