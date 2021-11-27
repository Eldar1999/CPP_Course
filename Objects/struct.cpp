#include <iostream>
#include <ctime>

using namespace std;

struct rect {
private:
    int *a;
    int *b;
    const int temp = 5;

public:
    rect(int length, int height) {
        this->a = new int;
        this->b = new int;
        this->setLength(length);
        this->setHeight(height);
    }

    ~rect() {
        delete this->a;
        delete this->b;
    }

    int setLength(int length) {
        if (length <= 0) {
            cout << "Error1" << endl;
            exit(1);
        }
        *(this->a) = length;
        return 0;
    }

    int setHeight(int height) {
        if (height <= 0) {
            cout << "Error2" << endl;
            exit(2);
        }
        *(this->b) = height;
        return 0;
    }

    void print() {
        cout << *(this->a) << " " << *(this->b) << endl;
    }

    void print2() {
        const int *z = new int(this->temp % 2);
        switch (this->temp) {
            case (z):
                break;
        }
    }
};

int main() {
    rect *z;
    for (int i = 0; i < 1000000; i++) {
        z = new rect(5, 4);
        //z->print();
        z->setLength(2);
        //z->print();
    }
    int n;
    cin >> n;
    delete z;
}