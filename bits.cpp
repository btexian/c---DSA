#include<bits/stdc++.h>
using namespace std;
int Abits(int n)
{
    int count=0;
    while (n!=0)
    {
        if(n&1)
        {
            count++;
        }
        n=n>>1;
    }
    return count;
}

int Bbits(int m)
{
    int count=0;
    while (m!=0)
    {
        if(m&1)
        {
            count++;
        }
        m=m>>1;
    }
    return count;
}

int main()
{
    int n,m;
    cout<<"enter the value of m and n"<<endl;
    cin>>m>>n;

     
  int ans1=Abits(n);
  int ans2=Bbits(m);
  cout<<"Set bits of A="<<ans1<<endl;
  cout<<"Set bits of B="<<ans2<<endl;
  int ans=ans1+ans2;

  cout<<"Total set bits of A and B are ="<<ans<<endl;

  return 0;

    
}