#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
    cin>>n;
    map<int,char>m;
    vector<int>v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    string s;
    cin>>s;
    bool k = true;
    for(int i=0;i<n;i++){
        if(m.count(v[i])>0 && m[v[i]]!=s[i]){
            k=false;
            break;
        }
        m[v[i]]=s[i];
    }
    if(k==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}