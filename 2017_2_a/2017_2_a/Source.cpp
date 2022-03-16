#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n == 1) {
        return false;
    }

    // This will loop from 2 to int(sqrt(x))
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    // If we did not find any factor in the above loop,
    // then n is a prime number
    return true;
}

int main() {
    int n;
    cout << "Type a Num: ";
    cin >> n;
    if (is_prime(n)) {
        cout << n <<"is Prime." << endl;
    }
    else {
        cout << n << " is not Prime." << endl;
    }
    return 0;
}