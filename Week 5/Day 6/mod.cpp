#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count =0,o=0,t=0;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        k%=3;
        if(k==0){
            count++;
        }
        else if(k==1){
            o++;
        }
        else{
            t++;
        }
    }
    if(o>t){
        int mini = min(o,t);
        count+=mini;
        count+=(o-mini)/3;
        cout<<count<<endl;
    }
    else if(t>0){
        int mini = min(o,t);
        cout<<count+mini<<endl;
    }
    else{
        cout<<count+o<<endl;
    }
    return 0;
}