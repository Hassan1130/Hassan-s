#include<iostream>
using namespace std;
int main()
{
   int n,i,p,q,c=0;
   cin>>n;
   while(n--)
   {
       cin>>p>>q;
       if(q-p>=2)
       {
           c++;
       }

   }
cout<<c<<endl;

}

