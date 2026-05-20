/*
 * Chuong trinh tinh tien thanh toan cho san pham bao gom thue VAT.
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Khai bao thong tin san pham
    string tenSP;
    int soLuong;
    float donGia;
    
    // Nhap thong tin
    cout << "Nhap ten san pham: ";
    getline(cin, tenSP); // Su dung getline de doc chuoi co chua khoang trang
    cout << "Nhap so luong: ";
    cin >> soLuong;
    cout << "Nhap don gia: ";
    cin >> donGia;
    
    // Tinh toan tien
    float tien = soLuong * donGia;
    float thue = 0.10 * tien; // Thue VAT 10%
    
    // In hoa don
    cout << "San pham: " << tenSP << endl;
    cout << "Tien phai tra (chua thue): " << tien << endl;
    cout << "Thue VAT (10%): " << thue << endl;
    cout << "Tong cong: " << tien + thue << endl;
    
    return 0;
}
