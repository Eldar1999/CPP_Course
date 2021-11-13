#include <iostream>
#include <cmath>

int z = 5;

using namespace std;

int reverse1(int a, int i = 1) {
    if (a < 10) {
        return a * pow(10, i - 1);
    } else {
        int tmp = a, j = 0;
        while (tmp > 10) {
            tmp /= 10;
            j++;
        }
        return reverse1(a - tmp * pow(10, j), i + 1) + tmp * pow(10, i - 1);
    }
}

void reverse(int a) {
    if (a < 10) {
        cout << a << endl;
    } else {
        cout << a % 10;
        return reverse(a / 10);
    }
}

void print_hello(int i) {
    cout << "Hello world! " << i << endl;
    if (i == 200000) {
        cout << "End!" << endl;
        return;
    }
    return print_hello(++i);
}

int sum(int x, int y) {
    return x + y;
}

int main() {
    int a;
    cin >> a;
    cout << reverse1(a) << endl;
//    print_hello(1);
//    for (int i = 0; cin >> a; i++) {
//        cout << sum(a, a) << endl;
//        cout << i << ") " << reverse1(a) << endl;
//        reverse(a);
//
//    }
    return 0;
}