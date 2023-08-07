#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;cin>>s;
    if((s.size()&1)){
        cout<<"NO"<<endl;
    }
    else{
        int one=1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                one =0;
                break;
            }
        }
        if(one==0){
            int h=s.size()/2 ;
            for(int i=0;i<s.size()/2;i++){
                if(s[i]!=s[h]){
                    cout<<"NO"<<endl;
                    return;
                }
                h++;
            }
            cout<<"YES"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();    
    }
    return 0;
}
