#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;
  cin>>test;
  while(test--){
      int n;
    cin>>n;
    int c=0;
    int p=n;
    while(p){
        p/=10;
        c++;
    }
    int d=pow(10,c-1);
    cout<<n-d<<endl;
  }
    return 0;
}