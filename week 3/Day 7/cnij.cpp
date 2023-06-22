#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    char ini;
    cin>>n;
    cin>>ini;
    string s;
    cin>>s;
    int m=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==ini){
            int j,c=0;
            for(int j=i+1;j!='g';j++){
                if(j=s.size()-1){
                    j=0;
                }
                c++;
                if(c==s.size()){
                    break;
                }
            }
            m=max(m,c+1);
        }
    }
    cout<<m<<endl;
    return 0;
}