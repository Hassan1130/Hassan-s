#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a,b,c,d,e,f,g,x,y;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        b=a/100000;
        c=(a/10000)%10;
        d=((a/1000)%100)%10;
        e=(((a/100)%1000)%100)%10;
        f=((((a/10)%10000)%1000)%100)%10;
        g=(((a%10000)%1000)%100)%10;
        x=b+c+d;
        y=e+f+g;
        if(x==y)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }

}
