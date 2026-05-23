#include <iostream>
using namespace std;

#define MAX 100

void nhapMang(int a[], int &n) {
    cout << "Nhap so luong phan tu cua mang (n): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

// Bài 9: Tính tổng các phần tử của mảng
int tongMang(int a[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i];
    }
    return tong;
}

int main() {
    int a[MAX];
    int n;
    nhapMang(a, n);
    cout << "Tong cac phan tu cua mang la: " << tongMang(a, n) << endl;
    return 0;
}
