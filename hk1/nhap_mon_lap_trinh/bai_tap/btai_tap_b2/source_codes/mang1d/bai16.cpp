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

// Bài 16: Kiểm tra mảng có sắp thứ tự tăng hay không
bool kiemTraTangDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i+1]) { // Nếu phần tử trước lớn hơn phần tử sau
            return false;
        }
    }
    return true;
}

int main() {
    int a[MAX];
    int n;
    nhapMang(a, n);
    
    if (kiemTraTangDan(a, n)) {
        cout << "Mang vua nhap da duoc sap xep tang dan." << endl;
    } else {
        cout << "Mang vua nhap chua duoc sap xep tang dan." << endl;
    }
    return 0;
}
