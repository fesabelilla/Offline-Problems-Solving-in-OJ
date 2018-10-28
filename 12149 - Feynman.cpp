#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    while(scanf("%d",&a)!=EOF && a!=0)
    {
        long long s,sum=0;
        for(int i=1;i<=a;i++){
            s = i*i;
            sum +=s;
        }

   cout<<sum<<endl;

    }


    return 0;
}
