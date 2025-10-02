#include <iostream>
using namespace std;

int cubeOfDigits(int num) {
    int sum = 0, temp;
    while (num > 0) {
        temp = num % 10;
        sum += pow(temp, 3);
        num/=10;
    }
    return sum;
}

void isArmstrong(int num) {
    if (cubeOfDigits(num) == num) cout<<"It is armstrong"<<endl;
    else cout<<"It is not armstrong"<<endl;
}

int main() {
    int num;
    cin>>num;
    isArmstrong(num);
    return 0;
}