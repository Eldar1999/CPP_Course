#include <iostream>

#define foo(x) (x + x + x)  // Директива компиляции.
// Заменяет выражение 'foo(x)' на 'x + x + x'


int main() {
    for (int i = 0; i < 5; i++) {
        std::cout << 2 * foo(i * ) << std::endl;
    }
    return 0;
}
