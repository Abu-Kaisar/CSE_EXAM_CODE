#include <iostream>
using namespace std;

int fac(int n) {
    if (n > 1) {
        return n * fac(n - 1);
    }
    else {
        return 1;
    }
}
int main() {

    int i, n;
    double sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (i = 0; i <= n; i++) {
        sum += (1.0 / fac(i));  //series of e
    }

    cout << sum;

    return 0;
}