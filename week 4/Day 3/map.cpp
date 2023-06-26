#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++){
        int k;
        cin.ignore();
        cin>>k;
        m[i]=k;
    }
    for(auto i:m)cout<<i.first<<" "<<i.second<<endl;
    cout<<endl;
    int key;
    cout<<"Enter key ";
    cin.ignore();
    cin>>key;
    auto i=m.find(key);
    int index;
    if(i!=m.end()){
         index=distance(m.begin(),i);
    }
    cout<<index;
    return 0;
}