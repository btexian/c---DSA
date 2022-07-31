#include<bits/stdc++.h>
using namespace std;
 bool checkPalind(string s)
 {
     int st=0;
     int e=s.size()-1;

     while (st<e)
     {
         /* code */
         if(s[st]!=s[e])
         {
             return 0;
         }
         else
         st++;
         e--;
     }
     return 1;
     
 }

 int main()
 {
    string s;
    cin>>s;

    // int len=getlength(name);
     cout<<checkPalind(s);
 }