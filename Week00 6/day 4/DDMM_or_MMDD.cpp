#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int a = s[0]-'0';
    int b=s[1]-'0';
    int ans1 = (a*10)+b;
    int c=s[3]-'0';
    int d=s[4]-'0';
    int ans2=c*10+d;
    if(ans1<=12 && ans2<=12){
        cout<<"BOTH"<<endl;
    }
    else if(ans1>12){
        cout<<"DD/MM/YYYY"<<endl;
    }
    else{
        cout<<"MM/DD/YYYY"<<endl;
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