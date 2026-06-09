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

// Bài 4: Tìm Max, Min và đếm số lượng
void timMaxMinVaDem(int a[], int n) {
    int max_val = a[0];
    int min_val = a[0];
    
    // Tìm max và min
    for (int i = 1; i < n; i++) {
        if (a[i] > max_val) max_val = a[i];
        if (a[i] < min_val) min_val = a[i];
    }
    
    int demMax = 0, demMin = 0;
    // Đếm số lượng phần tử max và min
    for (int i = 0; i < n; i++) {
        if (a[i] == max_val) demMax++;
        if (a[i] == min_val) demMin++;
    }
    
    cout << "Phan tu lon nhat: " << max_val << " (xuat hien " << demMax << " lan)" << endl;
    cout << "Phan tu nho nhat: " << min_val << " (xuat hien " << demMin << " lan)" << endl;
}

int main() {
    int a[MAX];
    int n;
    nhapMang(a, n);
    timMaxMinVaDem(a, n);
    return 0;
}
