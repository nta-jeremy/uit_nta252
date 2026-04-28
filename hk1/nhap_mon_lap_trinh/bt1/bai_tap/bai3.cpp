/*
 * Chuong trinh tinh diem trung binh cua 3 mon Toan, Ly, Hoa.
 */
#include <iostream>
using namespace std;

int main() {
  // Khai bao diem cua 3 mon hoc
  float toan, ly, hoa;
  
  // Nhap diem tu ban phim
  cout << "Nhap diem Toan, Ly, Hoa: ";
  cin >> toan >> ly >> hoa;

  // Tinh diem trung binh va in ra ket qua
  float dtb = (toan + ly + hoa) / 3;
  cout << "Diem trung binh: " << dtb << endl;

  return 0;
}
