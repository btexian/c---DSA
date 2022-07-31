#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[],int n,int key)
{int start=0;
int end=n-1;
int ans=-1;
int mid=start+(end-start)/2;
while (start<=end)
{
    /* code */


  if (arr[mid]==key)
  {
    ans= mid;
    end=mid-1;

  }
  else if(key>arr[mid])
  {
      start=mid+1;
  }
  else if(key<arr[mid])
  {
      end=mid-1;
  }
  mid=start+(end-start)/2;
}

return ans;
}

int lastocc(int arr[],int n,int key)
{int start=0;
int end=n-1;
int ans=-1;
int mid=start+(end-start)/2;
while (start<=end)
{
    /* code */


  if (arr[mid]==key)
  {
    ans= mid;
    start=mid+1;

  }
  else if(key>arr[mid])
  {
      start=mid+1;
  }
  else if(key<arr[mid])
  {
      end=mid-1;
  }
 mid=start+(end-start)/2;
}

return ans;
}



int main()
{
    int arr[6]={1,2,3,3,3,4};

    cout<<"1st occu of 3 is at index: "<<firstocc(arr,6,3)<<endl;
     cout<<"last occu of 3 is at index: "<<lastocc(arr,6,3);

}