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
        int r, c;
    cin >> r >> c;
    int maxi = 0;
    int sum = 0;
    int matrix[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum = 0;
            if (i > 0 && j > 0)
            {
                int k = 1;
                while (i - k != -1 && j - k != -1)
                {
                    sum += matrix[i - k][j - k];
                    k++;
                }
            }
            if (i > 0 && j < c - 1)
            {
                int k = 1;
                while (i - k != -1 && j + k != c )
                {
                    sum += matrix[i - k][j + k];
                    k++;
                }
            }
            if (i < r - 1 && j > 0)
            {
                int k = 1;
                while (i + k != r  && j - k != -1)
                {
                    sum += matrix[i + k][j - k];
                    k++;
                }
            }
            if (i < r - 1 && j < c )
            {
                int k = 1;
                while (i + k != r  && j + k != c)
                {
                    sum += matrix[i + k][j + k];
                    k++;
                }
            }
            sum += matrix[i][j];
            maxi = max(sum, maxi);
        }
    }
    cout << maxi << endl;
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
