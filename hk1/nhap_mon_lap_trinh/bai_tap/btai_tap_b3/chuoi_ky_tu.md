# BÀI TẬP BẮT BUỘC: CHUỖI KÝ TỰ

Dưới đây là các bài giải mẫu cho phần chuỗi ký tự. Các đoạn code được viết bằng C++ cơ bản, sử dụng mảng ký tự `char[]` (C-style string) kết hợp với thư viện `<string.h>`.

```cpp
#include <iostream>
#include <string.h> // Hỗ trợ xử lý chuỗi (strlen, strcpy...)
using namespace std;

// 1. Kiểm tra chuỗi đối xứng (1: đối xứng, 0: không)
int kiemTraDoiXung(char s[]) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) { // So sánh 2 đầu
            return 0; // Sai khác -> không đối xứng
        }
    }
    return 1; // Khớp hoàn toàn -> đối xứng
}

// 2. Tính độ dài chuỗi (không dùng strlen)
int tinhDoDaiChuoi(char s[]) {
    int count = 0;
    while (s[count] != '\0') { // Đếm tới ký tự kết thúc chuỗi '\0'
        count++;
    }
    return count;
}

// 3. Đảo ngược chuỗi
void daoNguocChuoi(char s[]) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        char temp = s[i]; // Hoán đổi 2 ký tự đối xứng
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
}

// 4 & 5. Tìm vị trí đầu tiên của ký tự c
int timViTriKyTu(char s[], char c) {
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] == c) return i; // Trả về index đầu tiên
    }
    return -1; // Không tìm thấy
}

// 6. Tìm chuỗi con (Trả về vị trí bắt đầu hoặc -1)
int timChuoiCon(char s[], char sub[]) {
    int lenS = strlen(s), lenSub = strlen(sub);
    if (lenSub > lenS) return -1;
    
    for (int i = 0; i <= lenS - lenSub; i++) {
        int j;
        for (j = 0; j < lenSub; j++) {
            if (s[i + j] != sub[j]) break; // Ký tự lệch -> thử vị trí tiếp
        }
        if (j == lenSub) return i; // Khớp toàn bộ chuỗi con
    }
    return -1;
}

// 7 & 9. Thay thế ký tự c1 bằng c2
void thayTheKyTu(char s[], char c1, char c2) {
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] == c1) s[i] = c2; // Gán ký tự mới
    }
}

// 8. Đếm số lần xuất hiện của ký tự c
int demKyTu(char s[], char c) {
    int count = 0, len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] == c) count++; // Tăng đếm nếu khớp
    }
    return count;
}

// 10. Xuất các ký tự in hoa
void xuatKyTuInHoa(char s[]) {
    int len = strlen(s);
    cout << "Ky tu in hoa: ";
    for (int i = 0; i < len; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') cout << s[i] << " "; // Theo bảng mã ASCII
    }
    cout << endl;
}

// 11. Đổi chữ xen kẽ (hoa, thường)
void doiChuXenKe(char s[]) {
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (i % 2 == 0) {
            if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32; // Thành chữ hoa
        } else {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32; // Thành chữ thường
        }
    }
}

// 12. Tìm ký tự xuất hiện nhiều nhất
char timKyTuXuatHienNhieuNhat(char s[]) {
    int dem[256] = {0}; // Mảng đếm tần suất theo mã ASCII
    int len = strlen(s);
    for (int i = 0; i < len; i++) dem[(unsigned char)s[i]]++; // Tăng số đếm
    
    int maxCount = 0; char maxChar = s[0];
    for (int i = 0; i < 256; i++) {
        if (dem[i] > maxCount) {
            maxCount = dem[i];
            maxChar = (char)i; // Cập nhật ký tự xuất hiện nhiều nhất
        }
    }
    return maxChar;
}

// 13. Xoá từ trong chuỗi
void xoaTuTrongChuoi(char s[], char tuCanXoa[]) {
    int pos = timChuoiCon(s, tuCanXoa); // Dùng lại hàm bài 6
    if (pos != -1) {
        int lenS = strlen(s), lenTu = strlen(tuCanXoa);
        for (int i = pos; i <= lenS - lenTu; i++) {
            s[i] = s[i + lenTu]; // Dịch dồn các ký tự lên để xoá
        }
    }
}

int main() {
    char s[100] = "abcdcba";
    cout << "Kiem tra doi xung cua abcdcba: " << kiemTraDoiXung(s) << endl;
    return 0;
}
```
