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
        int n;
    cin>>n;
    vector<int>vec;
    int sum=0;
    for(int i=0;i<n;i++){
            int k;
            cin>>k;
            if(k==0){
               if(vec.size()==0){
                continue;
               }
               else{
                 sort(vec.begin(),vec.end());
                int n=vec.size();
                sum+=vec[n-1];
                vec.erase(vec.begin()+n-1);
               }
            }
            else{
                vec.push_back(k);
            }
    }
    cout<<sum<<endl;
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
