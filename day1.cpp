
#include<bits/stdc++.h>
using namespace std;
int main() {
   int n;
   float p=0,N=0,z=0;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   sort(a,a+n);
   for(int i=0;i<n;i++)
   {
       if(a[i]>0)
       {
           p++;
       }
       else if(a[i]<0)
       {
           N++;
       }
       else if(a[i]==0)
       {
           z++;
       }
   }
   cout<<p/n<<endl<<N/n<<endl<<z/n<<endl;
}

