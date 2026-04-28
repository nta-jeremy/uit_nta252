/*
 * Chuong trinh tinh chu vi va dien tich hinh tron.
 */
#include <iostream>
using namespace std;

int main() {
  // Khai bao ban kinh r va hang so PI
  float r;
  float PI = 3.14;
  
  // Nhap ban kinh tu ban phim
  cout << "Nhap ban kinh r: ";
  cin >> r;

  // Tinh va in ra chu vi, dien tich
  cout << "Chu vi: " << 2 * PI * r << endl;
  cout << "Dien tich: " << PI * r * r << endl;

  return 0;
}
