#include <iostream>

using namespace std;

int main() {
    float a, b, c = a = b = 0.3;
    float d = 0.9;
    int z = 'a';
    cout << a << " " << b << " " << c << endl;
    if (a + b + c == d) {
        cout << "True" << endl;
    } else {
        cout << false << endl;
    }
    return z;
}