#include <iostream>
using namespace std;

// Hàm kiểm tra năm nhuận
bool laNamNhuan(int nam) {
    // Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không chia hết cho 100
    if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)) {
        return true;
    }
    return false;
}

// Hàm lấy số ngày của một tháng trong năm
int soNgayTrongThang(int thang, int nam) {
    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31; // Các tháng có 31 ngày
        case 4: case 6: case 9: case 11:
            return 30; // Các tháng có 30 ngày
        case 2:
            // Tháng 2 có 29 ngày nếu là năm nhuận, ngược lại 28 ngày
            if (laNamNhuan(nam)) return 29;
            return 28;
        default:
            return 0; // Trả về 0 nếu tháng không hợp lệ
    }
}

// Hàm lấy quý của năm
int layQuy(int thang) {
    if (thang >= 1 && thang <= 3) return 1;
    if (thang >= 4 && thang <= 6) return 2;
    if (thang >= 7 && thang <= 9) return 3;
    return 4;
}

// Hàm tính ngày thứ bao nhiêu trong năm
int ngayThuBaoNhieuTrongNam(int ngay, int thang, int nam) {
    int tongNgay = ngay;
    // Cộng dồn số ngày của các tháng trước đó
    for (int i = 1; i < thang; i++) {
        tongNgay += soNgayTrongThang(i, nam);
    }
    return tongNgay;
}

// Hàm tính ngày thứ mấy trong tuần (Sử dụng công thức Zeller)
void thuTrongTuan(int ngay, int thang, int nam) {
    if (thang < 3) {
        thang += 12;
        nam -= 1;
    }
    int K = nam % 100;
    int J = nam / 100;
    int h = (ngay + 13 * (thang + 1) / 5 + K + K / 4 + J / 4 + 5 * J) % 7;
    
    // Kết quả h: 0-Thứ 7, 1-Chủ nhật, 2-Thứ 2, 3-Thứ 3, 4-Thứ 4, 5-Thứ 5, 6-Thứ 6
    cout << "Ngay vua nhap la: ";
    switch (h) {
        case 0: cout << "Thu Bay" << endl; break;
        case 1: cout << "Chu Nhat" << endl; break;
        case 2: cout << "Thu Hai" << endl; break;
        case 3: cout << "Thu Ba" << endl; break;
        case 4: cout << "Thu Tu" << endl; break;
        case 5: cout << "Thu Nam" << endl; break;
        case 6: cout << "Thu Sau" << endl; break;
    }
}

int main() {
    int ngay, thang, nam;
    do {
        cout << "Nhap ngay, thang, nam (ngay 1-31, thang 1-12, nam > 1900): ";
        cin >> ngay >> thang >> nam;
    } while (nam <= 1900 || thang < 1 || thang > 12 || ngay < 1 || ngay > soNgayTrongThang(thang, nam));

    // a)
    cout << "a) Thang " << thang << " co " << soNgayTrongThang(thang, nam) 
         << " ngay va thuoc quy " << layQuy(thang) << " trong nam." << endl;
    
    // b)
    if (laNamNhuan(nam)) {
        cout << "b) Nam " << nam << " la nam nhuan." << endl;
    } else {
        cout << "b) Nam " << nam << " khong phai la nam nhuan." << endl;
    }

    // c)
    cout << "c) Ngay vua nhap la ngay thu " << ngayThuBaoNhieuTrongNam(ngay, thang, nam) << " trong nam." << endl;

    // d)
    cout << "d) ";
    thuTrongTuan(ngay, thang, nam);

    return 0;
}
