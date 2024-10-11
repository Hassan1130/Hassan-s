#include<bits/stdc++.h>
using namespace std;
int main() {
   int n,i,c=0;
   cin>>n;
   for(i=1;i<=n;i++)
   {
       int arr[3];
       cin>>arr[0]>>arr[1]>>arr[2];
       if((arr[0]==1&&arr[1]==1)||(arr[1]==1&&arr[2]==1)||(arr[2]==1&&arr[0]==1))
       {
           c=c+1;
       }
   }
   cout<<c<<endl;
   return 0;
}
