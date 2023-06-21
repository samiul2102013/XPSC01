#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int k;
    cin>>k;
    string n;
    cin >> n;
    transform(n.begin(), n.end(), n.begin(), [](char c) {
        return tolower(c);
    });
    n.erase(unique(n.begin(), n.end()), n.end());
    string ans="meow";
    if(n==ans){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    }
    return 0;
}
