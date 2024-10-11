#include<bits/stdc++.h>
using namespace std;
int main()
{
    float c;
    int t,i,d;
    long int a,b;
    cin>>t;
    for(i=1; i<=t; i++)
    {


        cin>>a>>b;
        c=a/b;
        if(a%b==0)
        {
            cout<<0<<endl;
            continue;
        }
        d=(c+1)*b;
        cout<<d-a<<endl;

    }

}
