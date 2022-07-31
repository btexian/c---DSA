#include<bits/stdc++.h>
using namespace std;

int fibb()
{ int n;
    int a=0;
    int b=1;
   // cout<<a << b;
    cout<<endl;
    int nextterm=0;
     for (int i = 2; i < n; i++)
      
         { nextterm = a + b;
        a = b;
        b = nextterm;
      
        }
     return b;
}

int main()
{
    int n;
    cin>>n;

    //int ans=fibb(n);
    cout<<"\nfibonacci series are:"<<fibb();
    return 0;
}