#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int &i:a)
    cin>>i;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
         int temp=a[i];
         a[i]=a[j];
         a[j]=temp;
            }
        }
    }
    int i=0,j=1;
    while(a[i]==a[j]){
        j++;
    }
    cout<<a[j]<<endl;
    for(int i:a)
    cout<<i<<" ";
}