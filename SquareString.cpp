
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,b,c;
    cin >> t;

    for(i=1;i<=t;i++)
    {
        string a;
        cin >>a;
        c=a.length();
        b=a.length()/2;
        if (a.substr(0,b)==a.substr(b,c))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }


}
