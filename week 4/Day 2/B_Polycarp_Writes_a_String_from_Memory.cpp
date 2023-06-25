#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        string s;
    cin>>s;
    unordered_set<char>se;
    int c=0;
    for(int i=0;i<s.size();i++){
        while(se.size()!=4){
            char d=s[i];
            if(i==se.size()-1){
                break;
            }
            se.insert(d);
            i++;
        }
        se.clear();
        c++;
        i=i-2;;
    }
    cout<<c++<<endl;
    }
    return 0;
}