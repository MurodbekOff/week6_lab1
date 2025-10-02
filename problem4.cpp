#include <iostream>
using namespace std;

void fun(double r) {
    cout<<2*3.14*r<<endl<<3.14*r*r;
}

void fun(int a, int b) {
    cout<<2*(a+b)<<endl<<a*b;
}
int main() {
    int a, b;
    cin>>a>>b;
    fun(a, b);
    return 0;
}