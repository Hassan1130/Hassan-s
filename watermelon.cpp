#include<bits/stdc++.h>
using namespace std;
int main() {
    int c1,t,r,g,b;
    cin >>t;

    while(t--)
        {
        cin>>r>>g>>b;
        c1 = max(max(r, g), b);
        if(c1==1)
        {
                cout<<c1+1<<endl;
        }
        else{
            cout<<c1<<endl;
        }

}
}
