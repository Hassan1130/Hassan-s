
#include<bits/stdc++.h>
using namespace std;
int main() {
   long long int n=5,sm=0,sn=0;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   sort(a,a+n);
   for(int i=0;i<n-1;i++)
   {
       sn=sn+a[i];

   }
   for(int i=1;i<n;i++)
   {
       sm=sm+a[i];

   }
   cout<<sn<<" "<<sm<<endl;
}


