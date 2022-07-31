#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{   for (int i = 2; i <= n / 2; ++i)
  {
        if (n%i==0)
    {
        //not prime
        return 0;
  } }
     return 1;
   
}
int main()
{
    int n;
    cin>>n;

   // int ans=prime(n);
    if(prime(n)){
        cout<<"prime number"<<endl;
    }
    else{
         cout<<"not a prime number"<<endl;

    }

}