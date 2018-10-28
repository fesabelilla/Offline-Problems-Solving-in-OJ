#include <bits/stdc++.h>
#include <math.h>

using namespace std;
int main()
{
    int a,b,c,i,d;
    while(scanf("%d %d", &a, &b)!=EOF)
    {
        if(a==0&&b==0)
        break;
        d=0;
        for(i=a;i<=b;i++)
        {
           c=sqrt(i);
           if(c*c==i)
           d++;
        }
        cout<<d<<endl;
    }
return 0;
}
