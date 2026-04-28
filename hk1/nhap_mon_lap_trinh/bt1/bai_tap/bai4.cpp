/*
 * Chuong trinh tach cac chu so hang tram, hang chuc, hang don vi cua so co 3 chu so.
 */
#include <iostream>
using namespace std;

int main() {
  // Khai bao so nguyen n
  int n;
  
  // Nhap so nguyen co 3 chu so
  cout << "Nhap so nguyen co 3 chu so (100-999): ";
  cin >> n;

  // Tach cac chu so su dung phep chia lay nguyen (/) va chia lay du (%)
  int tram = n / 100;           // Lay chu so hang tram
  int chuc = (n / 10) % 10;     // Lay chu so hang chuc
  int donVi = n % 10;           // Lay chu so hang don vi

  // In ket qua ra man hinh
  cout << "Hang tram: " << tram << endl;
  cout << "Hang chuc: " << chuc << endl;
  cout << "Hang don vi: " << donVi << endl;

  return 0;
}
