#include <iostream>

using namespace std;

int foo(int *arr, int len, int func(int)) {
    for (int i = 0; i < len; i++) {
        cout << func(arr[i]) << " ";
    }
    cout << endl;
    return 0;
}

int bar(int a) {
    return (a & 1) == 0 ? 1 : 0;
}

int main() {
    int arr[5] = {'\0', 1, 5 / 2, 7 % 4, 1 << 2};
    foo(arr, 5, bar);
    return 0;
}