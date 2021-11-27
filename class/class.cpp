#include <iostream>

using namespace std;

class dyn_arr {
    int n;
    int *arr;
public:
    dyn_arr(int length) {
        this->n = length;
        this->arr = new int[this->n];
        for (int i = 0; i < n; i++) arr[i] = 0;
    }

    ~dyn_arr() {
        delete[] arr;
    }

    void print() {
        for (int i = 0; i < n; i++) {
            cout << this->arr[i];
        }
        cout << endl;
    }
};

class Matrix {
    int n;
    int **m;
public:
    Matrix(int a) {
        this->n = a;
        this->m = new int *[this->n];
        for (int i = 0; i < n; i++) {
            this->m[i] = new int[this->n];
            for (int j = 0; j < n; j++) {
                this->m[i][j] = 0;
            }
        }
    }

    int &operator()(const int a, const int b) {
        return this->m[a][b];
    }

    Matrix operator+(const Matrix &z) {
        Matrix b(z.n); // Обратите внимание, что тут переменная создаётся на стеке.!
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                b.m[i][j] = this->m[i][j] + z.m[i][j];
            }
        }
        return b;

    }

    void print() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << this->m[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
//    dyn_arr *a;
//    for (int i = 0; i < 10000; i++) {
//        a = new dyn_arr(5000);
//        //a->print();
//        delete (a);
//    }
//    cout << "Hello" << endl;
    Matrix a(3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            a(i, j) = i * 3 + j;
        }
    }
    a.print();
    Matrix b(3);
    cout << endl;
    b = a + a; // Тут, по прежнему, происходит копирование результата, но не с кучи, а со стека.
    b.print();
    // delete &b;   Именно потому что мы выделили переменную на стеке и скопировали,
    //нам не нужно дополнительно высвобождать память
}
