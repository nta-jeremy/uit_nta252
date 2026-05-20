/*
 * Chuong trinh kiem tra xem mot so co dong thoi chia het cho ca 3 va 5 hay khong.
 */
#include <iostream>
using namespace std;

int main() {
    // Khai bao so nguyen n
    int n;
    
    // Nhap n tu ban phim
    cout << "Nhap n: ";
    cin >> n;
    
    // Kiem tra dieu kien chia het cho ca 3 va 5
    if (n % 3 == 0 && n % 5 == 0) {
        cout << n << " chia het cho ca 3 va 5" << endl;
    } else {
        cout << n << " khong chia het cho ca 3 va 5 cung luc" << endl;
    }
    
    return 0;
}
