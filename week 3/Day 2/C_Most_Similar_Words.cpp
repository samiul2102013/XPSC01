#include <bits/stdc++.h>
using namespace std;
long long stirng_to_int(string s)
{
    long long sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
    }
    return sum;
}
int main()
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<long long> vec;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            long long d = stirng_to_int(s);
            vec.push_back(d);
        }
        int mi = INT_MAX;
        for (int i = 0; i < vec.size(); i++)
        {
            for (int j = 0; j < vec.size(); j++)
            {
                long long p = vec[i];
                if (p != vec[j])
                {
                    long long k = abs(p - vec[j]);
                    mi = min(k, p);
                }
            }
        }
        cout << mi << endl;
    }
    return 0;
}