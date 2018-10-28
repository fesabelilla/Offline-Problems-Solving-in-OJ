
//Author Md. Zahid Fesabelilla

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a%2==0)
            a=a-1;

        arr[i]=a;
    }
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";


    return 0;
}
