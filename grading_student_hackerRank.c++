#include <bits/stdc++.h>
#include<cstdlib>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>v1;
    for(int&i:v)
    cin>>i;
    for(int i=0;i<n;i++){
        int x,r;
        r= v[i]%5;
        x=v[i]+5-r;
        if((x-v[i])<3&&x>=40)
        v1.push_back(x);
        else {
        v1.push_back(v[i]);
        }
    }
    for(int i:v1)
    cout<<i<<endl;
    return 0;
}
