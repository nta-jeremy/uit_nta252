# Giải bài tập thực hành buổi số 1 - Nhập môn lập trình C++

Dưới đây là lời giải cho tất cả 27 bài tập thực hành. Code được viết theo cách đơn giản, dễ hiểu nhất dành cho người mới bắt đầu học C++.

## 1. Tính tổng, hiệu, tích, thương và tổng bình phương của 2 số
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;
    
    cout << "Tong: " << a + b << endl;
    cout << "Hieu: " << a - b << endl;
    cout << "Tich: " << a * b << endl;
    if (b != 0) {
        cout << "Thuong: " << (float)a / b << endl;
    } else {
        cout << "Khong the chia cho 0" << endl;
    }
    cout << "Tong binh phuong: " << (a * a) + (b * b) << endl;
    
    return 0;
}
```

## 2. Tính chu vi và diện tích hình tròn
```cpp
#include <iostream>
using namespace std;

int main() {
    float r;
    float PI = 3.14159;
    cout << "Nhap ban kinh r: ";
    cin >> r;
    
    cout << "Chu vi: " << 2 * PI * r << endl;
    cout << "Dien tich: " << PI * r * r << endl;
    
    return 0;
}
```

## 3. Tính điểm trung bình 3 môn
```cpp
#include <iostream>
using namespace std;

int main() {
    float toan, ly, hoa;
    cout << "Nhap diem Toan, Ly, Hoa: ";
    cin >> toan >> ly >> hoa;
    
    float dtb = (toan + ly + hoa) / 3;
    cout << "Diem trung binh: " << dtb << endl;
    
    return 0;
}
```

## 4. Tách các chữ số của số có 3 chữ số
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so nguyen co 3 chu so (100-999): ";
    cin >> n;
    
    int tram = n / 100;
    int chuc = (n / 10) % 10;
    int donVi = n % 10;
    
    cout << "Hang tram: " << tram << endl;
    cout << "Hang chuc: " << chuc << endl;
    cout << "Hang don vi: " << donVi << endl;
    
    return 0;
}
```

## 5. Giải phương trình bậc nhất ax + b = 0
```cpp
#include <iostream>
using namespace std;

int main() {
    float a, b;
    cout << "Nhap a va b: ";
    cin >> a >> b;
    
    if (a == 0) {
        if (b == 0) {
            cout << "Phuong trinh co vo so nghiem" << endl;
        } else {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    } else {
        cout << "Phuong trinh co nghiem x = " << -b / a << endl;
    }
    
    return 0;
}
```

## 6. Giải phương trình bậc hai ax^2 + bx + c = 0
```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;
    
    if (a == 0) {
        // Giai phuong trinh bac 1: bx + c = 0
        if (b == 0) {
            if (c == 0) cout << "Phuong trinh vo so nghiem" << endl;
            else cout << "Phuong trinh vo nghiem" << endl;
        } else {
            cout << "Nghiem x = " << -c / b << endl;
        }
    } else {
        float delta = b * b - 4 * a * c;
        if (delta < 0) {
            cout << "Phuong trinh vo nghiem" << endl;
        } else if (delta == 0) {
            cout << "Phuong trinh co nghiem kep x1 = x2 = " << -b / (2 * a) << endl;
        } else {
            cout << "Phuong trinh co 2 nghiem phan biet: " << endl;
            cout << "x1 = " << (-b + sqrt(delta)) / (2 * a) << endl;
            cout << "x2 = " << (-b - sqrt(delta)) / (2 * a) << endl;
        }
    }
    
    return 0;
}
```

## 7. Kiểm tra số nguyên tố
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    
    if (n < 2) {
        cout << n << " khong phai la so nguyen to" << endl;
    } else {
        bool laSNT = true;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                laSNT = false;
                break;
            }
        }
        if (laSNT) {
            cout << n << " la so nguyen to" << endl;
        } else {
            cout << n << " khong phai la so nguyen to" << endl;
        }
    }
    
    return 0;
}
```

## 8. Kiểm tra năm nhuận
```cpp
#include <iostream>
using namespace std;

int main() {
    int nam;
    cout << "Nhap nam: ";
    cin >> nam;
    
    if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
        cout << nam << " la nam nhuan" << endl;
    } else {
        cout << nam << " khong phai la nam nhuan" << endl;
    }
    
    return 0;
}
```

## 9. Kiểm tra số chia hết cho 3 và 5
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    
    if (n % 3 == 0 && n % 5 == 0) {
        cout << n << " chia het cho ca 3 va 5" << endl;
    } else {
        cout << n << " khong chia het cho ca 3 va 5 cung luc" << endl;
    }
    
    return 0;
}
```

