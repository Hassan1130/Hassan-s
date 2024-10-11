#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            c++;
        }
    }
    if(c>=1)
    {
        cout<<"HARD"<<endl;
    }
    else
        cout<<"EASY"<<endl;
}
