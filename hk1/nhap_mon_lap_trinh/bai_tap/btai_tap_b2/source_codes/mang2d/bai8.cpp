#include <iostream>
using namespace std;

#define MAX 100

void nhapMaTran(int a[MAX][MAX], int &m, int &n) {
    cout << "Nhap so dong m: "; cin >> m;
    cout << "Nhap so cot n: "; cin >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

void xuatMaTran(int a[MAX][MAX], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

// Bài 8: Xóa dòng thứ k
void xoaDongK(int a[MAX][MAX], int &m, int n, int k) {
    if (k < 0 || k >= m) return;
    // Dời các dòng phía sau lên 1 bậc để đè lên dòng k
    for (int i = k; i < m - 1; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = a[i+1][j];
        }
    }
    m--; // Giảm số dòng
}

int main() {
    int a[MAX][MAX];
    int m, n, k;
    nhapMaTran(a, m, n);
    
    cout << "Nhap vi tri dong k can xoa: ";
    cin >> k;
    
    xoaDongK(a, m, n, k);
    
    cout << "Ma tran sau khi xoa dong " << k << ":" << endl;
    xuatMaTran(a, m, n);
    
    return 0;
}
