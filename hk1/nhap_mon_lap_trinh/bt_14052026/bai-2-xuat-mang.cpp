#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;

    int a[100];
    // Nhap mang
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Xuat mang
    cout << "Cac phan tu trong mang la: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; // in tung phan tu va them khoang trang
    }
    cout << endl;

    return 0;
}
