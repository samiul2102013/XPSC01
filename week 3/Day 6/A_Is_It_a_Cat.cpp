#include <iostream>
#include <string>
using namespace std;

int main() {
    int test;
    cin>>test;
    while(test--){
        int n;
    cin >> n;
    string s;
    cin >> s;
    string ans="meow";
    string result="";
    for (int i = 0; i < s.size(); i++) {
        char a=tolower(s[i]);
        char b=tolower(s[i+1]);
        if(i==s.size()||a!=b){
            result+=a;
        }
    }
    if(ans==result){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}
