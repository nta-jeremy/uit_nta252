/*
 * Chuong trinh kiem tra mot so nguyen co phai la so nguyen to hay khong.
 */
#include <iostream>
using namespace std;

int main() {
    // Khai bao so nguyen n
    int n;
    
    // Nhap n tu ban phim
    cout << "Nhap n: ";
    cin >> n;
    
    // So nguyen to la so lon hon 1 va chi chia het cho 1 va chinh no
    if (n < 2) {
        cout << n << " khong phai la so nguyen to" << endl;
    } else {
        bool laSNT = true;
        // Kiem tra xem n co chia het cho so nao tu 2 den n/2 khong
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                laSNT = false; // Neu chia het thi khong phai so nguyen to
                break;
            }
        }
        
        // In ket qua
        if (laSNT) {
            cout << n << " la so nguyen to" << endl;
        } else {
            cout << n << " khong phai la so nguyen to" << endl;
        }
    }
    
    return 0;
}
