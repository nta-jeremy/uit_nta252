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

// Bài 7: Thêm 1 dòng v vào dòng thứ k
void themDongK(int a[MAX][MAX], int &m, int n, int v[MAX], int k) {
    if (k < 0 || k > m) return;
    // Dời các dòng từ k trở về sau xuống 1 bậc
    for (int i = m; i > k; i--) {
        for (int j = 0; j < n; j++) {
            a[i][j] = a[i-1][j];
        }
    }
    // Gán dòng v vào vị trí k
    for (int j = 0; j < n; j++) {
        a[k][j] = v[j];
    }
    m++;
}

int main() {
    int a[MAX][MAX];
    int m, n, k;
    nhapMaTran(a, m, n);
    
    int v[MAX];
    cout << "Nhap dong v gom " << n << " phan tu de them:\n";
    for (int j = 0; j < n; j++) {
        cout << "v[" << j << "] = ";
        cin >> v[j];
    }
    cout << "Nhap vi tri dong k can them (0 den " << m << "): ";
    cin >> k;
    
    themDongK(a, m, n, v, k);
    
    cout << "Ma tran sau khi them dong " << k << ":" << endl;
    xuatMaTran(a, m, n);
    
    return 0;
}
