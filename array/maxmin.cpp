#include<bits/stdc++.h>
using namespace std;
int getMAxi(int arr[],int size)
{
    int maxi=INT_MIN;
    for (int i = 0; i < size; i++)
    {  maxi=max(maxi,arr[i]);
        //if(arr[i]>max){
          //  max=arr[i];
        }
    
    return maxi;
}
int getMINi(int arr[],int size)
{
    int mini=INT_MAX;
    for (int i = 0; i < size; i++)
    {  
        mini = min( mini, arr[i]);
        //if(arr[i]<min){
           // min=arr[i];
    }
    
    return mini;
}


int main()
{
    int size;
    cin>>size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<"max value is "<<getMAxi(arr,size)<<endl;

    cout<<"min value is "<<getMINi(arr,size)<<endl;
}