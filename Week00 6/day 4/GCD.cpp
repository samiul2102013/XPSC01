#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
    if(b==0){
        return a;
    }
   return GCD(b,a%b);
}
int main(){
    int a,b;
    cin>>a>>b;
    int k=GCD(a,b);
    cout<<k;
    return 0;
}