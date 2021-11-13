#include <iostream>

using namespace std;

int main() {
    float a, b, c = a = b = 0.3;
    float d = -0.9;
    int z = 'a';
    cout << a << " " << b << " " << c << " " << z << endl;
    printf("%f\n", a + b + c);
    cout << d - a + b + c << endl;
    if (abs(d - (a + b + c)) < 0.001) {
        cout << "True" << endl;
    } else {
        cout << false << endl;
    }
    return z;
}