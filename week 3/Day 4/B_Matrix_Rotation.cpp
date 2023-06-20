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
        int r=2,c=2;
        int mat[r][c];
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cin>>mat[i][j];
            }
        }
        bool n=false;
        if(is_valid(mat)){
            cout<<"YES"<<endl;
            n=true;
        }
       if(n==false){
         int t=4;
        while(t--){
            int k=mat[1][0];
            mat[1][0]=mat[1][1];
            mat[1][1]=mat[0][1];
            mat[0][1]=mat[0][0];
            mat[0][0]=k;
            if(is_valid(mat)){
                cout<<"YES"<<endl;
                n=true;
                break;
            }
        }
       }
       if(n==false){
        cout<<"NO"<<endl;
       }
    }
    bool is_valid(int mat[2][2]){
        if(mat[0][0]<mat[0][1] && mat[1][0]<mat[1][1] && mat[0][0]<mat[1][0] && mat[0][1]<mat[1][1]){
            return true;
        }
        else{
            return false;
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
