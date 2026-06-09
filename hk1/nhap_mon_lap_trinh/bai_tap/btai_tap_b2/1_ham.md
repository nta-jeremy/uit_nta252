# BÀI TẬP BẮT BUỘC: HÀM

Dưới đây là các bài giải chi tiết, sử dụng ngôn ngữ C++. Các đoạn code được viết đơn giản và có chú thích rõ ràng dành cho người mới bắt đầu học lập trình.

## Bài 1: Viết chương trình tính tổng các số nguyên tố nhỏ hơn số nguyên dương n

```cpp
#include <iostream>
#include <math.h>
using namespace std;

// Hàm kiểm tra một số có phải là số nguyên tố hay không
bool kiemTraNguyenTo(int so) {
    if (so < 2) return false; // Các số nhỏ hơn 2 không phải là số nguyên tố
    // Chỉ cần kiểm tra đến căn bậc 2 của số đó để tiết kiệm thời gian chạy
    for (int i = 2; i <= sqrt(so); i++) {
        if (so % i == 0) {
            return false; // Nếu chia hết cho một số bất kỳ thì không phải số nguyên tố
        }
    }
    return true; // Nếu qua được vòng lặp thì là số nguyên tố
}

int main() {
    int n;
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;

    int tong = 0;
    // Duyệt tất cả các số từ 2 đến nhỏ hơn n
    for (int i = 2; i < n; i++) {
        if (kiemTraNguyenTo(i)) {
            tong += i; // Nếu là số nguyên tố thì cộng dồn vào tổng
        }
    }

    cout << "Tong cac so nguyen to nho hon " << n << " la: " << tong << endl;
    return 0;
}
```

## Bài 2: Viết hàm tìm ước số chung lớn nhất và bội số chung nhỏ nhất của 2 số nguyên dương a và b

```cpp
#include <iostream>
using namespace std;

// Hàm tìm Ước Chung Lớn Nhất (UCLN) bằng thuật toán Euclid
int timUCLN(int a, int b) {
    // Vòng lặp chạy cho đến khi phần dư (b) bằng 0
    while (b != 0) {
        int r = a % b; // Tính phần dư
        a = b;         // Gán b cho a
        b = r;         // Gán phần dư cho b
    }
    return a; // Khi b = 0 thì a chính là UCLN
}

// Hàm tìm Bội Chung Nhỏ Nhất (BCNN)
// Công thức: BCNN(a, b) = (a * b) / UCLN(a, b)
int timBCNN(int a, int b) {
    return (a * b) / timUCLN(a, b);
}

int main() {
    int a, b;
    cout << "Nhap 2 so nguyen duong a, b: ";
    cin >> a >> b;

    cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << timUCLN(a, b) << endl;
    cout << "Boi chung nho nhat cua " << a << " va " << b << " la: " << timBCNN(a, b) << endl;

    return 0;
}
```

## Bài 3: Viết hàm trả về giá trị nhỏ nhất của 4 số nguyên

```cpp
#include <iostream>
using namespace std;

// Hàm tìm số nhỏ nhất trong 4 số
int timNhoNhat(int a, int b, int c, int d) {
    int min_val = a; // Giả sử a là số nhỏ nhất

    // Lần lượt so sánh min_val với các số còn lại, nếu có số nhỏ hơn thì cập nhật lại min_val
    if (b < min_val) min_val = b;
    if (c < min_val) min_val = c;
    if (d < min_val) min_val = d;

    return min_val;
}

int main() {
    int a, b, c, d;
    cout << "Nhap 4 so nguyen: ";
    cin >> a >> b >> c >> d;

    cout << "Gia tri nho nhat la: " << timNhoNhat(a, b, c, d) << endl;

    return 0;
}
```

## Bài 4: Viết chương trình giải phương trình bậc 2 Ax^2 + Bx + C = 0 (sử dụng hàm tính delta)

```cpp
#include <iostream>
#include <math.h>
using namespace std;

// Hàm tính delta = b^2 - 4ac
float tinhDelta(float a, float b, float c) {
    return b * b - 4 * a * c;
}

int main() {
    float a, b, c;
    cout << "Nhap he so A, B, C: ";
    cin >> a >> b >> c;

    if (a == 0) {
        // Nếu A = 0 thì phương trình trở thành phương trình bậc 1: Bx + C = 0
        if (b == 0) {
            if (c == 0) cout << "Phuong trinh co vo so nghiem" << endl;
            else cout << "Phuong trinh vo nghiem" << endl;
        } else {
            cout << "Phuong trinh co 1 nghiem duy nhat x = " << -c / b << endl;
        }
    } else {
        // Nếu A != 0, tính delta
        float delta = tinhDelta(a, b, c);

        if (delta < 0) {
            cout << "Phuong trinh vo nghiem" << endl;
        } else if (delta == 0) {
            cout << "Phuong trinh co nghiem kep x1 = x2 = " << -b / (2 * a) << endl;
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Phuong trinh co 2 nghiem phan biet:" << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }

    return 0;
}
```

## Bài 5: Viết chương trình xác định tính chất của 1 tam giác dựa trên tọa độ 3 đỉnh

