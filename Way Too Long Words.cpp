#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    while(n--)
        {
          cin>>s;
        int l=s.length();
        if(l>10)
            {
             cout<<s[0]<<l-2<<s[l-1]<<endl;
            }
        else
            {
               cout<<s<<endl;
            }
        }

}



