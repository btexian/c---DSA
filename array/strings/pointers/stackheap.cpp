#include<bits/stdc++.h>
using namespace std;
// int getSum(int *arr,int n)
// {
//     int sum=0;
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         sum+=arr[i];

//     }
//     return sum;
    
// }

int whilee(int i)
{
    return true;
}


int main()
{
   int* arr=new int[5];
    int n;
    cin>>n;
    int* arr=new int[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    
    int ans=getSum(arr,n);
    cout<<"Ans is  "<<ans;

    // while (true)   4 byte rahega hamesha
    // {
    //     /* code */
    //     int i=5;
    // }
    
    
    // while(true)
    // {
    //     int* ptr=new int;   12 byte loop k andar fir brk hoga
    // }                        fir se loop chalega or heap wla memory repeat hoga


}