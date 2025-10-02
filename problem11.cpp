#include <iostream>
using namespace std;

int displayEven(int n) {
    int revorder = 0;
    while (n>0) {
        if ((n%10)%2==0) {
            revorder = revorder + (n%10);
            if ((n/10)!=0) revorder*=10;
        }
        n/=10;
    }
    return revorder/10;
}

int main() {
int a;
    cin>>a;
    int res=displayEven(a);
    cout<<res<<endl;
    while (res>0) {
        cout<<res%10<<endl;
        res/=10;
    }
    return 0;
}