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

// Bài 9: Tìm điểm yên ngựa
void timDiemYenNgua(int a[MAX][MAX], int m, int n) {
    bool coYenNgua = false;
    for (int i = 0; i < m; i++) {
        // Bước 1: Tìm Max trên dòng i
        int max_dong = a[i][0];
        int cot_max = 0;
        for (int j = 1; j < n; j++) {
            if (a[i][j] > max_dong) {
                max_dong = a[i][j];
                cot_max = j;
            }
        }
        
        // Bước 2: Kiểm tra xem Max đó có phải là Min trên cột cot_max hay không
        bool laYenNgua = true;
        for (int k = 0; k < m; k++) {
            if (a[k][cot_max] < max_dong) {
                laYenNgua = false;
                break;
            }
        }
        
        if (laYenNgua) {
            cout << "Diem yen ngua: a[" << i << "][" << cot_max << "] = " << max_dong << endl;
            coYenNgua = true;
        }
    }
    if (!coYenNgua) cout << "Khong co diem yen ngua." << endl;
}

int main() {
    int a[MAX][MAX];
    int m, n;
    nhapMaTran(a, m, n);
    
    cout << "Ma tran vua nhap:" << endl;
    xuatMaTran(a, m, n);
    
    timDiemYenNgua(a, m, n);
    
    return 0;
}
