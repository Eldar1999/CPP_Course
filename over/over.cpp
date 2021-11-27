#include <iostream>

using namespace std;

int squareRect(int a, int b) {
    return a * b;
}

double squareRect(float a) {
    return a;
}

double squareRect(double a, double b) {
    return a * b;
}

int main() {
    int a;
    &a = 5;

    cout << squareRect(4) << endl;
}