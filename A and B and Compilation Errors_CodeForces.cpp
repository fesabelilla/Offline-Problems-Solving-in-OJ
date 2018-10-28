#include<bits/stdc++.h>

using namespace std;

int main()
{

int n;
cin>>n;
int sum[3];
int arr[n];
int arr1[n-1];
int arr2[n-2];
for(int i=0;i<n;i++){
        cin>>arr[i];

}
for(int i=0;i<n-1;i++){
        cin>>arr1[i];

}for(int i=0;i<n-2;i++){
        cin>>arr2[i];

}
int sum1=0;
for(int i=0;i<n;i++){
        sum1 +=arr[i];

}
sum[0]=sum1;
int sum2=0;
for(int i=0;i<n-1;i++){
        sum2 +=arr1[i];

}
sum[1]=sum2;
cout<<sum[0]-sum[1]<<endl;
int sum3=0;
for(int i=0;i<n-2;i++){
        sum3 +=arr2[i];

}
sum[2]=sum3;
cout<<sum[1]-sum[2]<<endl;





    return 0;
}

