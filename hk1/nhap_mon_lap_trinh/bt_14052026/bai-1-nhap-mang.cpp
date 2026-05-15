#include <iostream>
using namespace std;

int main() {
    int n; // bien luu so luong phan tu cua mang
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int a[100]; // khai bao mang toi da 100 phan tu

    // Vong lap de nhap tung phan tu
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> a[i]; // a[i] la phan tu o vi tri thu i
    }

    return 0;
}
