/*
 * Chuong trinh tinh tien dien luy tien theo muc tieu thu (Kwh).
 */
#include <iostream>
using namespace std;

int main() {
    int kwh;
    cout << "Nhap so Kwh tieu thu: ";
    cin >> kwh;
    
    long tienDien = 0;
    
    // Tinh tien dien theo cac bac luy tien
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
