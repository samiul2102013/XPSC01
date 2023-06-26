#include <bits/stdc++.h>
using namespace std;
int main()
{
   int test;
   cin>>test;
   while(test--){
     int n;
    cin >> n;
    int bh, bm;
    cin >> bh >> bm;
    int sh[n], sm[n];
    int index = 0;
    int mh = 100;
    int mm = 100;
    for (int i = 0; i < n; i++)
    {
        cin >> sh[i] >> sm[i];
        if (sh[i] < mh)
        {
            mh = sh[i];
            mm = sm[i];
            index = i;
        }
        else if (mh == sh[i])
        {
            if (sm[i] < mm)
            {
                mm = sm[i];
                index = i;
                mh = sh[i];
            }
        }
    }
    // processing
    if (bh > mh)
    {
        if (bm > 0)
        {
            bm = 60 - bm;
            bh++;
            if (bh == 24)
            {
                bh = 0;
            }
        }
        if (bh != 0)
        {
            bh = 24 - bh;
        }
        bh = bh + mh;
        bm = bm + mm;
        cout << bh << " " << bm << endl;
    }
    else if (bh == mh)
    {
        if (bm == mm)
        {
            cout << 0 << " " << 0 << endl;
        }
        else if (bm > mm)
        {
            bm = 60 - bm;
            bh = 23;
            cout << bh << " " << bm << endl;
        }
    }
    else
    {
        
            bm = 60 - bm;
            bh++;
            if (bh == 24)
            {
                bh = 0;
            }
            cout << mh - bh << " " << bm<<endl;
        
    }

   }
    return 0;
}