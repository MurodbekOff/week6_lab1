#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int product(int a, int b) {
    return a * b;
}

double division(double a, double b) {
    return a / b;
}

int main() {
    int a, b;
    cin>>a>>b;
    cout<<sum(a, b)<<endl;
    cout<<subtract(a, b)<<endl;
    cout<<product(a, b)<<endl;
    cout<<division(a, b)<<endl;
    return 0;
}