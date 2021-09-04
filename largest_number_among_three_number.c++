#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t1,t2,t3;
    cin>>t1>>t2>>t3;
    if(t1>t2){
        if(t1>t3)
        cout<<"largest no is "<<t1<<endl;
      else
      cout<<"largest no is "<<t3<<endl;
    }
    else{
        if(t2>t3)
        cout<<"largest no is "<<t2<<endl;
        else
        cout<<"largest no is "<<t3<<endl;
    }
}