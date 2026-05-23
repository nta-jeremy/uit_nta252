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

// Bài 13: Thêm phần tử x vào vị trí k
void themPhanTu(int a[], int &n, int x, int k) {
    if (k < 0 || k > n) return; // Kiểm tra k hợp lệ
    
    // Dồn các phần tử từ vị trí k ra sau 1 ô
    for (int i = n; i > k; i--) {
        a[i] = a[i-1];
    }
    a[k] = x; // Chèn x vào vị trí k
    n++;      // Tăng số lượng phần tử
}

int main() {
    int a[MAX];
    int n, x, k;
    nhapMang(a, n);
    cout << "Nhap gia tri x can them: ";
    cin >> x;
    cout << "Nhap vi tri k can them: ";
    cin >> k;
    
    themPhanTu(a, n, x, k);
    cout << "Mang sau khi chen:" << endl;
    xuatMang(a, n);
    return 0;
}
