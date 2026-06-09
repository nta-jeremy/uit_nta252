#include <iostream>
#include <string.h>
using namespace std;

// Hàm tìm vị trí xuất hiện đầu tiên của chuỗi con (sub) trong chuỗi mẹ (s)
// Đầu vào: chuỗi mẹ s, chuỗi con sub cần tìm
// Đầu ra: vị trí (index) đầu tiên của sub trong s, hoặc -1 nếu không có
int timChuoiCon(char s[], char sub[]) {
    int lenS = strlen(s), lenSub = strlen(sub); // Lấy độ dài hai chuỗi
    
    // Nếu chuỗi con dài hơn chuỗi mẹ thì chắc chắn không thể là chuỗi con
    if (lenSub > lenS) return -1;
    
    // Duyệt chuỗi mẹ s. Chỉ cần duyệt đến vị trí (lenS - lenSub)
    // vì nếu phần còn lại của s ngắn hơn sub thì không thể chứa sub.
    for (int i = 0; i <= lenS - lenSub; i++) {
        int j;
        // Kiểm tra xem chuỗi con sub có khớp với đoạn cắt từ vị trí i của chuỗi s không
        for (j = 0; j < lenSub; j++) {
            // Nếu có một ký tự không khớp thì dừng vòng lặp kiểm tra này ngay (break)
            if (s[i + j] != sub[j]) break;
        }
        // Nếu vòng lặp trên chạy trọn vẹn (j == lenSub), nghĩa là tất cả ký tự đều khớp
        if (j == lenSub) return i; // Trả về vị trí bắt đầu khớp (i)
    }
    return -1; // Duyệt hết mà không tìm thấy
}

int main() {
    char s[100], sub[100];
    cin.getline(s, 100);   // Nhập chuỗi mẹ s
    cin.getline(sub, 100); // Nhập chuỗi con sub
    // In ra kết quả
    cout << timChuoiCon(s, sub) << endl;
    return 0;
}
