/*
 * Chuong trinh giai phuong trinh bac hai: ax^2 + bx + c = 0.
 */
#include <iostream>
#include <cmath> // Thu vien toan hoc de dung ham sqrt (can bac 2)
using namespace std;

int main() {
    // Khai bao cac he so a, b, c
    float a, b, c;
    
    // Nhap he so tu ban phim
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;
    
    // Neu he so a bang 0, phuong trinh tro thanh phuong trinh bac nhat: bx + c = 0
    if (a == 0) {
        if (b == 0) {
            if (c == 0) cout << "Phuong trinh vo so nghiem" << endl;
            else cout << "Phuong trinh vo nghiem" << endl;
        } else {
            cout << "Nghiem x = " << -c / b << endl;
        }
    } else {
        // Tinh delta de bien luan nghiem
        float delta = b * b - 4 * a * c;
        
        if (delta < 0) {
            cout << "Phuong trinh vo nghiem" << endl;
        } else if (delta == 0) {
            cout << "Phuong trinh co nghiem kep x1 = x2 = " << -b / (2 * a) << endl;
        } else {
            cout << "Phuong trinh co 2 nghiem phan biet: " << endl;
            cout << "x1 = " << (-b + sqrt(delta)) / (2 * a) << endl;
            cout << "x2 = " << (-b - sqrt(delta)) / (2 * a) << endl;
        }
    }
    
    return 0;
}
