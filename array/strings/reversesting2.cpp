// by k
#include<bits/stdc++.h>
using namespace std;
string reverse3(string s,int k)
{
   int end=s.size()-1;
      
      for(int i=0;i<end;i+=2*k){
        reverse(s.begin()+i,s.begin()+min(i+k,(int)s.size()));
        //reverse(s.begin,s.end);
      //  reverse(s.begin()+i,s+)
      }
      return s;  
    
 
}

int main()
{string s;
cout<<"s= "<<endl;
cin>>s;
int k;
cout<<"k= "<<endl;
cin>>k;

 cout<< reverse3(s,k);
//cout<<ans;
   
}