#include<bits/stdc++.h>
using namespace std;
int main() {
   int a,i,b=0,c=0,d=0,e=0;
   cin>>a;
   a++;
   i=1;
   while(i<2)
   {
       b=a/1000;
       c=(a/100)%10;
       d=((a%100)%100)/10;
       e=((a%1000)%100)%10;
       if((b==c)||(b==d)||(b==e)||(c==d)||(c==e)||(d==e))
            {
                a++;
            }
        else
        {
            break;
        }

   }
 cout<<a<<endl;

   return 0;
}

