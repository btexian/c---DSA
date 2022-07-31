#include<bits/stdc++.h>
using namespace std;
int main()
{int ans=1;
    int a,b;
    cin>>a>>b;


    for (int i = 1;i <=b; i++)
    {
        
        ans=ans*a;
    }
    cout<<"ans is:"<<ans;
}