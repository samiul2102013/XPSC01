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
#define repr(i, n) for (int i = (n)-1; i >= 0; --i)
#define in(x, arr)      \
    for (auto &x : arr) \
    cin >> x
#define out(x, arr)           \
    for (const auto &x : arr) \
    cout << x << " "

const int N = 1e4 + 3;
int count[N];

class Solution
{
public:
    void solve()
    {
        int n;
        cin >> n;
        int count[N] = {0};
        for (int i = 0; i < n; i++)
        {
            int d;
            cin >> d;
            count[d]++;
            if (count[d] % 2 == 0)
            {
                count[d] = 0;
            }
            else
            {
                count[d] = 1;
            }
        }
        long long sum = 0;
        for (int i = 0; i < N; i++)
        {
            sum += count[i];
        }
        cout << sum << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    Solution solution;
    while (t--)
    {
        solution.solve();
    }

    return 0;
}
