# BÀI TẬP BẮT BUỘC: MẢNG 2 CHIỀU (MA TRẬN)

Dưới đây là các bài giải liên quan đến mảng 2 chiều (ma trận), được viết bằng C++ với giải thích rõ ràng.

```cpp
#include <iostream>
using namespace std;

#define MAX 100 // Kích thước tối đa của ma trận

// --- Bài 1: Nhập mảng 2 chiều ---
void nhapMaTran(int a[MAX][MAX], int &m, int &n) {
    cout << "Nhap so dong m: "; cin >> m;
    cout << "Nhap so cot n: "; cin >> n;
    
    for (int i = 0; i < m; i++) {       // Duyệt qua từng dòng
        for (int j = 0; j < n; j++) {   // Duyệt qua từng cột trong dòng i
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

// --- Bài 2: Xuất mảng 2 chiều ---
void xuatMaTran(int a[MAX][MAX], int m, int n) {
    cout << "Ma tran vua nhap:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t"; // In phần tử và thụt lề bằng tab
        }
        cout << endl; // Xong một dòng thì xuống dòng
    }
}

// --- Bài 3: Tìm phần tử Min, Max ---
void timMinMax(int a[MAX][MAX], int m, int n) {
    int max_val = a[0][0];
    int min_val = a[0][0];
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max_val) max_val = a[i][j];
            if (a[i][j] < min_val) min_val = a[i][j];
        }
    }
    cout << "Gia tri lon nhat (Max): " << max_val << endl;
    cout << "Gia tri nho nhat (Min): " << min_val << endl;
}

// --- Bài 4: Sắp xếp theo thứ tự zigzag ---
// Đưa ma trận về mảng 1 chiều, sắp xếp rồi đưa lại vào ma trận theo hình zigzag
void sapXepZigZag(int a[MAX][MAX], int m, int n) {
    int tam[MAX * MAX];
    int k = 0;
    
    // Đưa ma trận vào mảng 1 chiều
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            tam[k++] = a[i][j];
            
    // Sắp xếp mảng 1 chiều tăng dần
    for (int i = 0; i < k - 1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (tam[i] > tam[j]) {
                swap(tam[i], tam[j]);
            }
        }
    }
    
    // Đưa ngược lại ma trận theo dạng zigzag
    k = 0;
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) { // Dòng chẵn: chạy từ trái sang phải
            for (int j = 0; j < n; j++) a[i][j] = tam[k++];
        } else {          // Dòng lẻ: chạy từ phải sang trái
            for (int j = n - 1; j >= 0; j--) a[i][j] = tam[k++];
        }
    }
}

// --- Bài 5: Sắp xếp trôn ốc (xoắn ốc) ---
void sapXepTronOc(int a[MAX][MAX], int m, int n) {
    int tam[MAX * MAX], k = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            tam[k++] = a[i][j];
            
    // Sắp xếp tăng dần
    for (int i = 0; i < k - 1; i++)
        for (int j = i + 1; j < k; j++)
            if (tam[i] > tam[j]) swap(tam[i], tam[j]);
            
    // Điền vào ma trận dạng xoắn ốc
    k = 0;
    int tren = 0, duoi = m - 1, trai = 0, phai = n - 1;
    while (tren <= duoi && trai <= phai) {
        for (int i = trai; i <= phai; i++) a[tren][i] = tam[k++]; tren++; // Dòng trên
        if (tren > duoi) break; // Check an toàn
        for (int i = tren; i <= duoi; i++) a[i][phai] = tam[k++]; phai--; // Cột phải
        if (trai > phai) break;
        for (int i = phai; i >= trai; i--) a[duoi][i] = tam[k++]; duoi--; // Dòng dưới
        for (int i = duoi; i >= tren; i--) a[i][trai] = tam[k++]; trai++; // Cột trái
    }
}

// --- Bài 6: Thêm 1 dòng v vào cuối ma trận ---
void themDongCuoi(int a[MAX][MAX], int &m, int n, int v[MAX]) {
    for (int j = 0; j < n; j++) {
        a[m][j] = v[j]; // Thêm vào dòng m (dòng mới cuối cùng do index từ 0)
    }
    m++; // Tăng số lượng dòng
}

// --- Bài 7: Thêm 1 dòng v vào dòng thứ k ---
void themDongK(int a[MAX][MAX], int &m, int n, int v[MAX], int k) {
    if (k < 0 || k > m) return;
    // Dời các dòng từ k trở về sau xuống 1 bậc
    for (int i = m; i > k; i--) {
        for (int j = 0; j < n; j++) {
            a[i][j] = a[i-1][j];
        }
    }
    // Gán dòng v vào vị trí k
    for (int j = 0; j < n; j++) {
        a[k][j] = v[j];
    }
    m++;
}

// --- Bài 8: Xóa dòng thứ k ---
void xoaDongK(int a[MAX][MAX], int &m, int n, int k) {
    if (k < 0 || k >= m) return;
    // Dời các dòng phía sau lên 1 bậc để đè lên dòng k
    for (int i = k; i < m - 1; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = a[i+1][j];
        }
    }
    m--; // Giảm số dòng
}

// --- Bài 9: Tìm điểm yên ngựa ---
void timDiemYenNgua(int a[MAX][MAX], int m, int n) {
    bool coYenNgua = false;
    for (int i = 0; i < m; i++) {
        // Bước 1: Tìm Max trên dòng i
        int max_dong = a[i][0];
        int cot_max = 0;
        for (int j = 1; j < n; j++) {
            if (a[i][j] > max_dong) {
                max_dong = a[i][j];
                cot_max = j;
            }
        }
        
        // Bước 2: Kiểm tra xem Max đó có phải là Min trên cột cot_max hay không
        bool laYenNgua = true;
        for (int k = 0; k < m; k++) {
            if (a[k][cot_max] < max_dong) {
                laYenNgua = false;
                break;
            }
        }
        
        if (laYenNgua) {
            cout << "Diem yen ngua: a[" << i << "][" << cot_max << "] = " << max_dong << endl;
            coYenNgua = true;
        }
    }
    if (!coYenNgua) cout << "Khong co diem yen ngua." << endl;
}

// --- Bài 10: Tính tổng 2 ma trận ---
void tongHaiMaTran(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX], int m, int n) {
    // 2 ma trận cộng nhau phải cùng kích thước
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

// --- Bài 11: Tính tổng mỗi dòng và cột ---
void tongDongVaCot(int a[MAX][MAX], int m, int n) {
    // Tổng từng dòng
    for (int i = 0; i < m; i++) {
        int tong = 0;
        for (int j = 0; j < n; j++) tong += a[i][j];
        cout << "Tong dong " << i << " = " << tong << endl;
    }
    // Tổng từng cột
    for (int j = 0; j < n; j++) {
        int tong = 0;
        for (int i = 0; i < m; i++) tong += a[i][j];
        cout << "Tong cot " << j << " = " << tong << endl;
    }
}

// --- Bài 12: Đếm số phần tử dương ở ma trận tam giác trên ---
// Ma trận vuông nxn. Tam giác trên là các phần tử a[i][j] có i < j (nếu tính cả đường chéo chính thì i <= j)
void demDuongTamGiacTren(int a[MAX][MAX], int n) {
    int dem = 0;
    // Xét các phần tử nằm trên đường chéo chính (i < j)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            if (a[i][j] > 0) dem++;
        }
    }
    cout << "So phan tu duong o tam giac tren: " << dem << endl;
}

// --- Bài 13: Trung bình cộng 1 cột ---
void tbcCotK(int a[MAX][MAX], int m, int n, int k) {
    if (k < 0 || k >= n) return;
    float tong = 0;
    for (int i = 0; i < m; i++) {
        tong += a[i][k];
    }
    cout << "TBC cot " << k << " = " << tong / m << endl;
}

// --- Bài 14: Tổng các phần tử biên ---
void tongBien(int a[MAX][MAX], int m, int n) {
    int tong = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            // Phần tử nằm ở dòng đầu (i=0), dòng cuối (i=m-1), cột đầu (j=0), cột cuối (j=n-1)
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                tong += a[i][j];
            }
        }
    }
    cout << "Tong cac phan tu o bien la: " << tong << endl;
}

int main() {
    int a[MAX][MAX];
    int m, n;
    
    // Gọi hàm nhập và xuất
    nhapMaTran(a, m, n);
    xuatMaTran(a, m, n);
    
    // Test thử vài bài
    timMinMax(a, m, n);
    tongBien(a, m, n);
    tongDongVaCot(a, m, n);
    
    return 0;
}
```
