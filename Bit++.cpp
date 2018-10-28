#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x=0;
    string s;

	cin>>n;

	while(n--)
        {
		cin>>s;
		 if(s.compare("++X")==0) ++x;
        else if(s.compare("X++")==0) x++;
        else if(s.compare("--X")==0) --x;
        else if(s.compare("X--")==0) x--;
	}
	cout<<x<<endl;

	return 0;
}
