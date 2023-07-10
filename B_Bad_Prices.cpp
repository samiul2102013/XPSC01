#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    vector<int>v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    int mini ;
    for(int i=v.size()-1;i>=0;i--){
        if(i=n-1){
            mini=v[i];
            arr[i]=mini;
        }
        else{
            mini = min(arr[i],mini);
            arr[i]=mini;
        }
    }
    for(auto i: v)cout<<i<<" ";
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}