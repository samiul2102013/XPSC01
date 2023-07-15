#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    char ans = 'A';
    int a=0,b=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==ans){
            if(ans=='A'){
                a++;
            }
            else{
                b++;
            }
        }
        else{
            ans = s[i];
        }
    }
    cout<<a<<" "<<b<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}