#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>freq(27,0);
    for(int i=0;i<s.size();i++){
        int k = s[i]-'0'-48;
        freq[k]++;
    }
    if(n&1){
        int c=0;
        if(n==1){
            cout<<0<<endl;
            return;
        }
        int a=1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                a=0;
                break;
            }
        }
        if(a){
            cout<<2<<endl;
            return;
        }
        for(int i=1;i<freq.size();i++){
            if((freq[i])&1){
                c++;
            }
            if(c>=2){
                cout<<0<<endl;
                return;
            }
        }
        if(c==1){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    else{
        for(int i=0;i<freq.size();i++){
            if((freq[i])&1){
                cout<<0<<endl;
                return;
            }
        }
        cout<<1<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}