#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    int i=1;
    while((a!="*"))
    {

           cin>>a;
            if (a=="Hajj"){
            cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
            i=i+1;
            }
                else if(a=="Umrah"){
                cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
                i=i+1;
                }



    }


    return 0;
}
