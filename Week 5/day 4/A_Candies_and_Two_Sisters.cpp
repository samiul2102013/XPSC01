#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n / 2 - 1 << endl;
        }
        else
        {
            cout << n / 2 << endl;
        }
    }
    return 0;
}