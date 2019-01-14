#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double d, a,b,c;

    cin>>t;
    while(t--)
    {
        a = 0.0, b = 0.0 ;
        cin>>d;

        if(d==0)
            printf("Y %0.9f %0.9f\n",a,b);

        else if(d<4)
            cout<<"N"<<endl;
        else
        {
            c = sqrt(d * (d - 4));
            a = (d + c) / 2.0;
            b = (d - c) / 2.0;

            printf("Y %0.9f %0.9f\n",a,b);
        }
    }
    return 0;
}
