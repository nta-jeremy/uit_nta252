#include <iostream>
#include <math.h> // Sử dụng hàm abs() tính trị tuyệt đối
using namespace std;

// Cấu trúc phân số
struct PhanSo {
    int tu;  // Tử số
    int mau; // Mẫu số
};

// Hàm nhập một phân số
void nhapPhanSo(PhanSo &ps) {
    cin >> ps.tu >> ps.mau;
    // Kiểm tra mẫu số, nếu bằng 0 (không hợp lệ) thì tự động gán bằng 1
    if (ps.mau == 0) ps.mau = 1;
}

// Hàm in phân số
void xuatPhanSo(PhanSo ps) { 
    cout << ps.tu << "/" << ps.mau << endl; 
}

// Hàm tìm Ước Chung Lớn Nhất (UCLN) của hai số nguyên
int UCLN(int a, int b) {
    a = abs(a); b = abs(b); // Lấy trị tuyệt đối để tránh lỗi với số âm
    while (a * b != 0) {    // Lặp cho đến khi 1 trong 2 số bằng 0
        if (a > b) a %= b;  // Nếu a lớn hơn b, a = phần dư của a chia b
        else b %= a;        // Ngược lại, b = phần dư của b chia a
    }
    return a + b; // Trả về tổng, vì lúc này 1 trong 2 số đã bằng 0, số còn lại chính là UCLN
}

// Hàm rút gọn phân số
void rutGon(PhanSo &ps) {
    if (ps.tu == 0) return; // Tử bằng 0 thì không cần rút gọn
    int ucln = UCLN(ps.tu, ps.mau); // Tìm UCLN của tử và mẫu
    ps.tu /= ucln;  // Chia cả tử và mẫu cho UCLN
    ps.mau /= ucln;
}

// Hàm cộng hai phân số
PhanSo tong(PhanSo a, PhanSo b) {
    PhanSo kq;
    // Quy đồng mẫu số và cộng tử: a/b + c/d = (a*d + b*c) / (b*d)
    kq.tu = a.tu * b.mau + b.tu * a.mau;
    kq.mau = a.mau * b.mau;
    rutGon(kq); // Rút gọn kết quả trước khi trả về
    return kq;
}

// Hàm kiểm tra xem phân số đã tối giản chưa
bool kiemTraToiGian(PhanSo ps) {
    // Nếu UCLN của tử và mẫu là 1, nghĩa là phân số đã tối giản
    return UCLN(ps.tu, ps.mau) == 1;
}

// Hàm kiểm tra dấu của phân số
// Trả về: 1 nếu dương, -1 nếu âm, 0 nếu bằng 0
int kiemTraAmDuong(PhanSo ps) {
    if (ps.tu == 0) return 0; // Tử bằng 0 thì phân số bằng 0
    // Phân số dương khi tử và mẫu cùng dấu
    if ((ps.tu > 0 && ps.mau > 0) || (ps.tu < 0 && ps.mau < 0)) return 1; 
    // Trái dấu thì phân số âm
    return -1; 
}

int main() {
    PhanSo p1, p2;
    nhapPhanSo(p1);
    nhapPhanSo(p2);
    rutGon(p1);
    rutGon(p2);
    xuatPhanSo(p1);
    xuatPhanSo(p2);
    
    PhanSo p3 = tong(p1, p2); // Tính tổng 2 phân số
    xuatPhanSo(p3);           // In kết quả
    return 0;
}
