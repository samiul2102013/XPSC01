#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>

using namespace std;

#define minus cout << -1 << endl;
#define cno cout << "No" << endl;
#define PI 3.14159265358979323846
#define pow2(x) (1LL << (x))
#define pow2d(x) (1.0L / (1LL << (x)))
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repr(i, n) for (int i = (n) - 1; i >= 0; --i)
#define in(x, arr) for (auto& x : arr) cin >> x
#define out(x, arr) for (const auto& x : arr) cout << x << " "

class Solution {
public:
    void solve() {
        string a,b;
    cin>>a>>b;
    int n1=a.size()-1;
    int n2=b.size()-1;
    if(a[n1]=='S' && b[n2]=='S'){
        if(n1>n2){
            cout<<"<"<<endl;
        }
        else if(n1==n2){
            cout<<"="<<endl;
        }
        else{
            cout<<">"<<endl;
        }
    }
    else if(a[n1]=='L' && b[n2]=='L'){
        if(n1>n2){
            cout<<">"<<endl;
        }
        else if(n1==n2){
            cout<<"="<<endl;
        }
        else{
            cout<<"<"<<endl;
        }
    }
    else if(a[n1]=='M' && b[n2]=='M'){
        if(n1>n2){
            cout<<">"<<endl;
        }
        else if(n1==n2){
            cout<<"="<<endl;
        }
        else{
            cout<<"<"<<endl;
        }
    }
    else if(a[n1]=='S' && b[n2]=='L' || a[n1]=='S' && b[n2]=='M' ){
        cout<<"<"<<endl;
    }
    else if(a[n1]=='L' && b[n2]=='S' || a[n1]=='M' && b[n2]=='S' ){
        cout<<">"<<endl;
    }
    else if(a[n1]=='L'){
        if(b[n2]=='S'){
            cout<<">"<<endl;
        }
        else if(b[n2]=='M'){
            cout<<">"<<endl;
        }
    }
    else if(b[n2]=='L'){
        if(a[n1]=='M'||a[n1]=='S'){
            cout<<"<"<<endl;
        }
    }
    else if(a[n1]=='M'){
        if(b[n2]=='L'){
            cout<<"<"<<endl;
        }
        else{
            cout<<">"<<endl;
        }
    }
    else if(b[n2]=='M'){
        if(a[n1]=='L'){
            cout<<">"<<endl;
        }
        else{
            cout<<"<"<<endl;
        }
    }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    Solution solution;
    while (t--) {
        solution.solve();
    }

    return 0;
}
