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

// Bài 11: Tính tổng mỗi dòng và cột
void tongDongVaCot(int a[MAX][MAX], int m, int n) {
    // Tổng từng dòng
    for (int i = 0; i < m; i++) {
        int tong = 0;
        for (int j = 0; j < n; j++) tong += a[i][j];
        cout << "Tong dong " << i << " = " << tong << endl;
    }
    // Tổng từng cột
    for (int j = 0; j < n; j++) {
        int tong = 0;
        for (int i = 0; i < m; i++) tong += a[i][j];
        cout << "Tong cot " << j << " = " << tong << endl;
    }
}

int main() {
    int a[MAX][MAX];
    int m, n;
    nhapMaTran(a, m, n);
    
    cout << "Ma tran vua nhap:" << endl;
    xuatMaTran(a, m, n);
    
    tongDongVaCot(a, m, n);
    
    return 0;
}