## 10. Kiểm tra loại ký tự
```cpp
#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Nhap mot ky tu: ";
    cin >> c;
    
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        cout << "Day la chu cai" << endl;
    } else if (c >= '0' && c <= '9') {
        cout << "Day la chu so" << endl;
    } else {
        cout << "Day la ky tu dac biet" << endl;
    }
    
    return 0;
}
```

## 11. Kiểm tra 3 cạnh tam giác
```cpp
#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Nhap 3 canh a, b, c: ";
    cin >> a >> b >> c;
    
    if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0) {
        cout << "Day la 3 canh cua mot tam giac hop le" << endl;
    } else {
        cout << "Day khong phai la 3 canh cua mot tam giac" << endl;
    }
    
    return 0;
}
```

## 12. Tính các biểu thức với n > 0
```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    float x;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    
    // a) S = 1+2+...+n
    int S_a = 0;
    for (int i = 1; i <= n; i++) {
        S_a += i;
    }
    cout << "a) S = " << S_a << endl;
    
    // b) S = 1 + 1/3 + 1/5 + ... + 1/(2n+1)
    float S_b = 0;
    for (int i = 0; i <= n; i++) {
        S_b += 1.0 / (2 * i + 1);
    }
    cout << "b) S = " << S_b << endl;
    
    // c) S = 1/(1*2) + 1/(2*3) + ... + 1/(n*(n+1))
    float S_c = 0;
    for (int i = 1; i <= n; i++) {
        S_c += 1.0 / (i * (i + 1));
    }
    cout << "c) S = " << S_c << endl;
    
    // d) S=x+x^2/(1+2)+x^3/(1+2+3)...+x^n/(1+2+3...+n)
    cout << "Nhap x cho cau d: ";
    cin >> x;
    float S_d = 0;
    int tong_mau = 0;
    for (int i = 1; i <= n; i++) {
        tong_mau += i;
        S_d += pow(x, i) / tong_mau;
    }
    cout << "d) S = " << S_d << endl;
    
    return 0;
}
```

## 13. Tính tổng các chữ số của số nguyên dương n
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    
    int tong = 0;
    int temp = n;
    while (temp > 0) {
        tong += temp % 10;
        temp /= 10;
    }
    
    cout << "Tong cac chu so cua " << n << " la: " << tong << endl;
    
    return 0;
}
```

## 14. Tìm số lớn nhất trong 3 số
```cpp
#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;
    
    float max_val = a;
    if (b > max_val) max_val = b;
    if (c > max_val) max_val = c;
    
    cout << "So lon nhat la: " << max_val << endl;
    
    return 0;
}
```

## 15. Tính tuổi
```cpp
#include <iostream>
using namespace std;

int main() {
    int namSinh;
    int namHienTai = 2024; // Thay đổi theo năm thực tế
    cout << "Nhap nam sinh: ";
    cin >> namSinh;
    
    if (namSinh > namHienTai) {
        cout << "Nam sinh khong hop le!" << endl;
    } else {
        cout << "Tuoi cua ban la: " << namHienTai - namSinh << endl;
    }
    
    return 0;
}
```

## 16. Tính tiền và thuế VAT
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string tenSP;
    int soLuong;
    float donGia;
    
    cout << "Nhap ten san pham: ";
    // Sử dụng cin.ignore() nếu phía trước có lệnh cin khác để xoá bộ nhớ đệm
    getline(cin, tenSP); 
    cout << "Nhap so luong: ";
    cin >> soLuong;
    cout << "Nhap don gia: ";
    cin >> donGia;
    
    float tien = soLuong * donGia;
    float thue = 0.10 * tien;
    
    cout << "San pham: " << tenSP << endl;
    cout << "Tien phai tra (chua thue): " << tien << endl;
    cout << "Thue VAT (10%): " << thue << endl;
    cout << "Tong cong: " << tien + thue << endl;
    
    return 0;
}
```

## 17. Tính lương nhân viên
```cpp
#include <iostream>
using namespace std;

int main() {
    int tnct;
    float heSo;
    long luongCoBan = 2340000;
    
    cout << "Nhap tham nien cong tac (so thang): ";
    cin >> tnct;
    
    if (tnct < 12) {
        heSo = 1.92;
    } else if (tnct < 36) {
        heSo = 2.34;
    } else if (tnct < 60) {
        heSo = 3.0;
    } else {
        heSo = 4.5;
    }
    
    long luong = heSo * luongCoBan;
    cout << "He so luong: " << heSo << endl;
    cout << "Tien luong: " << luong << " VND" << endl;
    
    return 0;
}
```

