#include<bits/stdc++.h>
using namespace std;
const int N=1e4+1;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int count[N+1]= {0};
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int k;
            cin>>k;
            count[k]++;
        }
        //samiejr
        int c=0;
        int b=0;
        for(int i=0; i<=N; i++)
        {
            if(count[i]%2==1)
            {
                c++;
            }
            else if(count[i]>0 && count[i]%2==0)
            {
                b++;
            }
        }
        if(b%2==1)
        {
            cout<<c+b-1<<endl;
        }
        else
        {
            cout<<c+b<<endl;
        }
    }

    return 0;
}
