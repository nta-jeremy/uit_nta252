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

    int tongChan = 0; // bien luu tong cac so chan

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) { // kiem tra so chan: chia het cho 2
            tongChan = tongChan + a[i]; // cong vao tong
        }
    }

    cout << "Tong cac phan tu chan trong mang la: " << tongChan << endl;

    return 0;
}
