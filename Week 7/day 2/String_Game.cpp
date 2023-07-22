#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    string s;
    cin>> s;
    int i = 0, j = 1, cnt = 1;
    while(j < n){
        if(s[i] != s[j]){
            cnt++;
        }
        i = j + 1;
        j = i + 1;
    }
    if(cnt & 1){
        cout<< "Ramos"<< endl;
    }
    else{
        cout<< "Zlatan"<< endl;
    }
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
