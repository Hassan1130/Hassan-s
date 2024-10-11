#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,s;
    cin >> t;

    for(i=1;i<=t;i++)
    {
       if(i%2==0)
       {
           s=s-i;
       }
       else
       {
           s=s+i;
       }
    }
    cout<<s<<endl;


}
