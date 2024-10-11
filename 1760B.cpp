#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100];
    int n,m,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>m;
        string arr;
        cin >>arr;
        sort(arr.begin(), arr.end());
        int b=arr[m-1];
        cout<<b-96<<endl;
    }

}
