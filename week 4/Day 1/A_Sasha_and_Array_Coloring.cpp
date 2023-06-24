#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    int t=n/2;
    int f=0;
    int l=n-1;
    long long sum=0;
    while(t--){
        sum+=abs(v[f]-v[l]);
        f++;
        l--;
    }
    cout<<sum<<endl;
    }
    return 0;
}
