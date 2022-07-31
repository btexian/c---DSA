#include<bits/stdc++.h>
using namespace std;
int bits(int n)
{
    int m=n;
    int mask=0;
    while (m!=0)
    {
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int ans=(~n)&mask;
    return ans;
}
int main()
{
   int n;
   cin>>n;

  int  answer=bits(n);
   cout<<"no of 1 bit are "<<answer;
}



