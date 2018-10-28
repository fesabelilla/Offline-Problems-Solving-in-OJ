#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[6][6];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>arr[i][j];
			if(arr[i][j]==1){
				int x=2-i;
				int y=2-j;
				if(x<0)x=x*(-1);
				if(y<0)y=y*(-1);
				cout<<x+y<<endl;
				break;
			}
		}
	}
}
