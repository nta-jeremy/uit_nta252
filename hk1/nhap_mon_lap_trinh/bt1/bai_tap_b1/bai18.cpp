/*
 * Chuong trinh tinh tien thue san karaoke.
 */
#include <iostream>
using namespace std;

int main() {
    // Khai bao gio bat dau va gio ket thuc
    int gioBatDau, gioKetThuc;
    cout << "Nhap gio bat dau (>= 8) va gio ket thuc (<= 24): ";
    cin >> gioBatDau >> gioKetThuc;
    
    // Kiem tra tinh hop le cua thoi gian nhap vao
    if (gioBatDau >= 8 && gioKetThuc <= 24 && gioBatDau < gioKetThuc) {
        int soGioThue = gioKetThuc - gioBatDau;
        float tien = 0;
        
        // Tinh tien co ban (3 gio dau 30000d/h, gio tiep theo giam 30%)
        if (soGioThue <= 3) {
            tien = soGioThue * 30000;
        } else {
            tien = 3 * 30000 + (soGioThue - 3) * 30000 * 0.7; 
        }
        
        // Giam gia 10% neu thoi gian thue bat dau trong khoang 8 - 17 gio
        if (gioBatDau >= 8 && gioBatDau <= 17) {
            tien = tien * 0.9;
        }
        
        cout << "So tien phai tra la: " << (long)tien << " VND" << endl;
    } else {
        cout << "Gio nhap khong hop le!" << endl;
    }
    
    return 0;
}
