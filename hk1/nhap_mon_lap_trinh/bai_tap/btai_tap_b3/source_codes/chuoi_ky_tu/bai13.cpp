#include <iostream>
#include <string.h>
using namespace std;

// Hàm tìm vị trí đầu tiên của chuỗi con (hàm này được tái sử dụng từ bài 6)
int timChuoiCon(char s[], char sub[]) {
    int lenS = strlen(s), lenSub = strlen(sub);
    if (lenSub > lenS) return -1;
    
    for (int i = 0; i <= lenS - lenSub; i++) {
        int j;
        for (j = 0; j < lenSub; j++) {
            if (s[i + j] != sub[j]) break;
        }
        if (j == lenSub) return i; // Trả về vị trí nếu khớp hoàn toàn
    }
    return -1;
}

// Hàm xóa sự xuất hiện ĐẦU TIÊN của một từ (chuỗi con) trong chuỗi mẹ
// Đầu vào: chuỗi mẹ s, chuỗi con cần xóa (tuCanXoa)
void xoaTuTrongChuoi(char s[], char tuCanXoa[]) {
    // Tìm vị trí xuất hiện của chuỗi con trong chuỗi mẹ
    int pos = timChuoiCon(s, tuCanXoa);
    
    // Nếu tìm thấy (pos khác -1)
    if (pos != -1) {
        int lenS = strlen(s), lenTu = strlen(tuCanXoa);
        
        // Thực hiện dồn các ký tự phía sau của chuỗi mẹ lên phía trước 
        // để lấp đi khoảng trống của chuỗi con bị xóa
        // Duyệt từ vị trí tìm thấy (pos) đến cuối (có trừ đi phần tử dư)
        for (int i = pos; i <= lenS - lenTu; i++) {
            s[i] = s[i + lenTu]; // Chép đè ký tự phía sau lên vị trí i
        }
    }
}

int main() {
    char s[100], tuCanXoa[100];
    cin.getline(s, 100);       // Nhập chuỗi mẹ
    cin.getline(tuCanXoa, 100); // Nhập chuỗi con cần xóa
    
    xoaTuTrongChuoi(s, tuCanXoa); // Gọi hàm xóa
    cout << s << endl;            // In chuỗi s sau khi bị xóa
    return 0;
}
