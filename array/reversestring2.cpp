#include<bits/stdc++.h>
using namespace std;
void reverse2(string& s)
{
     int n= s.size()-1;
     int st=0;
     while(st<n){
         swap(s[st++],s[n--]);
     }

}

int main()
{  string s;
//int k;
    cout<<"enter string";
    cin>>s;

   // cin>>k;
  reverse2(s);
  cout<<s;
}