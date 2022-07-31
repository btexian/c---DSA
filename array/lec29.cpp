#include<bits/stdc++.h>
using namespace std;

inline int getMax(int &a,int &b,int &c,int &d)
{
    return (a>b>c>d)?a:b::c:d;
}
int main()
{
 int a=1,b=2,c=3,d=5;
 int ans=0;
 ans=getMax(a,b,c,d);
 cout<<ans;

}