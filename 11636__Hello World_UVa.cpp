#include<bits/stdc++.h>
using namespace std;

int main(){

    int x, times, cur, cs=1;
    while(scanf("%d", &x) && x >0){
        times = 0;
        cur = 1;
        while(cur < x ){
            cur *= 2;
            times += 1;
        }

        printf("Case %d: %d\n",cs++, times);
    }

	return 0;
}
