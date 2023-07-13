#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin.ignore();
        cin >> n;
        int keep = 0;
        bool t = false;
        if (n >1)
        {
            for (int i = 0; i < n; i++)
            {
                int k;
                cin >> k;
                if (i == 0)
                {
                }
                else
                {
                    if (abs(k - keep) > 1)
                    {
                        cout << "NO" << endl;
                        t = true;
                        break;
                    }
                }
                keep = k;
            }
            if (t == false)
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}