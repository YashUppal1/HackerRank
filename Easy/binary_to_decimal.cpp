#include<iostream>
using namespace std;

int binaryToDecimal(int n){
    int final=0;
    int x = 1;
    while (n>0) {
    int y = n%10;
    final += x*y;
    x *=2;
    n = n/10;
    }
    return final;
}

int main() {
    int n;
    cin>>n;
    cout<<binaryToDecimal(n)<<endl;
    return 0;
    }