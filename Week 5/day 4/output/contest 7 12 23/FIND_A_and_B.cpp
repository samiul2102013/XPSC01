#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        if((a*b)%c==0){
            cout<<a*b<<" "<<c<<endl;
        }
        else if((a*c)%b==0){
            cout<<a*c<<" "<<b<<endl;
        }
        else if((b*c)%a==0){
            cout<<b*c<<" "<<a<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}