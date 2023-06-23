#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
         int n;
    cin>>n;
    if(n==1){
        cout<<-1<<endl;
    }
    else if(n==3){
        cout<<-1<<endl;
    }
    else if(n==5){
        cout<<5<<" "<<4<<" "<<1<<" "<<2<<" "<<3<<endl;
    }
    else if(n%2==0){
        for(int i=n;i>=1;i--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else if(n%2==1){
       int p=n;
        vector<int>v;
        for(int i=n;i>=1;i--){
            v.push_back(i);
        }
        swap(v[p/2],v[p/2 +1]);
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}