#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
		
	cout<<"enter string \n";
	cin>>s;
	int n= s.length();
//	cout<<strlen(str);
    int temp=0;
for (int i = 0; i < n; i++)

{
    if(s[i]>='a' && s[i]<='z')
    temp++;
}

    int x=1,num=0, i=n-1;
    for(int i=n-1;i>=0;i--){

        if(s[i]>='0' && s[i]<='9')
        {
            num=(s[i]-'0')*x+num;
            x*=10;


    // if(num>=n)
    //  cout<< "false";
        }
        else
        break;
    }
  //  num=i+1;
  if(num==temp)
  cout<<"yes";
  else
  cout<<"no";
    return 0;

	
	
}