#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,x,i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
    if(a>=1900){
        x=1;
    }
    else if(a>=1600&&a<=1899){
        x=2;
    }
    else if(a>=1400&&a<=1599){
        x=3;
    }
    else if(a<=1399){
        x=4;
    }
    cout<<"Division "<<x<<endl;
}
}
