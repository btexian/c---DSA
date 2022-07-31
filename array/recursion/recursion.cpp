#include<bits/stdc++.h>
using namespace std;
void count(int n)
{
    if(n==0) {
         return ;

   }
   //cout<<n<<endl;
   //recursive reln
     count(n-1);
    
    cout<<n<<endl;
}
// int power(int n)
// {
//     if (n==0)
//     return  1;

//     return 2*power(n-1);}

// int fact(int n)
//  {
//         if (n==0)
//             return 1;
//             else
//              return n*fact(n-1);
// }
int main()
{
    int n;
    cin>>n;

   // cout<<fact(n);
  // cout<<power(n);
        count(n);
}