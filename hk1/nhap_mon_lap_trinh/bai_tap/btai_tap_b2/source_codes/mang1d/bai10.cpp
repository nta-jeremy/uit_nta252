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

// Bài 10: Tìm kiếm phần tử x
int timKiemX(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i; // Trả về vị trí đầu tiên tìm thấy
        }
    }
    return -1; // Không tìm thấy
}

int main() {
    int a[MAX];
    int n, x;
    nhapMang(a, n);
    cout << "Nhap gia tri X can tim kiem: ";
    cin >> x;
    
    int index = timKiemX(a, n, x);
    if (index != -1) {
        cout << "Tim thay " << x << " tai vi tri: " << index << endl;
    } else {
        cout << "Khong tim thay gia tri " << x << " trong mang." << endl;
    }
    return 0;
}
