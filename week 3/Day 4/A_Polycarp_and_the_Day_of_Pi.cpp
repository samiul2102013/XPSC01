#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string pi ="314159265358979323846264338327";
        string s;
        cin>>s;
        int c=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!=pi[i])
            {
                break;
            }
            else if(s[i]==pi[i])
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
