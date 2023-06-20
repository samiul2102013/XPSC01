#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int n;
    cin>>n;
    cin>>str;
    int c=0;
    set<string>s;
    for(int i=0;i<str.size()-1;i++){
        string ans = str.substr(i,2);
        if(s.count(ans)==0){
            c++;
        }
    }
    cout<<c<<endl;
return 0;
}
