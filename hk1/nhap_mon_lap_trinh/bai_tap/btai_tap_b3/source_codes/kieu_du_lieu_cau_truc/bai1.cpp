#include <iostream>
#include <string.h>
using namespace std;

// Định nghĩa kiểu dữ liệu cấu trúc Tinh để lưu trữ thông tin của một tỉnh
struct Tinh {
    char maTinh[10];     // Mã tỉnh (tối đa 9 ký tự + 1 ký tự kết thúc '\0')
    char tenTinh[50];    // Tên tỉnh (tối đa 49 ký tự)
    long danSo;          // Dân số của tỉnh
    float dienTich;      // Diện tích của tỉnh
};

// Hàm nhập thông tin cho một tỉnh
// Sử dụng tham chiếu (&) để có thể thay đổi giá trị của biến t được truyền vào
void nhapTinh(Tinh &t) {
    cin >> t.maTinh; // Nhập mã tỉnh (không chứa khoảng trắng)
    cin.ignore();    // Xóa ký tự Enter (newline) còn sót lại trong bộ đệm sau khi dùng cin >>
    cin.getline(t.tenTinh, 50); // Nhập tên tỉnh (có thể chứa khoảng trắng)
    cin >> t.danSo;      // Nhập dân số
    cin >> t.dienTich;   // Nhập diện tích
}

// Hàm xuất (in) thông tin của một tỉnh ra màn hình
// Truyền tham trị vì chỉ cần đọc dữ liệu, không cần sửa
void xuatTinh(Tinh t) {
    cout << "Ma: " << t.maTinh << " | Ten: " << t.tenTinh 
         << " | Dan so: " << t.danSo << " | Dien tich: " << t.dienTich << endl;
}

// Hàm nhập danh sách nhiều tỉnh
// Đầu vào: mảng ds chứa các tỉnh, n là số lượng tỉnh thực tế (truyền tham chiếu để lưu lại số lượng)
void nhapDanhSachTinh(Tinh ds[], int &n) {
    cin >> n; // Nhập số lượng tỉnh
    // Lặp n lần để nhập từng tỉnh một
    for (int i = 0; i < n; i++) {
        nhapTinh(ds[i]);
    }
}

// Hàm xuất ra màn hình các tỉnh có dân số lớn hơn 1 triệu
void xuatTinhDanSoLon(Tinh ds[], int n) {
    cout << "\n--- Cac tinh co dan so > 1 trieu ---" << endl;
    for (int i = 0; i < n; i++) {
        if (ds[i].danSo > 1000000) { // Điều kiện lọc
            xuatTinh(ds[i]);
        }
    }
}

// Hàm tìm và trả về tỉnh có diện tích lớn nhất
Tinh timTinhDienTichLonNhat(Tinh ds[], int n) {
    Tinh maxTinh = ds[0]; // Giả sử tỉnh đầu tiên có diện tích lớn nhất
    for (int i = 1; i < n; i++) {
        // So sánh nếu tìm thấy tỉnh có diện tích lớn hơn
        if (ds[i].dienTich > maxTinh.dienTich) {
            maxTinh = ds[i]; // Cập nhật lại maxTinh
        }
    }
    return maxTinh; // Trả về thông tin của tỉnh lớn nhất tìm được
}

int main() {
    Tinh ds[100]; // Khai báo mảng tối đa 100 tỉnh
    int n;        // Biến lưu số lượng tỉnh thực tế
    
    // Gọi các hàm xử lý
    nhapDanhSachTinh(ds, n);
    xuatTinhDanSoLon(ds, n);
    
    cout << "\n--- Tinh co dien tich lon nhat ---" << endl;
    // Gọi hàm tìm tỉnh lớn nhất, sau đó truyền luôn kết quả vào hàm xuất để in ra
    xuatTinh(timTinhDienTichLonNhat(ds, n));
    
    return 0;
}
