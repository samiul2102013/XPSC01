#include<bits/stdc++.h>
using namespace std;
int fact(int k){
    long long result =1;
    for(int i=1;i<=k;i++){
        result*=i;
    }
    return result;
}
int second_fact(int n,int k){
    long long result =1;
    for(int i=1;i<=k;i++){
        result*=i;
    }
    long long result1=1;
    for(int i=1;i<=k-n;i++){
        result1*=i;
    }
    return result/result1;
}
void solve(){
    int a,b;
    cin>>a>>b;
    long long result=1;
    if(a==2 && b==1){
        cout<<1<<endl;
        return;
    }
    if(a>=b){
        cout<<fact(a)<<endl;
    }
    else{
        cout<<second_fact(a,b)<<endl;
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