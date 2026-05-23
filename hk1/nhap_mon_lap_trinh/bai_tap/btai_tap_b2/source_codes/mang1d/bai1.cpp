#include <iostream>
using namespace std;

#define MAX 100

// Bài 1: Nhập mảng từ bàn phím
void nhapMang(int a[], int &n) {
    cout << "Nhap so luong phan tu cua mang (n): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

// Bài 3: Xuất mảng ra màn hình
void xuatMang(int a[], int n) {
    cout << "Cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[MAX];
    int n;
    nhapMang(a, n);
    xuatMang(a, n);
    return 0;
}
