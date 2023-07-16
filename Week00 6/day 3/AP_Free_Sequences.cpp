#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    set<int>s;
    for(int i=1;i<n-1;i++){
        int l=v[i+1]-v[i];
        s.insert(l);
        int j=i-1;
        int k=0;
        while(j>=0 && k<=3){
            int f =v[i]-v[j];
            if(s.count(f)>0){
                cout<<"No"<<endl;
                return;
            }
            else{
                s.insert(f);
            }
            j--;
            k++;
        }
    }
    cout<<"Yes"<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}