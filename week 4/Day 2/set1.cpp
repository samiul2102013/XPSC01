#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        s.insert(p);
    }
    int i;
    cin>>i;
    auto it=s.find(i);
    int index=-1;
    if(it!=s.end()){
        index=distance(s.begin(),it);
    }
    cout<<index;
    return 0;
}