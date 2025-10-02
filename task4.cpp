#include <iostream>
using namespace std;

template <typename T, size_t N>
int search(const T(&a)[N], T k) {
    int l = 0;
    int r = N - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == k) return m;
        if (a[m] < k) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

template <typename T>
void show(int i, T k) {
    if (i != -1) cout << k << " found at " << i << endl;
    else cout << k<< " not found" << endl;
}





int main() {
    int a[5] = { 11, 12, 22, 25, 64 };
    int k1 = 22;



    int r1 = search(a, k1);
    show(r1, k1);


    float b[4] = { 0.57, 1.62, 2.71, 3.14 };
    float k2 = 2.71;
    int r2 = search(b, k2);

    show(r2, k2);

    char c[4] = { 'a', 'b', 'c', 'd' };
    char k3 = 'c';
    int r3 = search(c, k3);
    show(r3, k3);

    return 0;
}
