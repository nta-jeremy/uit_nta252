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

void xuatMang(int a[], int n) {
    cout << "Cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int xoaPhanTuTaiK(int a[], int &n, int k) {
    if (k < 0 || k >= n) return 0;
    for (int i = k; i < n - 1; i++) {
        a[i] = a[i+1];
    }
    n--;
    return 1;
}

// Bài 8: Xoá tất cả phần tử có giá trị X
void xoaPhanTuGiaTriX(int a[], int &n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            xoaPhanTuTaiK(a, n, i);
            i--; // Xóa xong phải lùi i lại để kiểm tra lại vị trí vừa dồn lên
        }
    }
}

int main() {
    int a[MAX];
    int n, x;
    nhapMang(a, n);
    cout << "Nhap gia tri X can xoa: ";
    cin >> x;
    
    xoaPhanTuGiaTriX(a, n, x);
    cout << "Mang sau khi xoa cac phan tu co gia tri " << x << ":" << endl;
    xuatMang(a, n);
    return 0;
}
