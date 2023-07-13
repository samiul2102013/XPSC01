#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    int count = 0;
    int maxi = 0;

    for(int i = 0; i < s.size() - 1; i++){
        char a = s[i];
        char b = s[i + 1];
        count = 0;

        for(int j = 0; j < s.size() - 1; j++){
            char c = s[j];
            char d = s[j + 1];

            if(a == c && b == d){
                count++;
            }
        }

        if(count > maxi){
            maxi = count;
            ans = "";
            ans += a;
            ans += b;
        }
    }

    cout << ans << endl;

    return 0;
}
