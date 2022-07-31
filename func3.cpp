#include<bits/stdc++.h>
using namespace std;

bool EvenOdd ( int a){
    
    if (a&1)
    {//odd
        return 0;
    }
    else
    {//even
      return 1;
    }
        
}
int main()
{
    int a;
    cin >> a;

    if(EvenOdd(a)) {
        cout <<" Number is Even" <<endl;
    }
    else {
        cout<< " Number is Odd" <<endl;
    }
    return 0;
}