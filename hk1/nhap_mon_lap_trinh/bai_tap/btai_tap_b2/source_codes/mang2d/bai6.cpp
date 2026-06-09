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

// Bài 6: Thêm 1 dòng v vào cuối ma trận
void themDongCuoi(int a[MAX][MAX], int &m, int n, int v[MAX]) {
    for (int j = 0; j < n; j++) {
        a[m][j] = v[j]; // Thêm vào dòng m (dòng mới cuối cùng do index từ 0)
    }
    m++; // Tăng số lượng dòng
}

int main() {
    int a[MAX][MAX];
    int m, n;
    nhapMaTran(a, m, n);
    
    int v[MAX];
    cout << "Nhap dong v gom " << n << " phan tu de them vao cuoi:\n";
    for (int j = 0; j < n; j++) {
        cout << "v[" << j << "] = ";
        cin >> v[j];
    }
    
    themDongCuoi(a, m, n, v);
    
    cout << "Ma tran sau khi them dong cuoi:" << endl;
    xuatMaTran(a, m, n);
    
    return 0;
}
