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

// Bài 12: Xuất dãy đảo ngược
void xuatDaoNguoc(int a[], int n) {
    cout << "Mang dao nguoc: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[MAX];
    int n;
    nhapMang(a, n);
    xuatDaoNguoc(a, n);
    return 0;
}
