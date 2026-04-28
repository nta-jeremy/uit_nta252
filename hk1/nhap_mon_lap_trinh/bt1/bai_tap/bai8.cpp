/*
 * Chuong trinh kiem tra nam nhuan.
 */
#include <iostream>
using namespace std;

int main() {
    // Khai bao bien nam
    int nam;
    
    // Nhap nam can kiem tra
    cout << "Nhap nam: ";
    cin >> nam;
    
    // Dieu kien nam nhuan: Chia het cho 400 HOAC (Chia het cho 4 va KHONG chia het cho 100)
    if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
        cout << nam << " la nam nhuan" << endl;
    } else {
        cout << nam << " khong phai la nam nhuan" << endl;
    }
    
    return 0;
}