## 18. Tính tiền Karaoke
```cpp
#include <iostream>
using namespace std;

int main() {
    int gioBatDau, gioKetThuc;
    cout << "Nhap gio bat dau (>= 8) va gio ket thuc (<= 24): ";
    cin >> gioBatDau >> gioKetThuc;
    
    if (gioBatDau >= 8 && gioKetThuc <= 24 && gioBatDau < gioKetThuc) {
        int soGioThue = gioKetThuc - gioBatDau;
        float tien = 0;
        
        if (soGioThue <= 3) {
            tien = soGioThue * 30000;
        } else {
            tien = 3 * 30000 + (soGioThue - 3) * 30000 * 0.7; // Giảm 30% cho các giờ sau
        }
        
        // Giảm giá 10% nếu thời gian thuê bắt đầu từ 8 - 17 giờ
        if (gioBatDau >= 8 && gioBatDau <= 17) {
            tien = tien * 0.9;
        }
        
        cout << "So tien phai tra la: " << (long)tien << " VND" << endl;
    } else {
        cout << "Gio nhap khong hop le!" << endl;
    }
    
    return 0;
}
```

## 19. Xử lý ngày tháng năm hiện tại
```cpp
#include <iostream>
using namespace std;

int main() {
    int ngay, thang, nam = 2024; 
    cout << "Nhap ngay, thang: ";
    cin >> ngay >> thang;
    
    int soNgayTrongThang = 31;
    bool hopLe = true;
    
    if (thang < 1 || thang > 12) {
        hopLe = false;
    } else {
        switch (thang) {
            case 4: case 6: case 9: case 11:
                soNgayTrongThang = 30;
                break;
            case 2:
                if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
                    soNgayTrongThang = 29;
                } else {
                    soNgayTrongThang = 28;
                }
                break;
        }
        if (ngay < 1 || ngay > soNgayTrongThang) {
            hopLe = false;
        }
    }
    
    if (!hopLe) {
        cout << "Ngay thang khong hop le!" << endl;
    } else {
        cout << "Ngay thang hop le." << endl;
        
        // Tính quý
        int quy = (thang - 1) / 3 + 1;
        cout << "Thang " << thang << " thuoc quy " << quy << endl;
        
        // Số ngày
        cout << "Thang " << thang << " co " << soNgayTrongThang << " ngay." << endl;
        
        // Ngày hôm sau
        int ngaySau = ngay + 1;
        int thangSau = thang;
        if (ngaySau > soNgayTrongThang) {
            ngaySau = 1;
            thangSau++;
            if (thangSau > 12) thangSau = 1;
        }
        cout << "Ngay hom sau la: " << ngaySau << "/" << thangSau << "/" << nam << endl;
        
        // Ngày hôm trước
        int ngayTruoc = ngay - 1;
        int thangTruoc = thang;
        if (ngayTruoc < 1) {
            thangTruoc--;
            if (thangTruoc < 1) thangTruoc = 12;
            
            // Tìm số ngày của tháng trước
            int soNgayThangTruoc = 31;
            switch (thangTruoc) {
                case 4: case 6: case 9: case 11:
                    soNgayThangTruoc = 30; break;
                case 2:
                    if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) soNgayThangTruoc = 29;
                    else soNgayThangTruoc = 28;
                    break;
            }
            ngayTruoc = soNgayThangTruoc;
        }
        cout << "Ngay hom truoc la: " << ngayTruoc << "/" << thangTruoc << "/" << nam << endl;
    }
    
    return 0;
}
```

## 20. Đổi tiền
```cpp
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Nhap vao so tien N (ngan dong): ";
    cin >> N;
    
    int t500 = 0, t200 = 0, t100 = 0, t50 = 0, t20 = 0, t10 = 0, t5 = 0, t2 = 0, t1 = 0;
    
    t500 = N / 500; N = N % 500;
    t200 = N / 200; N = N % 200;
    t100 = N / 100; N = N % 100;
    t50 = N / 50;   N = N % 50;
    t20 = N / 20;   N = N % 20;
    t10 = N / 10;   N = N % 10;
    t5 = N / 5;     N = N % 5;
    t2 = N / 2;     N = N % 2;
    t1 = N;
    
    cout << "Chi tiet doi tien: " << endl;
    if (t500 > 0) cout << t500 << " to 500k" << endl;
    if (t200 > 0) cout << t200 << " to 200k" << endl;
    if (t100 > 0) cout << t100 << " to 100k" << endl;
    if (t50 > 0)  cout << t50 << " to 50k" << endl;
    if (t20 > 0)  cout << t20 << " to 20k" << endl;
    if (t10 > 0)  cout << t10 << " to 10k" << endl;
    if (t5 > 0)   cout << t5 << " to 5k" << endl;
    if (t2 > 0)   cout << t2 << " to 2k" << endl;
    if (t1 > 0)   cout << t1 << " to 1k" << endl;
    
    return 0;
}
```

