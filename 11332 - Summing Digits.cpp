#include<bits/stdc++.h>
using namespace std;

/*int findingSum(int a)
{
int b,c,sum=0;
if(a>=10){
    while( a>0)
    {
        b = a/10;
        c = a%10;
        sum +=c;
        a = b;
    }
    return sum;
}
else
    return a;
}

int main()
{
    int a,b,c,sum=0;

    while(cin>>a&&a!=0)
    {
        sum = findingSum(a);
        if (sum<10)
            cout<<sum<<endl;
       else{
           sum = findingSum(sum);
           if(sum>10)
            sum = findingSum(sum);
          cout<<sum<<endl;
        }
    }

    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    while(cin >> n && n != 0){

        int tmp = n;
        while((tmp/10) > 0){

            int sum = 0;
            while(n>0){
                sum+=n%10;
                n/=10;
            }
            tmp = sum;
            n = tmp;
        }
        cout << tmp << endl;
    }
    return 0;
}
