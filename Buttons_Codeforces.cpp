#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    int x = n-1;
    int total = n;
    for(int i=1 ; i<n ; i++){
        total += x + (x-1)*i;
        x--;
    }
    cout<<total;

    return 0;
}
