#include<iostream>
#include<cmath>
using namespace std;
void Fibonacci(int n1) {
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
        for(int i=1;i<=n1;i++){
            cout<<t1<<endl;
            nextTerm = t1+t2;
            t1 = t2;
            t2 = nextTerm;
        }
        return;
    }

int main() {
    int n1;
    cin>>n1;
    Fibonacci(n1);
    return 0;
    }
