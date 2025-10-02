#include <iostream>
using namespace std;


template <typename T, size_t N>
void selectionSort(T(&arr)[N]) {
    for (size_t i = 0; i < N - 1; ++i) {
        size_t min = i;
        for (size_t j = i + 1; j < N; ++j) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        T temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

template <typename T, size_t N>
void print(const T(&arr)[N]) {
    for (size_t i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int intArray[5] = { 6, 25, 12, 22, 11 };
    cout << "Original integer array: ";
    print(intArray);
    selectionSort(intArray);
    cout << "Sorted integer array: ";
    print(intArray);


    char charArray[4] = { 'd', 'a', 'c', 'b' };
    cout << endl;
    cout << "Original character array: ";
    print(charArray);
    selectionSort(charArray);
    cout << "Sorted character array: ";
    print(charArray);

    return 0;
}
