#include <iostream>
using namespace std;

int min(int a, int b, int c) {
    return a<b?(a<c?a:c):(b<c?b:c);
}
int main() {
    int a, b, c;
    cin >> a >> b>>c;
    cout<<min(a, b, c);
    return 0;
}