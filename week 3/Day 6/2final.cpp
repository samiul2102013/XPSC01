#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int big[26] = {0};
        int small[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            if (isupper(s[i]))
            {
                int a = s[i] - 'A';
                big[a]++;
            }
            if (islower(s[i]))
            {
                int a = s[i] - 'a';
                small[a]++;
            }
        }
        int sum = 0;
        bool t = false;
        for (int i = 0; i < 26; i++)
        {
            int p = min(small[i], big[i]);
            sum += p;

            if (k > 0)
            {
                int m = max(small[i] - p, big[i] - p) / 2;
                int w = min(k, m);
                if (w > 0)
                {
                    sum += w;
                    k=k-w;
                }
            }
        }
        cout << sum << endl;
    }

    return 0;
}
