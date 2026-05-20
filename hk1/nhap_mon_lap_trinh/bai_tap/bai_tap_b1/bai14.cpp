/*
 * Chuong trinh tim so lon nhat trong 3 so thuc a, b, c.
 */
#include <iostream>
using namespace std;

int main() {
    // Khai bao 3 so thuc
    float a, b, c;
    
    // Nhap gia tri tu ban phim
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;
    
    // Gia su a la so lon nhat, sau do so sanh voi b va c
    float max_val = a;
    if (b > max_val) max_val = b;
    if (c > max_val) max_val = c;
    
    cout << "So lon nhat la: " << max_val << endl;
    
    return 0;
}
