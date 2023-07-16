#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    set<int>se;
    for(int i=0;i<n;i++){
        float k ;
        cin>>k;
        se.insert(k);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else{
                float a= *next(se.begin(),i);
                float b= *next(se.begin(),j);
                float k=(b*2)-a;
                if(se.count(k)){
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}