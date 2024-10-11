#include<bits/stdc++.h>
using namespace std;
int main() {
    int x,y,z,t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x>>y>>z;
        {
        if(x==1||y==1||z==1)
        {
            cout<<x+y+z<<endl;
        }

        else if ((x>1)||(y>1)||(z>1))
        {
            cout<<((x+y+z)/3)+1<<endl;
        }

        else
        {
        cout<<0<<endl;

        }

        }
    }
}
