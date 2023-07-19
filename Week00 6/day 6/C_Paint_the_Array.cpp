#include <iostream>
#include <vector>
using namespace std;

#define ll long long

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll gcd_of_vector(vector<ll> vec)
{
    ll result = vec[0];
    for (auto i : vec)
    {
        if (result == 1)
        {
            return 1;
        }
        result = gcd(result, i);
    }
    return result;
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> even;
    vector<ll> odd;

    for (int i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        if (i & 1)
        {
            even.push_back(k);
        }
        else
        {
            odd.push_back(k);
        }
    }

    ll oddgcd = gcd_of_vector(odd);
    ll evengcd = gcd_of_vector(even);

    //one er case 
   if(oddgcd==1 && evengcd==1){
    cout<<0<<endl;
    return;
   }
   else if(oddgcd==1){
      for(int i=0;i<odd.size();i++){
        if(odd[i] % evengcd==0){
            cout<<0<<endl;
            return;
        }
      }
      cout<<evengcd<<endl;
      return;
   }
   else if(evengcd ==1){
       for(int i=0;i<even.size();i++){
        if(even[i] % oddgcd ==0){
            cout<<0<<endl;
            return ;
        }
       }
       cout<<oddgcd<<endl;
       return;
   }

   //divisible 
   int x=1,z=1;
   for(int i=0;i<odd.size();i++){
    if(odd[i] % evengcd ==0){
        x=0;
        break;
    }
   }
   if(x){
    cout<<evengcd<<endl;
    return;
   }

   for(int i=0;i<even.size();i++){
    if(even[i] % oddgcd ==0){
        z=0;
        break;
    }
   }
   if(z){
    cout<<oddgcd<<endl;
   }
   if(x==0 && z==0){
    cout<<0<<endl;
   }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}