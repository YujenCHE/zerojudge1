#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main() {
    int a, b;
    cin >> a >> b;

    int count = 0;
    for (int num = a; num <= b; num++) {
        if (isPrime(num))
            count++;
    }

    cout << count;

    return 0;
}
