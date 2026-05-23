# BÀI TẬP BẮT BUỘC: KIỂU DỮ LIỆU CẤU TRÚC (STRUCT)

Dưới đây là các bài giải mẫu cho phần kiểu dữ liệu cấu trúc (struct). Các đoạn code được viết bằng C++ cơ bản.

```cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

// ==========================================
// BÀI 1: KIỂU DỮ LIỆU TỈNH
// ==========================================
struct Tinh {
    char maTinh[10];   // Mã tỉnh
    char tenTinh[50];  // Tên tỉnh
    long danSo;        // Dân số
    float dienTich;    // Diện tích
};

void nhapTinh(Tinh &t) {
    cout << "Nhap ma tinh: "; cin >> t.maTinh;
    cin.ignore(); // Xoá bộ nhớ đệm (tránh trôi lệnh)
    cout << "Nhap ten tinh: "; cin.getline(t.tenTinh, 50); // Nhập chuỗi có khoảng trắng
    cout << "Nhap dan so: "; cin >> t.danSo;
    cout << "Nhap dien tich: "; cin >> t.dienTich;
}

void xuatTinh(Tinh t) {
    cout << "Ma: " << t.maTinh << " | Ten: " << t.tenTinh 
         << " | Dan so: " << t.danSo << " | Dien tich: " << t.dienTich << endl;
}

void nhapDanhSachTinh(Tinh ds[], int &n) {
    cout << "Nhap so luong tinh: "; cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "--- Nhap tinh thu " << i + 1 << " ---" << endl;
        nhapTinh(ds[i]);
    }
}

void xuatTinhDanSoLon(Tinh ds[], int n) {
    cout << "\n--- Cac tinh co dan so > 1 trieu ---" << endl;
    for (int i = 0; i < n; i++) {
        if (ds[i].danSo > 1000000) xuatTinh(ds[i]); // Lọc theo dân số
    }
}

Tinh timTinhDienTichLonNhat(Tinh ds[], int n) {
    Tinh maxTinh = ds[0]; // Giả sử phần tử đầu lớn nhất
    for (int i = 1; i < n; i++) {
        if (ds[i].dienTich > maxTinh.dienTich) maxTinh = ds[i]; // Cập nhật max
    }
    return maxTinh;
}


// ==========================================
// BÀI 2: CHƯƠNG TRÌNH QUẢN LÝ SINH VIÊN
// ==========================================
struct SinhVien {
    char maSV[9];     // Mã sinh viên
    char hoTen[31];   // Họ và tên
    char gioiTinh[4]; // Giới tính
    char diaChi[51];  // Địa chỉ
    float diem[6];    // Điểm 6 môn
};

struct DanhSachSV {
    SinhVien arr[150]; // Mảng tối đa 150 SV
    int n;             // Số lượng SV hiện có
};

void nhapSinhVien(SinhVien &sv) {
    cout << "Nhap Ma SV: "; cin >> sv.maSV;
    cin.ignore();
    cout << "Nhap Ho ten: "; cin.getline(sv.hoTen, 31);
    cout << "Nhap Gioi tinh: "; cin.getline(sv.gioiTinh, 4);
    cout << "Nhap Dia chi: "; cin.getline(sv.diaChi, 51);
    cout << "Nhap diem 6 mon: ";
    for (int i = 0; i < 6; i++) cin >> sv.diem[i];
}

// a) Nhập mới danh sách
void nhapDanhSachSV(DanhSachSV &ds) {
    cout << "Nhap so luong sinh vien: "; cin >> ds.n;
    for (int i = 0; i < ds.n; i++) nhapSinhVien(ds.arr[i]);
}

// b) Tìm theo mã hoặc tên
void timSinhVien(DanhSachSV ds, char tuKhoa[]) {
    for (int i = 0; i < ds.n; i++) {
        // strcmp trả về 0 nếu 2 chuỗi giống nhau
        if (strcmp(ds.arr[i].maSV, tuKhoa) == 0 || strcmp(ds.arr[i].hoTen, tuKhoa) == 0) {
            cout << "Tim thay SV: " << ds.arr[i].hoTen << endl;
        }
    }
}

// c) Thêm sinh viên
void themSinhVien(DanhSachSV &ds, SinhVien sv) {
    if (ds.n < 150) {
        ds.arr[ds.n] = sv; // Gán vào cuối mảng
        ds.n++;            // Tăng số lượng
    }
}

// d) Huỷ sinh viên
void xoaSinhVien(DanhSachSV &ds, char maSV[]) {
    for (int i = 0; i < ds.n; i++) {
        if (strcmp(ds.arr[i].maSV, maSV) == 0) {
            // Dịch dồn các phần tử phía sau lên để lấp chỗ
            for (int j = i; j < ds.n - 1; j++) ds.arr[j] = ds.arr[j + 1];
            ds.n--; // Giảm số lượng
            break;
        }
    }
}

// e) Xuất danh sách
void xuatDanhSachSV(DanhSachSV ds) {
    for (int i = 0; i < ds.n; i++) {
        cout << ds.arr[i].maSV << " - " << ds.arr[i].hoTen << endl;
    }
}

// f) Sinh viên nợ môn (điểm < 5)
void xuatSinhVienNoMon(DanhSachSV ds) {
    for (int i = 0; i < ds.n; i++) {
        bool noMon = false;
        for (int j = 0; j < 6; j++) {
            if (ds.arr[i].diem[j] < 5.0) { noMon = true; break; } // Bị điểm dưới 5
        }
        if (noMon) cout << "SV no mon: " << ds.arr[i].hoTen << endl;
    }
}


// ==========================================
// BÀI 3: PHÂN SỐ
// ==========================================
struct PhanSo {
    int tu;  // Tử số
    int mau; // Mẫu số
};

void nhapPhanSo(PhanSo &ps) {
    cout << "Nhap tu so: "; cin >> ps.tu;
    do {
        cout << "Nhap mau so (khac 0): "; cin >> ps.mau;
    } while (ps.mau == 0); // Lặp lại đến khi mẫu khác 0
}

void xuatPhanSo(PhanSo ps) { cout << ps.tu << "/" << ps.mau << endl; }

// Tìm UCLN để rút gọn
int UCLN(int a, int b) {
    a = abs(a); b = abs(b);
    while (a * b != 0) {
        if (a > b) a %= b; else b %= a;
    }
    return a + b;
}

// c) Rút gọn
void rutGon(PhanSo &ps) {
    int ucln = UCLN(ps.tu, ps.mau);
    ps.tu /= ucln; ps.mau /= ucln;
}

// d) Tính tổng hai phân số
PhanSo tong(PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.mau + b.tu * a.mau; // Quy đồng tử
    kq.mau = a.mau * b.mau;              // Quy đồng mẫu
    rutGon(kq);
    return kq;
}

// e) Kiểm tra phân số tối giản
bool kiemTraToiGian(PhanSo ps) {
    return UCLN(ps.tu, ps.mau) == 1; // UCLN = 1 -> đã tối giản
}

// g) Kiểm tra âm dương (1: Dương, -1: Âm, 0: Bằng 0)
int kiemTraAmDuong(PhanSo ps) {
    if (ps.tu == 0) return 0; 
    if ((ps.tu > 0 && ps.mau > 0) || (ps.tu < 0 && ps.mau < 0)) return 1; 
    return -1; 
}


// ==========================================
// BÀI 4: NGÀY THÁNG NĂM
// ==========================================
typedef struct {
    int ngay;
    int thang;
    int nam;
} NGAY;

// g) Nhập ngày
void nhapNgay(NGAY &n) {
    cout << "Nhap ngay, thang, nam: "; cin >> n.ngay >> n.thang >> n.nam;
}

// Kiểm tra năm nhuận
bool laNamNhuan(int nam) {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

// Số ngày trong tháng
int soNgayTrongThang(int thang, int nam) {
    switch (thang) {
        case 4: case 6: case 9: case 11: return 30;
        case 2: return laNamNhuan(nam) ? 29 : 28; // Tuỳ năm nhuận
        default: return 31;
    }
}

// h) Số ngày từ đầu năm tới ngày hiện tại
int tinhSoNgayTrongNam(NGAY n) {
    int sum = n.ngay;
    for (int i = 1; i < n.thang; i++) sum += soNgayTrongThang(i, n.nam);
    return sum;
}

// i) Ngày tiếp theo
NGAY ngaySau(NGAY n) {
    n.ngay++;
    if (n.ngay > soNgayTrongThang(n.thang, n.nam)) { // Quá ngày trong tháng
        n.ngay = 1; n.thang++; // Sang tháng mới
        if (n.thang > 12) { n.thang = 1; n.nam++; } // Sang năm mới
    }
    return n;
}

int main() {
    return 0;
}
```
