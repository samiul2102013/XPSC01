#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    deque<int>q,temp;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(q.empty()){
            q.push_back(k);
            continue;
        }
        while(!q.empty() && k>q.back()){
            if(q.size()==0){
                break;
            }
            temp.push_back(q.back());
            q.pop_back();
        }   
        q.push_back(k);
        while(!temp.empty()){
            q.push_back(temp.back());
            temp.pop_back();
        }
    }
    while(!q.empty()){
        cout<<q.back()<<" ";
        q.pop_back();
    }
    return 0;
}