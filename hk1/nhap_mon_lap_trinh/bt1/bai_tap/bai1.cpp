/*
 * Chuong trinh tinh tong, hieu, tich, thuong va tong binh phuong cua 2 so nguyen.
 */
#include <iostream>
using namespace std;

int main() {
  // Khai bao 2 so nguyen a va b
  int a, b;
  
  // Nhap gia tri cho a va b tu ban phim
  cout << "Nhap a: ";
  cin >> a;
  cout << "Nhap b: ";
  cin >> b;

  // Tinh va in ra cac ket qua co ban
  cout << "Tong: " << a + b << endl;
  cout << "Hieu: " << a - b << endl;
  cout << "Tich: " << a * b << endl;
  
  // Kiem tra dieu kien chia cho 0 truoc khi tinh thuong
  if (b != 0) {
    cout << "Thuong: " << (float)a / b << endl;
  } else {
    cout << "Khong the chia cho 0" << endl;
  }
  
  // Tinh tong binh phuong
  cout << "Tong binh phuong: " << (a * a) + (b * b) << endl;

  return 0;
}
