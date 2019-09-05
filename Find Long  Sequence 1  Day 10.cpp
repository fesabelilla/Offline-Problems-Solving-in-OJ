#include <bits/stdc++.h>
using namespace std;

void decToBinary(int n)
{

    vector<int> binary;
    int i = 0;
    while (n > 0)
    {

        binary.push_back(n%2) ;
        n = n / 2;
        i++;
    }
    int a = 0, maxi = 0;
    for(int j = 0 ; j <binary.size(); j++)
    {
       // cout<<binary[6]<<endl;
        if( binary[j] == 1){
            a++;
            //cout<<a<<" j = "<<j<<" "<<binary[j]<<endl;
        }
        else if(binary[j] == 0)
        {
            if(a>maxi)
            {
                maxi = a;
                 //cout<<a<<" j = "<<j<<" "<<binary[j]<<endl;
                a = 0;
            }
            else{
                    a = 0;
                maxi = maxi;
            }
        }
    }

    if(a>maxi)
    {
        //cout<<"Max : "<<a<<" "<<endl;
        maxi = a;
        a = 0;
    }

    //for(int i = 0 ; i < binary.size() ; i++){
      //  cout<<binary[i];
   // }cout<<endl;

    cout<<maxi<<endl;
}

int main()
{
    int n;
    cin>>n;

    decToBinary(n);
    return 0;
}

