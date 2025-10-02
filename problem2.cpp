#include <iostream>
using namespace std;

int acc(int v1, int v2, int t) {
    return (v2-v1)/t;
}
int main() {
    int v1, v2, t;
    cin>>v1>>v2>>t;
    cout<<acc(v1, v2, t);
    return 0;
}