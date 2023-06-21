#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(3);
    vec.push_back(56);
    vec.push_back(54);
    vec.push_back(87);
    vec.erase(vec.begin()+1);

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}