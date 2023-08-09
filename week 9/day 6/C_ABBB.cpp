#include<bits/stdc++.h>
using namespace std;
void solve(){
      string s;cin>>s;
      bool sesh=false;
      while(sesh==false && s.size()>0){
        bool oparation=false;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='A' && s[i+1]=='B' || s[i]=='B' && s[i+1]=='B'){
                if(s.size()==2){
                    cout<<0<<endl;
                    return;
                }
                s.erase(s.begin()+i,s.begin()+i+2);
                oparation=true;
            }
        }
        if(oparation==true){
            sesh=false;
        }
        else{
            sesh=true;
        }
      }
      cout<<s.size()<<endl;

}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}