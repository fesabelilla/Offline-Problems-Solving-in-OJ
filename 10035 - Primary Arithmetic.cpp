#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int a,b,remA,remB,flag=0,sum,counter;

    while((scanf("%llu%llu",&a,&b))!=EOF)
    {
        if(a==0 && b==0)
        {
            break;
        }
        counter = 0;
        while(a!=0 || b!=0)
        {
            remA=a%10;
            remB=b%10;
            if(flag==1)
            {
                remA++;
            }
            sum = remA+remB;
            flag=0;
            if(sum>=10)
            {
                counter++;
                flag++;
            }
            a=a/10;
            b=b/10;
        }


        flag = 0;

        if(counter==0)
        {
            cout<<"No carry operation."<<endl;
        }
        else if(counter==1)
        {
            cout<<counter<<" carry operation."<<endl;
        }
        else
        cout<<counter<<" carry operations."<<endl;

    }
    return 0;
}
