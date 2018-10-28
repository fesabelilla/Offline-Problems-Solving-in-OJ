#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string s = "hello";
    string a;
    cin>>a;

    int j = 0;
    for(i=0;i<a.length()&&j<s.length();i++){
            if(a.at(i)==s.at(j)){
               j++;
            }
    }
    if(j==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
