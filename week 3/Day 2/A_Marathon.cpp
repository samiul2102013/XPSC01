#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    while(num--){
        int p=4;
        int arr[4];
        cin>>arr[0];
        int k=arr[0];
        int c=0;
        for(int i=1;i<p;i++){
            cin>>arr[i];
            if(arr[i]>k){
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}