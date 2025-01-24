#include <iostream>
using namespace std;
template <typename T>
void insertionSort(T d[], int N) {
    for (int i = 1; i < N; i++) {
        T key = d[i];
        int j = i - 1;

        // เลื่อนค่าที่น้อยกว่า key ไปข้างหน้า
        while (j >= 0 && d[j] < key) {
            d[j + 1] = d[j];
            j--;
        }
        d[j + 1] = key;

        // แสดงผล Pass
        cout << "Pass " << i << ":";
        for (int k = 0; k < N; k++) {
            cout << (k == 0 ? "" : " ") << d[k]; // เว้นวรรคเฉพาะระหว่างตัวเลข
        }
        cout << endl;
    }
}