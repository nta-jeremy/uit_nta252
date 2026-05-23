#include <iostream>
using namespace std;

#define MAX 100

void nhapMaTran(int a[MAX][MAX], int &n) {
    cout << "Nhap kich thuoc ma tran vuong n: "; cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

void xuatMaTran(int a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

// Bài 12: Đếm số phần tử dương ở ma trận tam giác trên
void demDuongTamGiacTren(int a[MAX][MAX], int n) {
    int dem = 0;
    // Xét các phần tử nằm trên đường chéo chính (i < j)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            if (a[i][j] > 0) dem++;
        }
    }
    cout << "So phan tu duong o tam giac tren: " << dem << endl;
}

int main() {
    int a[MAX][MAX];
    int n;
    nhapMaTran(a, n);
    
    cout << "Ma tran vuong vua nhap:" << endl;
    xuatMaTran(a, n);
    
    demDuongTamGiacTren(a, n);
    
    return 0;
}
