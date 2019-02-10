#include<bits/stdc++.h>

using namespace std ;

int main()
{
    long n;

    while(cin>>n)
    {

        int arr[n+1];
        for( int i = 0 ; i<n ; i++)
            cin>>arr[i];

        int counter = 0;

        for(int i = 1; i<n; ++i)
        {
            for(int j = 0; j<i; ++j)
            {
                if(arr[j]>arr[i])
                    counter++;
            }
        }
        cout<<"Minimum exchange operations : "<<counter<<endl;

    }

    return 0;
}


