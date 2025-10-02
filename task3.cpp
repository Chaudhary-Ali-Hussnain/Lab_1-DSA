#include <iostream>
using namespace std;

template <typename T, size_t N>
int search(const T(&a)[N], T k) {
    for (size_t i = 0; i < N; ++i) {
        if (a[i] == k) {
            return (int)i;
        }
    }
    return -1;
}

template <typename T>
void show(int i, T k) {
    if (i != -1) {
        cout << k << " found at " << i << endl;
    }
    else {
        cout << k << " not found" << endl;
    }
}

int main() {
    int a[5] = { 64, 25, 12, 22, 11 };
    int k1 = 12;
    int r1 = search(a, k1);
    show(r1, k1);

    float b[4] = { 3.14, 2.71, 1.62, 0.57};
    float k2 = 1.62;
    int r2 = search(b, k2);
    show(r2, k2);

    char c[4] = { 'a', 'b', 'c', 'd' };
    char k3 = 'c';
    int r3 = search(c, k3);
    show(r3, k3);

    return 0;
}
