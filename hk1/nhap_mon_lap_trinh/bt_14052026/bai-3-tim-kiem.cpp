#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;

    if (cin.fail() || n <= 0 || n > 100) {
        cout << "So phan tu khong hop le!" << endl;
        return 1;
    }

    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x;
    cout << "Nhap phan tu can tim: ";
    cin >> x;

    if (cin.fail()) {
        cout << "Gia tri tim kiem khong hop le!" << endl;
        return 1;
    }

    bool timThay = false; // bien kiem tra co tim thay hay khong

    for (int i = 0; i < n; i++) {
        if (a[i] == x) { // neu phan tu thu i bang x
            cout << "Tim thay " << x << " o vi tri thu " << i + 1 << endl;
            timThay = true;
            break; // dung lai ngay khi tim thay (khong can tim nua)
        }
    }

    if (!timThay) {
        cout << "Khong tim thay " << x << " trong mang!" << endl;
    }

    return 0;
}
