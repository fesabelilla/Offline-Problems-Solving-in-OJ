#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,n,days=1;
    cin>>a>>b>>n;
    for(int i=a; i<=n; i=i+a)
    {
        if(i>0)
        {
            if(i!=n)
            {
                i=i-b;
                days++;

            }

        }

    }

    cout<<days;
    return 0;
}
