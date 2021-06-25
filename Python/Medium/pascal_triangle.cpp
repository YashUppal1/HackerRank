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
    int n;
    cin>>n;
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=i; j++){
            cout<<ncr(i,j);
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
    }
