#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long int  n;
    cin>>n;

    //long long a = 1378;
     //long long int  ans = pow((long long)a,(long long )n);

    //long long mod = ans%10;

    //cout<<ans<<endl;

    if(n==0)
        cout<<1<<endl;
    else{
    long long int a = n%4;
    switch(a)
    {
    case 1:
        cout<<8<<endl;
        break;
    case 2:
        cout<<4<<endl;
        break;
    case 3:
        cout<<2<<endl;
        break;
    case 0:
        cout<<6<<endl;
        break;

    }

    }
    return 0;
}

