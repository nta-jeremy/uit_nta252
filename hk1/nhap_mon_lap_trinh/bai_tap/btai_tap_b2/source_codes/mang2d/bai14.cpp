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

// Bài 14: Tổng các phần tử biên
void tongBien(int a[MAX][MAX], int m, int n) {
    int tong = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            // Phần tử nằm ở dòng đầu (i=0), dòng cuối (i=m-1), cột đầu (j=0), cột cuối (j=n-1)
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                tong += a[i][j];
            }
        }
    }
    cout << "Tong cac phan tu o bien la: " << tong << endl;
}

int main() {
    int a[MAX][MAX];
    int m, n;
    nhapMaTran(a, m, n);
    
    cout << "Ma tran vua nhap:" << endl;
    xuatMaTran(a, m, n);
    
    tongBien(a, m, n);
    
    return 0;
}
