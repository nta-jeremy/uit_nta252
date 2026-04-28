/*
 * Chuong trinh tinh cac bieu thuc tong chuoi S voi so nguyen duong n.
 */
#include <iostream>
#include <cmath> // Thu vien dung cho ham pow (luy thua)
using namespace std;

int main() {
    // Khai bao n va x
    int n;
    float x;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    
    // a) S = 1+2+...+n
    int S_a = 0;
    for (int i = 1; i <= n; i++) {
        S_a += i;
    }
    cout << "a) S = " << S_a << endl;
    
    // b) S = 1 + 1/3 + 1/5 + ... + 1/(2n+1)
    float S_b = 0;
    for (int i = 0; i <= n; i++) {
        S_b += 1.0 / (2 * i + 1); // Dung 1.0 de ep kieu chia so thuc
    }
    cout << "b) S = " << S_b << endl;
    
    // c) S = 1/(1*2) + 1/(2*3) + ... + 1/(n*(n+1))
    float S_c = 0;
    for (int i = 1; i <= n; i++) {
        S_c += 1.0 / (i * (i + 1));
    }
    cout << "c) S = " << S_c << endl;
    
    // d) S = x + x^2/(1+2) + x^3/(1+2+3) + ... + x^n/(1+2+3+...+n)
    cout << "Nhap x cho cau d: ";
    cin >> x;
    float S_d = 0;
    int tong_mau = 0;
    for (int i = 1; i <= n; i++) {
        tong_mau += i; // Tinh tong tu 1 den i cho phan mau so
        S_d += pow(x, i) / tong_mau;
    }
    cout << "d) S = " << S_d << endl;
    
    return 0;
}
