#include <iostream>
#include <string.h>
using namespace std;

// Cấu trúc lưu thông tin của một Sinh Viên
struct SinhVien {
    char maSV[9];       // Mã sinh viên (8 ký tự + '\0')
    char hoTen[31];     // Họ và tên
    char gioiTinh[4];   // Giới tính (Nam/Nu)
    char diaChi[51];    // Địa chỉ
    float diem[6];      // Mảng chứa điểm của 6 môn học
};

// Cấu trúc danh sách sinh viên gồm một mảng và biến n lưu số lượng
struct DanhSachSV {
    SinhVien arr[150]; // Mảng chứa tối đa 150 sinh viên
    int n;             // Số lượng sinh viên hiện tại trong danh sách
};

// Hàm nhập 1 sinh viên
void nhapSinhVien(SinhVien &sv) {
    cin >> sv.maSV;
    cin.ignore(); // Xóa ký tự xuống dòng bị thừa sau khi nhập mã SV
    cin.getline(sv.hoTen, 31);
    cin.getline(sv.gioiTinh, 4);
    cin.getline(sv.diaChi, 51);
    // Nhập điểm cho 6 môn học
    for (int i = 0; i < 6; i++) {
        cin >> sv.diem[i];
    }
}

// Hàm nhập danh sách sinh viên
void nhapDanhSachSV(DanhSachSV &ds) {
    cin >> ds.n; // Nhập số lượng
    for (int i = 0; i < ds.n; i++) {
        nhapSinhVien(ds.arr[i]);
    }
}

// Hàm tìm sinh viên theo từ khóa (có thể là mã SV hoặc tên)
void timSinhVien(DanhSachSV ds, char tuKhoa[]) {
    for (int i = 0; i < ds.n; i++) {
        // Hàm strcmp(s1, s2) so sánh 2 chuỗi, trả về 0 nếu 2 chuỗi giống hệt nhau
        if (strcmp(ds.arr[i].maSV, tuKhoa) == 0 || strcmp(ds.arr[i].hoTen, tuKhoa) == 0) {
            cout << "Tim thay SV: " << ds.arr[i].hoTen << endl;
        }
    }
}

// Hàm thêm một sinh viên mới vào cuối danh sách
void themSinhVien(DanhSachSV &ds, SinhVien sv) {
    if (ds.n < 150) { // Nếu danh sách chưa đầy
        ds.arr[ds.n] = sv; // Gán sinh viên mới vào vị trí n (cuối mảng)
        ds.n++;            // Tăng số lượng sinh viên lên 1
    }
}

// Hàm xóa một sinh viên theo mã SV
void xoaSinhVien(DanhSachSV &ds, char maSV[]) {
    for (int i = 0; i < ds.n; i++) {
        // Tìm thấy sinh viên cần xóa ở vị trí i
        if (strcmp(ds.arr[i].maSV, maSV) == 0) {
            // Dịch chuyển các sinh viên từ vị trí i+1 lên trước 1 ô để lấp đầy khoảng trống
            for (int j = i; j < ds.n - 1; j++) {
                ds.arr[j] = ds.arr[j + 1];
            }
            ds.n--; // Giảm số lượng sinh viên đi 1
            break;  // Xóa xong thì thoát khỏi vòng lặp
        }
    }
}

// Hàm xuất danh sách sinh viên ra màn hình
void xuatDanhSachSV(DanhSachSV ds) {
    for (int i = 0; i < ds.n; i++) {
        cout << ds.arr[i].maSV << " - " << ds.arr[i].hoTen << endl;
    }
}

// Hàm kiểm tra và in ra các sinh viên nợ môn (có môn điểm < 5.0)
void xuatSinhVienNoMon(DanhSachSV ds) {
    for (int i = 0; i < ds.n; i++) {
        bool noMon = false; // Cờ đánh dấu nợ môn, mặc định là false (không nợ)
        for (int j = 0; j < 6; j++) {
            if (ds.arr[i].diem[j] < 5.0) { // Nếu có điểm < 5.0
                noMon = true; // Bật cờ nợ môn
                break;        // Không cần kiểm tra các môn còn lại nữa
            }
        }
        if (noMon) { // Nếu cờ noMon là true
            cout << "SV no mon: " << ds.arr[i].hoTen << endl;
        }
    }
}

int main() {
    DanhSachSV ds;
    nhapDanhSachSV(ds);
    xuatDanhSachSV(ds);
    xuatSinhVienNoMon(ds);
    return 0;
}
