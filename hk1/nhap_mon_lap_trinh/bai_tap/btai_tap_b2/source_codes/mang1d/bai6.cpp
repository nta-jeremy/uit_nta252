#include <iostream>
using namespace std;

#define MAX 100

void nhapMang(int a[], int &n) {
    cout << "Nhap so luong phan tu cua mang (n): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

// Bài 6: Tìm vị trí phần tử âm lớn nhất
void viTriAmLonNhat(int a[], int n) {
    int max_am = 1; // Khởi tạo 1 giá trị dương để đánh dấu chưa tìm thấy số âm
    int vitri = -1;
    
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) { // Nếu là số âm
            if (max_am > 0 || a[i] > max_am) {
                max_am = a[i];
                vitri = i;
            }
        }
    }
    
    if (vitri != -1) {
        cout << "Vi tri phan tu am lon nhat la: " << vitri << " (Gia tri: " << a[vitri] << ")" << endl;
    } else {
        cout << "Khong co phan tu am nao trong mang." << endl;
    }
}

int main() {
    int a[MAX];
    int n;
    nhapMang(a, n);
    viTriAmLonNhat(a, n);
    return 0;
}
