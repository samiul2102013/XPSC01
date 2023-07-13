#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    vector<int> p;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        v.push_back(k);
    }
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        p.push_back(k);
    }
    sort(v.begin(),v.end());
    sort(p.begin(),p.end());
    int dora2 =p[0];
    int dora1=v[0];
    int count =1;
    for(int i=1;i<n;i++){
        if(v[i]>=dora1 && p[i]<=dora2){
            count++;
        }
    }
    return 0;
}
