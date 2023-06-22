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
        int n,q;
    cin>>n>>q;
    vector<long long >vec;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        vec.push_back(k);
    }
    for(int i=0;i<q;i++){
        int u,v;
        cin>>u>>v;
        if(u==0){
            long long sum=0;
            for(int j=0;j<n;j++){
                if(vec[j]%2==0){
                    vec[j]+=v;
                }
                sum+=vec[j];
            }
            cout<<sum<<endl;
        }
        else{
            long long sum=0;
            for(int j=0;j<n;j++){
                if(vec[j]%2==1){
                    vec[j]+=v;
                }
                sum+=vec[j];
            }
            cout<<sum<<endl;
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
