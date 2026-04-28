/*
 * Chuong trinh doi so tien N thanh cac menh gia tien te khac nhau (toi uu so to).
 */
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Nhap vao so tien N (ngan dong): ";
    cin >> N;
    
    // Khai bao so luong to tien cho tung menh gia
    int t500 = 0, t200 = 0, t100 = 0, t50 = 0, t20 = 0, t10 = 0, t5 = 0, t2 = 0, t1 = 0;
    
    // Doi tu menh gia lon nhat den nho nhat
    t500 = N / 500; N = N % 500;
    t200 = N / 200; N = N % 200;
    t100 = N / 100; N = N % 100;
    t50 = N / 50;   N = N % 50;
    t20 = N / 20;   N = N % 20;
    t10 = N / 10;   N = N % 10;
    t5 = N / 5;     N = N % 5;
    t2 = N / 2;     N = N % 2;
    t1 = N;
    
    // In chi tiet so luong to tien thu duoc
    cout << "Chi tiet doi tien: " << endl;
    if (t500 > 0) cout << t500 << " to 500k" << endl;
    if (t200 > 0) cout << t200 << " to 200k" << endl;
    if (t100 > 0) cout << t100 << " to 100k" << endl;
    if (t50 > 0)  cout << t50 << " to 50k" << endl;
    if (t20 > 0)  cout << t20 << " to 20k" << endl;
    if (t10 > 0)  cout << t10 << " to 10k" << endl;
    if (t5 > 0)   cout << t5 << " to 5k" << endl;
    if (t2 > 0)   cout << t2 << " to 2k" << endl;
    if (t1 > 0)   cout << t1 << " to 1k" << endl;
    
    return 0;
}
