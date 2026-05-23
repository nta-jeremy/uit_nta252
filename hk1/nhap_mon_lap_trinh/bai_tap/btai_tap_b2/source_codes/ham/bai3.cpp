#include <iostream>
using namespace std;

// Hàm tìm số nhỏ nhất trong 4 số
int timNhoNhat(int a, int b, int c, int d) {
    int min_val = a; // Giả sử a là số nhỏ nhất

    // Lần lượt so sánh min_val với các số còn lại, nếu có số nhỏ hơn thì cập nhật lại min_val
    if (b < min_val) min_val = b;
    if (c < min_val) min_val = c;
    if (d < min_val) min_val = d;

    return min_val;
}

int main() {
    int a, b, c, d;
    cout << "Nhap 4 so nguyen: ";
    cin >> a >> b >> c >> d;

    cout << "Gia tri nho nhat la: " << timNhoNhat(a, b, c, d) << endl;

    return 0;
}
