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

// Bài 2: Xuất mảng 2 chiều
void xuatMaTran(int a[MAX][MAX], int m, int n) {
    cout << "Ma tran vua nhap:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t"; // In phần tử và thụt lề bằng tab
        }
        cout << endl; // Xong một dòng thì xuống dòng
    }
}

int main() {
    int a[MAX][MAX];
    int m, n;
    nhapMaTran(a, m, n);
    xuatMaTran(a, m, n);
    return 0;
}
