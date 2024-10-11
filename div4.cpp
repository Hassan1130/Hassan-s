
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b,c,d,n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      cin>>a>>b>>c>>d;
      if ((a<=b and c>b and c<=d) or (a>b and c<=a and d>b))
      {
          cout<<"YES"<<endl;
      }

      else
      {
          cout<<"NO"<<endl;
      }

  }

  return 0; }
