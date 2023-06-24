#include<bits/stdc++.h>
using namespace std;
__int128_t str_to_int(string s){
    int sing =1;
    if(s[0]=='-'){
        sing=-1;
    }
    int r=0;
    for(int i=0;i<s.size();i++){
        r=r*10+(s[i]-'0');
    }
    return sing*r;
}
int main(){
    string s;
    cin>>s;
    __int128_t ans=str_to_int(s);
    cout<<ans;
    return 0;
}