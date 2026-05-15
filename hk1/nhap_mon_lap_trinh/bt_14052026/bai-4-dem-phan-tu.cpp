#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // So luong phan tu chinh la n (da nhap tu dau)
    // Hoac dem lai de hieu bai toan tong quat hon
    int dem = 0;
    for (int i = 0; i < n; i++) {
        dem++; // moi phan tu dem len 1
    }

    cout << "So luong phan tu trong mang la: " << dem << endl;

    return 0;
}
