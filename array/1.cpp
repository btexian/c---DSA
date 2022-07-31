#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    
   // cin>>arr[n];
    for (int  i = 0; i < n; i++)
    {cout<<"enter the elements of array "<<i+1<<endl;
        cin>>arr[i];
    }
    cout<<" elements of array are"<<endl;
 for (int  i = 0; i < n; i++)
    {
       // cin>>arr[i];
       //break;
       cout<<" "<<arr[i];
    }
    
}