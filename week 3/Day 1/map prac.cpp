#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>mp;
    mp.insert({1,10});
    mp.insert({2,20});
    mp.insert({3,30});
    mp.insert({4,40});
    mp[1]=mp[1]+100;
    mp.insert({6,60});
    mp[5]=50;
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    
    cout<<mp.max_size()<<endl;

    //mp.clear();
    map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
    map<int,string>mps;

    mps.insert({1,"Samiul Hasan"});
    mps.insert({2,"Adnan"});
    mps[3]="Sajin";
    for(auto i:mps){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    mp.erase(5);
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    int cnt=mp.count(2);
    int cnt2=mps.count(45);
    cout<<cnt<<endl<<cnt2<<endl;

    auto i=mp.find(3);
    if(i!=mp.end()){
        cout<<"ase"<<endl;
    }
    return 0;
}