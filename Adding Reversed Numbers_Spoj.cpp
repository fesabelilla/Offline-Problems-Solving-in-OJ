#include<iostream>
using namespace std;

int reverse(int n) {

    int r, rev = 0;

    while (n > 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    return rev;
}

int main() {

    int n;
    cin>>n;
    int a,b;
    for(int i=0;i<n;i++){
            int sum=0;
    cin>>a>>b;
    a = reverse(a);
    b = reverse(b);
    sum=a+b;
    sum= reverse(sum);
    cout<< sum<<endl;
    }
    return 0;
}
