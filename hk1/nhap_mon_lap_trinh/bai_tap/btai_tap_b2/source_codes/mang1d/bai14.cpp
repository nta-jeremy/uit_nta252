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

// Bài 14: Đếm phần tử dương và tính tổng
void demVaTongDuong(int a[], int n) {
    int dem = 0;
    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            dem++;
            tong += a[i];
        }
    }
    cout << "So luong phan tu duong: " << dem << endl;
    cout << "Tong cac phan tu duong: " << tong << endl;
}

int main() {
    int a[MAX];
    int n;
    nhapMang(a, n);
    demVaTongDuong(a, n);
    return 0;
}
