#include<bits/stdc++.h>

using namespace std ;

int main(){
long n;

while(cin>>n && n){

    n = n+1;
    while(n%2 == 0){
        n = n/2 ;
    }

    if(n!=1){
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Bob"<<endl;
    }

}

return 0;
}

