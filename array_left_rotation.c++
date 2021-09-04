#include <bits/stdc++.h>

using namespace std;





vector<int> rotateLeft(int d, vector<int> arr) {
    int l =arr.size();
    int j=0;
    int i=0;
   for(i=0,j=d-1;i<j;i++,j--){
       int t=arr[i];
         arr[i]=arr[j];
         arr[j]=t;
   }

   for(i=d,j=l-1;i<j;i++,j--){
       int t=arr[i];
         arr[i]=arr[j];
         arr[j]=t;
   }

   for(i=0,j=l-1;i<j;i++,j--){
       int t=arr[i];
         arr[i]=arr[j];
         arr[j]=t;
   }

return arr;
}

int main()
{
    int d;
    cin>>d;
    int size;
    cin>>size;
    vector<int>v(size);
    for(int&i:v)
    cin>>i;
    vector<int>result=rotateLeft(d,v);
    for(int i:result)
    cout<<i<<" ";

}
