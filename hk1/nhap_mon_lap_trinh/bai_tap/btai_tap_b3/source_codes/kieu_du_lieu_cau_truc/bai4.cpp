#include <iostream>
using namespace std;

// Cấu trúc ngày tháng năm
typedef struct {
    int ngay;
    int thang;
    int nam;
} NGAY;

// Hàm nhập dữ liệu ngày
void nhapNgay(NGAY &n) {
    cin >> n.ngay >> n.thang >> n.nam;
}

// Hàm kiểm tra năm nhuận
// Năm nhuận là năm chia hết cho 4 nhưng không chia hết cho 100,
// hoặc chia hết cho 400.
bool laNamNhuan(int nam) {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

// Hàm trả về số ngày trong một tháng của một năm bất kỳ
int soNgayTrongThang(int thang, int nam) {
    switch (thang) {
        // Các tháng có 30 ngày
        case 4: case 6: case 9: case 11: return 30;
        // Tháng 2 đặc biệt, phụ thuộc vào năm nhuận
        case 2: return laNamNhuan(nam) ? 29 : 28;
        // Các tháng còn lại có 31 ngày
        default: return 31;
    }
}

// Hàm tính xem ngày hiện tại là ngày thứ bao nhiêu trong năm
int tinhSoNgayTrongNam(NGAY n) {
    int sum = n.ngay; // Khởi tạo tổng bằng số ngày của tháng hiện tại
    // Cộng dồn số ngày của các tháng trước đó trong năm
    for (int i = 1; i < n.thang; i++) {
        sum += soNgayTrongThang(i, n.nam);
    }
    return sum; // Trả về tổng số ngày
}

// Hàm tìm ngày kế tiếp của một ngày
NGAY ngaySau(NGAY n) {
    n.ngay++; // Tăng ngày lên 1
    // Nếu số ngày vượt quá số ngày tối đa của tháng hiện tại
    if (n.ngay > soNgayTrongThang(n.thang, n.nam)) {
        n.ngay = 1; // Reset ngày về mùng 1
        n.thang++;  // Tăng tháng lên 1
        // Nếu tháng vượt quá 12
        if (n.thang > 12) { 
            n.thang = 1; // Reset tháng về 1
            n.nam++;     // Sang năm mới
        }
    }
    return n; // Trả về ngày kế tiếp
}

int main() {
    NGAY n;
    nhapNgay(n);
    // In ra thứ tự của ngày trong năm
    cout << "So ngay: " << tinhSoNgayTrongNam(n) << endl;
    // Tìm và in ra ngày kế tiếp
    NGAY sau = ngaySau(n);
    cout << "Ngay sau: " << sau.ngay << "/" << sau.thang << "/" << sau.nam << endl;
    return 0;
}