```cpp
#include <iostream>
#include <math.h>
using namespace std;

// Hàm tính khoảng cách giữa 2 điểm A(xA, yA) và B(xB, yB)
float tinhKhoangCach(float xA, float yA, float xB, float yB) {
    // Công thức: d = can_bac_hai((xA - xB)^2 + (yA - yB)^2)
    return sqrt(pow(xA - xB, 2) + pow(yA - yB, 2));
}

int main() {
    float xA, yA, xB, yB, xC, yC;
    cout << "Nhap toa do diem A (x, y): "; cin >> xA >> yA;
    cout << "Nhap toa do diem B (x, y): "; cin >> xB >> yB;
    cout << "Nhap toa do diem C (x, y): "; cin >> xC >> yC;

    // Tính độ dài 3 cạnh của tam giác
    float a = tinhKhoangCach(xB, yB, xC, yC); // cạnh BC
    float b = tinhKhoangCach(xA, yA, xC, yC); // cạnh AC
    float c = tinhKhoangCach(xA, yA, xB, yB); // cạnh AB

    // Kiểm tra xem 3 điểm có tạo thành tam giác không (Tổng 2 cạnh phải lớn hơn cạnh còn lại)
    if (a + b > c && a + c > b && b + c > a) {
        // Dùng sai số nhỏ do kiểu float có thể làm tính toán không chính xác tuyệt đối
        float epsilon = 0.0001; 

        bool vuong = abs(a*a + b*b - c*c) < epsilon || abs(a*a + c*c - b*b) < epsilon || abs(b*b + c*c - a*a) < epsilon;
        bool can = abs(a - b) < epsilon || abs(a - c) < epsilon || abs(b - c) < epsilon;
        bool deu = abs(a - b) < epsilon && abs(a - c) < epsilon;

        if (deu) {
            cout << "Day la tam giac deu." << endl;
        } else if (vuong && can) {
            cout << "Day la tam giac vuong can." << endl;
        } else if (vuong) {
            cout << "Day la tam giac vuong." << endl;
        } else if (can) {
            cout << "Day la tam giac can." << endl;
        } else {
            cout << "Day la tam giac thuong." << endl;
        }
    } else {
        cout << "3 diem nay khong tao thanh tam giac." << endl;
    }

    return 0;
}
```

## Bài 6: Viết hàm nhập 3 số a,b,c. Kiểm tra xem tam giác tạo thành là tam giác gì?

*(Tương tự logic của Bài 5 nhưng nhận trực tiếp 3 độ dài cạnh)*

```cpp
#include <iostream>
using namespace std;

// Hàm kiểm tra tính chất tam giác
void kiemTraTamGiac(float a, float b, float c) {
    // Điều kiện để tạo thành tam giác: Tổng 2 cạnh luôn lớn hơn cạnh còn lại
    if (a + b > c && a + c > b && b + c > a) {
        // Kiểm tra tam giác đều: 3 cạnh bằng nhau
        if (a == b && b == c) {
            cout << "Day la tam giac deu." << endl;
        } 
        // Kiểm tra tam giác vuông cân: vừa vuông vừa cân
        else if ((a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) && 
                 (a == b || a == c || b == c)) {
            cout << "Day la tam giac vuong can." << endl;
        } 
        // Kiểm tra tam giác vuông: Định lý Pytago
        else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
            cout << "Day la tam giac vuong." << endl;
        } 
        // Kiểm tra tam giác cân: có 2 cạnh bằng nhau
        else if (a == b || a == c || b == c) {
            cout << "Day la tam giac can." << endl;
        } 
        // Còn lại là tam giác thường
        else {
            cout << "Day la tam giac thuong." << endl;
        }
    } else {
        cout << "3 so nhap vao khong tao thanh tam giac." << endl;
    }
}

int main() {
    float a, b, c;
    cout << "Nhap 3 so a, b, c (chieu dai 3 canh): ";
    cin >> a >> b >> c;
    
    kiemTraTamGiac(a, b, c);
    
    return 0;
}
```

## Bài 7: Viết hàm xử lý ngày tháng năm

```cpp
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
```

## Bài 8: Viết hàm nhập vào số có hai chữ số, in ra cách đọc của số đó

```cpp
#include <iostream>
using namespace std;

// Hàm in ra cách đọc của số có 2 chữ số
void docSoHaiChuSo(int n) {
    if (n < 10 || n > 99) {
        cout << "Vui long nhap so co 2 chu so!" << endl;
        return;
    }

    int hangChuc = n / 10;   // Lấy chữ số hàng chục
    int hangDonVi = n % 10;  // Lấy chữ số hàng đơn vị

    // Đọc hàng chục
    switch (hangChuc) {
        case 1: cout << "Muoi "; break;
        case 2: cout << "Hai muoi "; break;
        case 3: cout << "Ba muoi "; break;
        case 4: cout << "Bon muoi "; break;
        case 5: cout << "Nam muoi "; break;
        case 6: cout << "Sau muoi "; break;
        case 7: cout << "Bay muoi "; break;
        case 8: cout << "Tam muoi "; break;
        case 9: cout << "Chin muoi "; break;
    }

    // Đọc hàng đơn vị
    switch (hangDonVi) {
        case 1: 
            if (hangChuc == 1) cout << "mot"; // Ví dụ: 11 (mười một)
            else cout << "mot";              // Ví dụ: 21 (hai mươi mốt) - Có thể in là 'mot' hoặc 'mốt'
            break;
        case 2: cout << "hai"; break;
        case 3: cout << "ba"; break;
        case 4: 
            if (hangChuc == 1) cout << "bon"; 
            else cout << "tu"; // Ví dụ 24 là hai mươi tư
            break;
        case 5: 
            if (hangChuc == 1) cout << "lam"; // 15 là mười lăm
            else cout << "lam";               // 25 là hai mươi lăm
            break;
        case 6: cout << "sau"; break;
        case 7: cout << "bay"; break;
        case 8: cout << "tam"; break;
        case 9: cout << "chin"; break;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap vao so co 2 chu so: ";
    cin >> n;
    
    cout << "Cach doc so " << n << " la: ";
    docSoHaiChuSo(n);

    return 0;
}
```
