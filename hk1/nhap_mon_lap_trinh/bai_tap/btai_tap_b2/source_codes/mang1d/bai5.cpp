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

// Bài 5: Tìm vị trí phần tử dương nhỏ nhất
void viTriDuongNhoNhat(int a[], int n) {
    int min_duong = -1; // Lưu giá trị dương nhỏ nhất
    int vitri = -1;     // Lưu vị trí
    
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) { // Nếu phần tử là số dương
            if (min_duong == -1 || a[i] < min_duong) {
                min_duong = a[i];
                vitri = i;
            }
        }
    }
    
    if (vitri != -1) {
        cout << "Vi tri phan tu duong nho nhat la: " << vitri << " (Gia tri: " << a[vitri] << ")" << endl;
    } else {
        cout << "Khong co phan tu duong nao trong mang." << endl;
    }
}

int main() {
    int a[MAX];
    int n;
    nhapMang(a, n);
    viTriDuongNhoNhat(a, n);
    return 0;
}
