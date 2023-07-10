#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin >> n;
        vector<int> v;
        int jur = 0, bejur = 0;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            v.push_back(k);
            if (k % 2 == 0)
            {
                jur++;
            }
            else
            {
                bejur++;
            }
        }
        if (jur >= bejur)
        {
            cout << bejur << endl;
        }
        else
        {
            cout << jur << endl;
        }
    return 0;
}