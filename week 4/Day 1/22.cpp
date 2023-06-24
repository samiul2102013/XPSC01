#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        s.insert(p);
    }
    if(n%2==0){
        cout<<s.size();
    }
    else if(n%2==1 && n%2==1){
        cout<<s.size()<<endl;
    }
    else if(n%2==1){
        cout<<s.size()-1;
    }
    }
return 0;
}
