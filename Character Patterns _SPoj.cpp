#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
   for(int i=0;i<n;i++){
	int a,b;
	if(i>0)cout<<endl;
	cin>>a>>b;
	for(int i=0; i<a; i++) {
		for(int j=0; j<b; j++) {
			if((i+j)%2 == 0)
				cout<<"*";
			else
				cout<<".";
		}
		cout<<endl;
	}
	//cout<<endl;
    }
	return 0;
}
