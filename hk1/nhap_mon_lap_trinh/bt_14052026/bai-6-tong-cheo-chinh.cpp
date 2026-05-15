#include <iostream>
using namespace std;

int main() {
    int n; // n la so hang va so cot cua ma tran vuong
    cout << "Nhap cap cua ma tran vuong (n x n): ";
    cin >> n;

    int a[100][100]; // khai bao ma tran 2 chieu

    // Nhap ma tran
    cout << "Nhap cac phan tu cua ma tran:" << endl;
    for (int i = 0; i < n; i++) {     // duyet tung hang
        for (int j = 0; j < n; j++) { // duyet tung cot trong hang
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    // Tinh tong duong cheo chinh
    // Duong cheo chinh gom cac phan tu a[0][0], a[1][1], a[2][2], ...
    int tongCheo = 0;
    for (int i = 0; i < n; i++) {
        tongCheo = tongCheo + a[i][i]; // chi lay phan tu co chi so hang = chi so cot
    }

    cout << "Tong cac phan tu tren duong cheo chinh la: " << tongCheo << endl;

    return 0;
}
