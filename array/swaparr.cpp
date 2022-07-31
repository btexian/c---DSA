#include<bits/stdc++.h>
using namespace std;
void SwapArr(int arr[],int n)
{
    for (int  i = 0; i < n; i+=2)
    {
       if(i+1<n) 
       {
           swap(arr[i],arr[i+1]);
       }
    }
    
}
void printArray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" \t";
    }
}    

int main()
{   int n;
    int arr[5]={1,5,3,6,4};

     SwapArr(arr,5);

     printArray(arr,5);
}