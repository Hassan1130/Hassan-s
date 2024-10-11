#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,X=0;
    cin>>n;
    string s,s1,s2,s3,s4;
    s1="X++";
    s2="X--";
    s3="++X";
    s4="--X";

    for(i=1;i<=n;i++)
    {
        cin>>s;
        if(s==s1)
        {
            X++;
        }
        else if(s==s2)
        {
            X--;
        }
        else if(s==s3)
        {
            ++X;
        }
        else{
            --X;
        }

    }
    cout<<X<<endl;
    return 0;
}
