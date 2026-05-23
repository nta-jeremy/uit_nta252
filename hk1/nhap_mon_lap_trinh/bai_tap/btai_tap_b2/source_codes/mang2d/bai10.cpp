#include <iostream>
using namespace std;

#define MAX 100

void nhapMaTran(int a[MAX][MAX], int m, int n, const char* name) {
    cout << "Nhap ma tran " << name << ":" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << name << "[" << i << "][" << j << "] = ";
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

// Bài 10: Tính tổng 2 ma trận
void tongHaiMaTran(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX], int m, int n) {
    // 2 ma trận cộng nhau phải cùng kích thước
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
    int m, n;
    cout << "Nhap so dong m: "; cin >> m;
    cout << "Nhap so cot n: "; cin >> n;
    
    nhapMaTran(a, m, n, "A");
    nhapMaTran(b, m, n, "B");
    
    tongHaiMaTran(a, b, c, m, n);
    
    cout << "Ma tran tong C = A + B:" << endl;
    xuatMaTran(c, m, n);
    
    return 0;
}
