#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int l = 0, r = 0;
            if (i == 0)
            {
                r = abs(arr[i + 1] - arr[i]);
            }
            else if (i == n - 1)
            {
                l = abs(arr[i - 1] - arr[i]);
            }
            else
            {
                l = abs(arr[i - 1] - arr[i]);
                r = abs(arr[i + 1] - arr[i]);
            }
            int maxi = max(l, r);
            mini = min(mini, maxi);
        }
        cout << mini << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}