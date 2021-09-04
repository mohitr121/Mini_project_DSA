#include<iostream>
using namespace std;
int main()
{ int f=0;
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        
        if(n%i==0){
            f=1;
            cout<<n<<" is not prime number";
            break;
        }
    }
    if(f==0)
    cout<<n<<" is prime number";
}
