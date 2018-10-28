#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long havey, haveb, y, g, b, needy, needb, sum=0;
    cin>>havey>>haveb>>y>>g>>b;

    needb = g + (3*b);
    needy = (2*y) + g;

    if(needb>haveb) sum += needb-haveb;
    if(needy>havey) sum += needy-havey;

    cout<<sum<<endl;
    return 0;
}
