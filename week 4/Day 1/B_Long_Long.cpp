#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<int> v;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            if(k!=0){
                if(k>0){
                    sum+=k;
                }
                else {
                    sum+=(-1)*k;
                }
                v.push_back(k);
            }
        }
        long long c = 0;
        int j = 0;
        while (j < v.size())
        {
            if (v[j] < 0)
            {
                while (j < v.size() && v[j] < 0)
                {
                    j++;
                }
                c++;
            }
            else
            {
                j++;
            }
        }
        cout << sum << " " << c << endl;
    }
    return 0;
}
