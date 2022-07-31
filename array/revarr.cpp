#include<bits/stdc++.h>
using namespace std;
void arrayInput(int arr[],int s)
{
 //int arr[s];
  cout<<"enter the elements in array "<<endl;
  for (int i = 0; i < s; i++)
  {
      cin>>arr[i];
  }
   for (int i = 0; i < s; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
}

void reverseArray(int arr[],int s)
{ 
    int start=0;
    int end=s-1;

    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

void printArray(int arr[],int s)
{
    for (int i = 0; i < s; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    
}



int main()
{
    int s;
  cout<<"enter the size of array";
  cin>>s;
 int arr[s];
 arrayInput(arr,s);
  reverseArray(arr,s);
   
 printArray(arr,s);
}