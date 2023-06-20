#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vec[n];
    for(int i=0;i<n;i++){
        int k=n-1;
        while(k--){
                int d;
                cin>>d;
            vec[i].push_back(d);
        }
    }
    for(int i=0;i<n;i++){
        for(auto j:vec[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
