#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    deque<int>q,tem;
    cin>>n;
    long long sum=0;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(k==0){
            if(q.size()==0){
                continue;
            }
            else{
                for(int j=q.size();j>=0;j--){
                    if(k<q[j]){
                        tem.push_back(q.back());
                        q.pop_back();
                    }
                    else{
                        q.push_back(k);
                    }
                }
                while(!tem.empty()){
                    q.push_back(tem.back());
                    tem.pop_back();
                }
            }
            sum+= q.back();
            q.pop_back();
        }
    }
    cout<<sum<<endl;
    return 0;
}