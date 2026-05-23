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

// Bài 7: Xoá phần tử tại vị trí k
int xoaPhanTuTaiK(int a[], int &n, int k) {
    // Kiểm tra vị trí k hợp lệ không
    if (k < 0 || k >= n) {
        return 0; // Không hợp lệ trả về 0
    }
    
    // Dồn các phần tử phía sau k lên trước 1 ô
    for (int i = k; i < n - 1; i++) {
        a[i] = a[i+1];
    }
    n--; // Giảm số lượng phần tử
    return 1; // Xóa thành công trả về 1
}

int main() {
    int a[MAX];
    int n, k;
    nhapMang(a, n);
    cout << "Nhap vi tri can xoa k: ";
    cin >> k;
    
    int result = xoaPhanTuTaiK(a, n, k);
    if (result == 1) {
        cout << "Xoa thanh cong!" << endl;
        xuatMang(a, n);
    } else {
        cout << "Vi tri xoa khong hop le!" << endl;
    }
    return 0;
}
