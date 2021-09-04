#include <bits/stdc++.h>

using namespace std;


int camelcase(string s) {
int l=s.size();
int count =0;
for(char i:s){
    if(i>=65&&i<=90)
    count++;
}
return count+1;
}
int main(){
    string s;
    cin>>s;
    cout<<camelcase(s);
}