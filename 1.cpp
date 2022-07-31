
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
      int j=1;
      //int value=i;
      while (j<=i)
      {
        cout<<i+j-1;
       // value=value+1;
        j++;
      }
      cout<<endl;
      i++;
      
  }
}

/*{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    { int j=1;
       while (j<=i)
       {
           cout<<i+1-j;
           j++;
       }
       cout<<endl;
       i++;
    }
}

{
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            char ch='A'+i-1;
           cout<<ch;
           j++;
        }
        cout<<endl;
        i++;
    }
    
}
{
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            char ch='A'+j-1;
           cout<<ch;
           j++;
        }
        cout<<endl;
        i++;
    }
    
}
{
    int n;
    cin>>n;
    int i=1;
        char value='A';
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
             //char value='A';
           cout<<value;
           value+=1;;
           j++;
        }
        cout<<endl;
        i++;
    }
    
}
{
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
      int j=1;
      
      while (j<=n)
      {
        cout<<i+j-1;
       
        j++;
      }
      cout<<endl;
      i++;
      
  }
}
{
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
      int j=1;
      
      while (j<=n)
      {char ch='A'+i+j-2;
        cout<<ch;
       ch+=1;
        j++;
      }
      cout<<endl;
      i++;
      
  }
}

{
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {   int j=1;
        while (j<=i)
        {
            char ch='A'+i-1;
            cout<<ch;
            ch+=1;
            j++;

        }
        cout<<endl;
        i++;
        
    }}

    {
        int n;
        cin>>n;
        
        int i=1;
        char ch='A';
        while (i<=n)
        {   int j=1;
            while (j<=i)
            { //char ch='A'+j-1;
               cout<<ch; 
               ch+=1;
               j++;

            }
            cout<<endl;
            i++;
        }
        
        
    }

     {
        int n;
        cin>>n;
        
        int i=1;
        
        while (i<=n)
        {   int j=1;
            while (j<=i)
            { char ch='A'+i+j-2;
               cout<<ch; 
               ch+=1;
               j++;

            }
            cout<<endl;
            i++;
        }
        
        
    }
    
    {
        int n;
        cin>>n;
        int i=1;
        while (i<=n)
        {
            int j=1;
            char ch='A'+n-i;
            while (j<=i)
            {
             
             cout<<ch;
             ch+=1;
             j++;
            }
            cout<<endl;
            i++;
        }
        
    }

    {
        int n;
        cin>>n;

     int i =1;
     while (i<=n)
     {
         int j=1;
         while (j<=n-i+1)
         {
             cout<<"*";
             j++;
         }
         cout<<endl;
         i++;
         
     }
     
    }*/
/*{
    int n;
    cin>>n;
    
    int i=1;
    while (i<=n)
    {
      int space=1;
      while (space<=n-i)
      {
          cout<<" ";
          space++;
      }
      int j=1;
      while (j<=i)
      {
          
          cout<<"*";
          j++;
      }
      cout<<endl;
      i++;
      
    }
    
}

{
    int n;
    cin>>n;
     
     int i=1;
     while (i<=n)

     {
         int j=1;
         while ( j<=n-i+1)
         {
             cout<<"*";
             j++;
         }
         cout<<endl;
         i++;

     }
     
}

{
    int n;
    cin>>n;
     
     int i=1;
     while (i<=n)
     {
       int space=1;
     while (space<i)
     {
        cout<<" ";
        space++;
     }
     int j=1;
     while (j<=n-i+1)
     {
         cout<<"*";
         j++;

     }
      cout<<endl;
         i++;
     
     }
     
}*/