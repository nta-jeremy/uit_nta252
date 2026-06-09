#include <iostream>
using namespace std;

#define MAX 100

void nhapMang(int a[], int &n) {
    cout << "Nhap so luong phan tu cua mang (n): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void xuatMang(int a[], int n) {
    cout << "Cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Bài 11: Sắp xếp mảng tăng dần
void sapXepTangDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                // Hoán vị
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Sắp xếp mảng giảm dần
void sapXepGiamDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                // Hoán vị
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int a[MAX];
    int n;
    nhapMang(a, n);
    
    // Copy array for sorting
    int b[MAX];
    for(int i = 0; i < n; i++) b[i] = a[i];

    cout << "--- SAP XEP TANG DAN ---" << endl;
    sapXepTangDan(a, n);
    xuatMang(a, n);

    cout << "--- SAP XEP GIAM DAN ---" << endl;
    sapXepGiamDan(b, n);
    xuatMang(b, n);

    return 0;
}