## 21. Số nút của xe 4 số
```cpp
#include <iostream>
using namespace std;

int main() {
    int bienSo;
    cout << "Nhap bien so xe (gom 4 chu so): ";
    cin >> bienSo;
    
    int tong = 0;
    int temp = bienSo;
    
    tong += temp % 10; temp /= 10;
    tong += temp % 10; temp /= 10;
    tong += temp % 10; temp /= 10;
    tong += temp % 10;
    
    int soNut = tong % 10;
    cout << "Xe cua ban duoc " << soNut << " nut." << endl;
    
    return 0;
}
```

## 22. Tính tiền điện
```cpp
#include <iostream>
using namespace std;

int main() {
    int kwh;
    cout << "Nhap so Kwh tieu thu: ";
    cin >> kwh;
    
    long tienDien = 0;
    
    if (kwh <= 100) {
        tienDien = kwh * 600;
    } else if (kwh <= 150) {
        tienDien = 100 * 600 + (kwh - 100) * 700;
    } else if (kwh <= 200) {
        tienDien = 100 * 600 + 50 * 700 + (kwh - 150) * 900;
    } else {
        tienDien = 100 * 600 + 50 * 700 + 50 * 900 + (kwh - 200) * 1100;
    }
    
    cout << "So tien dien phai tra la: " << tienDien << " VND" << endl;
    
    return 0;
}
```

## 23. Nhập số từ 1 đến 7, in thứ trong tuần
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so tu 1 den 7: ";
    cin >> n;
    
    switch (n) {
        case 1: cout << "Chu Nhat" << endl; break;
        case 2: cout << "Thu Hai" << endl; break;
        case 3: cout << "Thu Ba" << endl; break;
        case 4: cout << "Thu Tu" << endl; break;
        case 5: cout << "Thu Nam" << endl; break;
        case 6: cout << "Thu Sau" << endl; break;
        case 7: cout << "Thu Bay" << endl; break;
        default: cout << "So khong hop le!" << endl;
    }
    
    return 0;
}
```

## 24. Nhập một tháng in ra số ngày
```cpp
#include <iostream>
using namespace std;

int main() {
    int thang;
    cout << "Nhap vao mot thang (1-12): ";
    cin >> thang;
    
    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "Thang nay co 31 ngay." << endl;
            break;
        case 4: case 6: case 9: case 11:
            cout << "Thang nay co 30 ngay." << endl;
            break;
        case 2:
            cout << "Thang nay co 28 hoac 29 ngay (neu la nam nhuan)." << endl;
            break;
        default:
            cout << "Thang khong hop le!" << endl;
    }
    
    return 0;
}
```

## 25. Kiểm tra chẵn lẻ bằng switch...case
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;
    
    switch (n % 2) {
        case 0: 
            cout << n << " la so chan." << endl; 
            break;
        case 1:
        case -1: // Xử lý trường hợp số âm lẻ
            cout << n << " la so le." << endl; 
            break;
    }
    
    return 0;
}
```

## 26. Máy tính đơn giản bằng switch...case
```cpp
#include <iostream>
using namespace std;

int main() {
    float a, b;
    char phepToan;
    
    cout << "Nhap so thu 1: "; cin >> a;
    cout << "Nhap phep toan (+, -, *, /): "; cin >> phepToan;
    cout << "Nhap so thu 2: "; cin >> b;
    
    switch (phepToan) {
        case '+': cout << "Ket qua: " << a + b << endl; break;
        case '-': cout << "Ket qua: " << a - b << endl; break;
        case '*': cout << "Ket qua: " << a * b << endl; break;
        case '/': 
            if (b != 0) cout << "Ket qua: " << a / b << endl;
            else cout << "Khong the chia cho 0!" << endl;
            break;
        default: cout << "Phep toan khong hop le!" << endl;
    }
    
    return 0;
}
```

## 27. Menu nhà hàng
```cpp
#include <iostream>
using namespace std;

int main() {
    int luaChon;
    
    cout << "===== MENU NHA HANG =====" << endl;
    cout << "1. Pho bo" << endl;
    cout << "2. Bun cha" << endl;
    cout << "3. Banh mi" << endl;
    cout << "4. Com tam" << endl;
    cout << "Vui long chon mon (1-4): ";
    cin >> luaChon;
    
    switch (luaChon) {
        case 1: cout << "Ban da chon Pho bo. Gia: 40,000 VND" << endl; break;
        case 2: cout << "Ban da chon Bun cha. Gia: 35,000 VND" << endl; break;
        case 3: cout << "Ban da chon Banh mi. Gia: 20,000 VND" << endl; break;
        case 4: cout << "Ban da chon Com tam. Gia: 45,000 VND" << endl; break;
        default: cout << "Lua chon khong hop le. Vui long chon lai." << endl;
    }
    
    return 0;
}
```
