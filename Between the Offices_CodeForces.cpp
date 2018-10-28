#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    char arr[n];
    for(int i = 0 ; i<n ; i++)
    cin >> arr[i];

    int SF = 0 , SO = 0;

    for(int i = 0 ; i<n-1 ; i++){

        if(arr[i]=='S'&&arr[i+1]=='F')
            SF++;
        else if(arr[i]=='F'&&arr[i+1]=='S')
           SO++;
    }

    if(SF>SO)
        cout << "YES" << endl;
    else
     cout << "NO" << endl;

    return 0;
}
