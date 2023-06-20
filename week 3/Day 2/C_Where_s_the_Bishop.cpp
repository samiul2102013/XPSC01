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
         int matrix[8][8];
    for(int i=0;i<8;i++){
        string s;
        cin>>s;
        for(int j=0;j<8;j++){
            if(s[j]=='.'){
                matrix[i][j]=-1;
            }
            else{
                matrix[i][j]=0;
            }
        }
    }
    
    bool test=false;
    for(int i=1;i<8;i++){
        for(int j=0;j<8;j++){
            if(matrix[i][j]==0){
                if(matrix[i-1][j-1]==0 && matrix[i-1][j+1]==0 && matrix[i+1][j-1]==0 && matrix[i+1][j+1]==0){
                    cout<<i+1<<" "<<j+1<<endl;
                    test = true;
                    break;
                }
            }
        }
        if(test==true){
            break;
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
