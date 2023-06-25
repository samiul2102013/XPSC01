#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string ans="";
    int c=0;
    int count =0;
    for(int i=0;i<s.size();i++){
         c=0;
        while(c!=3){
            if(c==0){
                ans+=s[i];
                c++;
                i++;
                continue;
            }
            if(c==1){
                if(s[i]!=ans[0]){
                    ans+=s[i];
                    c++;
                    i++;
                    continue;
                }
            }
            if(c==2){
                if(s[i]!=ans[0] && s[i]!=ans[1]){
                    c++;
                    i++;
                }
            }
        }
        ans.clear();
        i--;
        count++;
    }
    cout<<;
    return 0;
}