#include<iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        set<string>s;
        int n;
        cin>>n;
        string st;
        cin>>st;
        for(int i=0; i<st.size()-1; i++)
        {
            string ans = st.substr(i,2);
            if(s.count(ans)==0)
            {
                s.insert(ans);
            }
        }
        cout<<s.size()<<endl;
    }
    return 0;
}
