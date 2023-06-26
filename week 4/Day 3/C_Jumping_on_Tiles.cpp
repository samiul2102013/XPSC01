#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char src,dst;
    src=s[0];
    dst=s[s.size()-1];
    int cost=0;
    int step=0;
    vector<char>v;
    for(int i=0;i<s.size();i++){
        char k=s[i];
        if(src>dst)
        {
            if(k>=dst && k<=src){
                v.push_back(k);
            }
        }
        else if(src<dst){
            if(k>=src && k<=dst){
                v.push_back(k);
            }
        }
        else if(src==dst){
            v.push_back(k);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++){
        int a=v[i]-'0';
        int b=v[i+1]-'0';
        cost += abs(a-b);
    }
    cout<<cost<<" "<<v.size()<<endl;
    return 0;
}