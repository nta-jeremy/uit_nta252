# BÀI TẬP BẮT BUỘC: MẢNG 1 CHIỀU

Các bài giải được viết bằng ngôn ngữ C++ với cú pháp đơn giản, phù hợp cho người mới bắt đầu học về mảng (array).

```cpp
#include <iostream>
#include <cstdlib> // Thư viện dùng cho hàm tạo số ngẫu nhiên
#include <ctime>   // Thư viện dùng cho hàm lấy thời gian thực
#include <math.h>
using namespace std;

#define MAX 100 // Định nghĩa số phần tử tối đa của mảng

// --- Bài 1, 2, 3: Nhập, khởi tạo ngẫu nhiên, xuất mảng ---

// Bài 1: Nhập mảng từ bàn phím
void nhapMang(int a[], int &n) {
    cout << "Nhap so luong phan tu cua mang (n): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

// Bài 2: Khởi tạo mảng ngẫu nhiên (thay thế cho nhập tay nếu muốn test nhanh)
void khoiTaoMangNgauNhien(int a[], int &n) {
    cout << "Nhap so luong phan tu cua mang (n): ";
    cin >> n;
    srand(time(0)); // Cấp seed cho hàm random dựa trên thời gian thực
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100; // Random các số từ 0 đến 99
    }
}

// Bài 3: Xuất mảng ra màn hình
void xuatMang(int a[], int n) {
    cout << "Cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// --- Bài 4: Tìm Max, Min và đếm số lượng ---
void timMaxMinVaDem(int a[], int n) {
    int max_val = a[0];
    int min_val = a[0];
    
    // Tìm max và min
    for (int i = 1; i < n; i++) {
        if (a[i] > max_val) max_val = a[i];
        if (a[i] < min_val) min_val = a[i];
    }
    
    int demMax = 0, demMin = 0;
    // Đếm số lượng phần tử max và min
    for (int i = 0; i < n; i++) {
        if (a[i] == max_val) demMax++;
        if (a[i] == min_val) demMin++;
    }
    
    cout << "Phan tu lon nhat: " << max_val << " (xuat hien " << demMax << " lan)" << endl;
    cout << "Phan tu nho nhat: " << min_val << " (xuat hien " << demMin << " lan)" << endl;
}

// --- Bài 5: Tìm vị trí phần tử dương nhỏ nhất ---
void viTriDuongNhoNhat(int a[], int n) {
    int min_duong = -1; // Lưu giá trị dương nhỏ nhất
    int vitri = -1;     // Lưu vị trí
    
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) { // Nếu phần tử là số dương
            if (min_duong == -1 || a[i] < min_duong) {
                min_duong = a[i];
                vitri = i;
            }
        }
    }
    
    if (vitri != -1) {
        cout << "Vi tri phan tu duong nho nhat la: " << vitri << " (Gia tri: " << a[vitri] << ")" << endl;
    } else {
        cout << "Khong co phan tu duong nao trong mang." << endl;
    }
}

// --- Bài 6: Tìm vị trí phần tử âm lớn nhất ---
void viTriAmLonNhat(int a[], int n) {
    int max_am = 1; // Khởi tạo 1 giá trị dương để đánh dấu chưa tìm thấy số âm
    int vitri = -1;
    
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) { // Nếu là số âm
            if (max_am > 0 || a[i] > max_am) {
                max_am = a[i];
                vitri = i;
            }
        }
    }
    
    if (vitri != -1) {
        cout << "Vi tri phan tu am lon nhat la: " << vitri << " (Gia tri: " << a[vitri] << ")" << endl;
    } else {
        cout << "Khong co phan tu am nao trong mang." << endl;
    }
}

// --- Bài 7: Xoá phần tử tại vị trí k ---
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

// --- Bài 8: Xoá tất cả phần tử có giá trị X ---
void xoaPhanTuGiaTriX(int a[], int &n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            xoaPhanTuTaiK(a, n, i);
            i--; // Xóa xong phải lùi i lại để kiểm tra lại vị trí vừa dồn lên
        }
    }
}

// --- Bài 9: Tính tổng các phần tử của mảng ---
int tongMang(int a[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i];
    }
    return tong;
}

// --- Bài 10: Tìm kiếm phần tử x ---
int timKiemX(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i; // Trả về vị trí đầu tiên tìm thấy
        }
    }
    return -1; // Không tìm thấy
}

// --- Bài 11: Sắp xếp mảng ---
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

// --- Bài 12: Xuất dãy đảo ngược ---
void xuatDaoNguoc(int a[], int n) {
    cout << "Mang dao nguoc: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// --- Bài 13: Thêm phần tử x vào vị trí k ---
void themPhanTu(int a[], int &n, int x, int k) {
    if (k < 0 || k > n) return; // Kiểm tra k hợp lệ
    
    // Dồn các phần tử từ vị trí k ra sau 1 ô
    for (int i = n; i > k; i--) {
        a[i] = a[i-1];
    }
    a[k] = x; // Chèn x vào vị trí k
    n++;      // Tăng số lượng phần tử
}

// --- Bài 14: Đếm phần tử dương và tính tổng ---
void demVaTongDuong(int a[], int n) {
    int dem = 0;
    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            dem++;
            tong += a[i];
        }
    }
    cout << "So luong phan tu duong: " << dem << endl;
    cout << "Tong cac phan tu duong: " << tong << endl;
}

// --- Bài 15: Kiểm tra mảng đối xứng ---
bool kiemTraDoiXung(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            return false; // Nếu phần tử đầu và cuối khác nhau -> không đối xứng
        }
    }
    return true;
}

// --- Bài 16: Kiểm tra mảng có sắp thứ tự tăng hay không ---
bool kiemTraTangDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i+1]) { // Nếu phần tử trước lớn hơn phần tử sau
            return false;
        }
    }
    return true;
}

// --- Bài 17: Tách mảng ---
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void tachMang(int a[], int n, int b[], int &nb, int c[], int &nc) {
    nb = 0; // Số lượng phần tử mảng b (nguyên tố)
    nc = 0; // Số lượng phần tử mảng c (còn lại)
    
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            b[nb++] = a[i]; // Đưa vào mảng b và tăng nb lên
        } else {
            c[nc++] = a[i]; // Đưa vào mảng c và tăng nc lên
        }
    }
}

// --- Bài 18: Nối 2 mảng tăng dần thành 1 mảng tăng dần ---
void noiHaiMangTang(int a[], int na, int b[], int nb, int c[], int &nc) {
    nc = na + nb;
    int i = 0; // Chỉ số duyệt mảng a
    int j = 0; // Chỉ số duyệt mảng b
    int k = 0; // Chỉ số duyệt mảng c
    
    // So sánh từng phần tử của a và b, phần tử nào nhỏ hơn thì cho vào mảng c
    while (i < na && j < nb) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    
    // Đưa các phần tử còn lại của mảng a vào c (nếu có)
    while (i < na) {
        c[k++] = a[i++];
    }
    
    // Đưa các phần tử còn lại của mảng b vào c (nếu có)
    while (j < nb) {
        c[k++] = b[j++];
    }
}

// Hàm main dùng để test gọi các hàm phía trên
int main() {
    int a[MAX];
    int n;
    
    // Test Bài 1 và Bài 3
    nhapMang(a, n);
    xuatMang(a, n);
    
    // Test Bài 4
    timMaxMinVaDem(a, n);
    
    // Các bạn có thể gọi thêm các hàm khác ở đây để kiểm tra...
    
    return 0;
}
```
