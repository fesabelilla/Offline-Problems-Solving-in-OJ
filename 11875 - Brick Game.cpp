#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t ,cnt=1;

     cin>>t;

     while(t--){

        int n;
        cin>>n;
        vector<int>arr;

        for(int i = 0 ; i<n ; i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }

        sort(arr.begin(),arr.end());

        cout<<"Case "<<cnt<<": "<<arr[n/2]<<endl;
        cnt++;


     }



    return 0;
}

