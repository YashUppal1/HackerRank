#include<iostream>
using namespace std;
int factorial(int n1) {
    int fact = 1;
    for(int i = 1; i<=n1; i++) {
        fact *= i;
    }
    return fact;
    }

int ncr(int n, int r){
    int final = factorial(n)/(factorial(n-r)*factorial(r));
    return final;    
}

int main() {
    int n, r;
    cin>>n>>r;
    cout<<ncr(n,r);
    return 0;
    }
