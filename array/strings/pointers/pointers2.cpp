#include<bits/stdc++.h>
using namespace std;
void update(int **ptre)
{
   // p=p+1;
     // *p2=*p2+1;
    //  **p2=**p2+1;
++(**ptre);


}

int main()
{
//     int arr[10]={1,2,3,4,5};
//     cout<<arr<<endl;
//      cout<<arr+1<<endl;
//  cout<<*arr+3<<endl;
// int i=5;
// int *p=&i;
// int** p2=&p;

// cout<<p<<endl;
// cout<<&p<<endl;

// cout<<**p2<<endl;
// cout<<*p2<<endl;
// cout<<*p<<endl;

// cout<<&i<<endl;
// cout<<p<<endl;
// cout<<* p2<<endl;
// cout<<endl<<endl;
// cout<<"before"<<endl;
// cout<<i<<endl;
// cout<<p<<endl;
// cout<< p2<<endl;

// update(p2);
// cout<<"after"<<endl;
// cout<<i<<endl;
// cout<<p<<endl;
// cout<< p2<<endl;
// cout<<endl<<endl;
// int num=110;
// int *p2=&num;
// update(&p2);
// cout<<num<<endl;
int num=110;
int *p=&num;
update(&p);
cout<<num<<endl;
}