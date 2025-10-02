#include <iostream>
using namespace std;

void fun(double r) {
    cout<<2*3.14*r<<endl<<3.14*r*r;
}
int main() {
    int r;
    cin>>r;
    fun(r);
    return 0;
}