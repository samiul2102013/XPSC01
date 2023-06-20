#include<bits/stdc++.h>
using namespace std;
int const N=1e4+1;
int count[N];
int main(){
    int count[N]={0};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        count[k]++;
    }
    cout<<count[15]<<endl<<count[16];
    long long sum=0;
    for(int i=0;i<N;i++){
        if(count[i]==0){

        }
        else if(count[i]%2==0){

        }
        else{
            sum++;
        }
    }
    cout<<sum;
    return 0;
}