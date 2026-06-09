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

// Bài 13: Trung bình cộng 1 cột
void tbcCotK(int a[MAX][MAX], int m, int n, int k) {
    if (k < 0 || k >= n) return;
    float tong = 0;
    for (int i = 0; i < m; i++) {
        tong += a[i][k];
    }
    cout << "TBC cot " << k << " = " << tong / m << endl;
}

int main() {
    int a[MAX][MAX];
    int m, n, k;
    nhapMaTran(a, m, n);
    
    cout << "Ma tran vua nhap:" << endl;
    xuatMaTran(a, m, n);
    
    cout << "Nhap cot k can tinh TBC: ";
    cin >> k;
    
    tbcCotK(a, m, n, k);
    
    return 0;
}
