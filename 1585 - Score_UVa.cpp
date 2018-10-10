/*#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    int a[101],b,c,d,i,j,k,l,n,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",s);
        l=strlen(s);
        for(j=0;j<l;j++)
        {
            if(s[j]=='O')
            a[j]=1;
            else if(s[j]='X')
            a[j]=0;
        }
        c=0,sum=0;
    for(k=0;k<l;k++)
    {
            if(a[k]==1)
            {
                c++;
            }
            if(a[k]==0)
            {
                c=0;
            }
            sum=sum+c;
    }
        printf("%d\n",sum);
  }
  return 0;
}*/



#include <bits/stdc++.h>
using namespace std;


int main()
{
   int arr[101];
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
    string s;
    cin>>s;
    int n = s.length();
    char char_array[n];
    int arr[n];
     strcpy(char_array, s.c_str());
    for(int i = 0; i<n ; i++){
             if(char_array[i]=='O')
                arr[i] = 1;
             else if(char_array[i]=='X')
                arr[i] = 0;

    }

    int counter = 0 ,sum = 0 ;
     for(int k=0;k<n;k++)
    {
            if(arr[k]==1)
            {
                counter++;
            }
            if(arr[k]==0)
            {
                counter = 0;
            }
            sum = sum+counter;
    }
        cout<<sum<<endl;

   }
    return 0;
}
