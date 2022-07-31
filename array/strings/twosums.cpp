#include<bits/stdc++.h>
using namespace std;

vector<int> twoSums(vector<int> &arr,int k)
{
  int st=0;
  int end=arr.size()-1;
 // int ans;

  while (st<end)
  {
      int sum=arr[st]+arr[end];
      if(sum==k)
      return {st,end};
      
      else if(sum>k)
      end--;

      else
      st++;

  }


return {};
  
   
}

int main()
{
    // int size;
    // cout<<"size"<<endl;
    // cin>>size;

    // int arr;
    // for(int i;i<arr.size();i++)
    // {
    //         cin>>arr[i];
    // }
    //  for (int i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr[i]<<" "<<endl;
    // }

//     vector<int> arr={2,7,11,15};
//    int k=9;
//     cout<<"enter k"<<endl;
//  cin>>k;
//      cout<<twoSums(arr,9);
//     cout<<x<<"";
}

