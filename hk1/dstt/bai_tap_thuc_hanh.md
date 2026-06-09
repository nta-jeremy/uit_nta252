Họ và tên sinh viên: Nguyễn Tùng Anh
MSSV 26730006
Lớp MA003.F21.CN1.CNTT
Giảng viên GVC. ThS. Lê Hoàng Tuấn
Nội dung 40 bài tập thực hành (8 buổi x 5 bài)


-----
-----
-----


Bài 1.1 – Phân loại ma trận
Cho các ma trận sau, hãy phân loại (đường chéo / tam giác trên / tam giác dưới / đơn vị / khác):$$A_{1}=\begin{pmatrix} 5 & 0 & 0 \\ 0 & -3 & 0 \\ 0 & 0 & 4 \end{pmatrix}, \quad A_{2}=\begin{pmatrix} 2 & -1 & 4 \\ 0 & 5 & 6 \\ 0 & 0 & -3 \end{pmatrix}$$$$A_{3}=\begin{pmatrix} 4 & 0 & 0 \\ 2 & -1 & 0 \\ -3 & 5 & 6 \end{pmatrix}, \quad A_{4}=\begin{pmatrix} 1 & 0 & 0 & 0 \\ 0 & 1 & 0 & 0 \\ 0 & 0 & 1 & 0 \\ 0 & 0 & 0 & 1 \end{pmatrix}$$

Giải bài 1.1 – Phân loại ma trận
Để phân loại, ta quan sát vị trí của các phần tử số $0$ so với đường chéo chính (từ trên xuống dưới, từ trái sang phải).$A_{1}$: Các phần tử nằm ngoài đường chéo chính đều bằng $0$.$$\rightarrow \text{\textbf{Ma trận đường chéo}}$$$A_{2}$: Tất cả các phần tử nằm phía dưới đường chéo chính đều bằng $0$.$$\rightarrow \text{\textbf{Ma trận tam giác trên}}$$$A_{3}$: Tất cả các phần tử nằm phía trên đường chéo chính đều bằng $0$.$$\rightarrow \text{\textbf{Ma trận tam giác dưới}}$$$A_{4}$: Là ma trận đường chéo đặc biệt, có các phần tử trên đường chéo chính đều bằng $1$.$$\rightarrow \text{\textbf{Ma trận đơn vị (cấp 4)}}$$

-----
-----
-----

Bài 1.2 – Phép biến đổi loại 1 (Nhân dòng với một hằng số)
Cho ma trận:$$A=\begin{pmatrix} 3 & -1 & 4 \\ 2 & -4 & 6 \\ 5 & 0 & -2 \end{pmatrix}$$
Thực hiện phép biến đổi $(2) \rightarrow \frac{1}{2}(2)$ (hoặc $R_2 \rightarrow \frac{1}{2}R_2$). Viết ma trận kết quả $A'$.

**Giải**: Phép biến đổi loại 1 (Nhân dòng với một hằng số)
Yêu cầu: Nhân toàn bộ các phần tử của dòng 2 với $\frac{1}{2}$ ($R_2 \rightarrow \frac{1}{2}R_2$).Dòng 2 ban đầu: $(2 \quad -4 \quad 6)$
Dòng 2 mới: $(2\cdot\frac{1}{2} \quad -4\cdot\frac{1}{2} \quad 6\cdot\frac{1}{2}) = (1 \quad -2 \quad 3)$
Ma trận kết quả $A'$:$$A'=\begin{pmatrix} 3 & -1 & 4 \\ 1 & -2 & 3 \\ 5 & 0 & -2 \end{pmatrix}$$


-----
-----
-----


Bài 1.3 – Phép biến đổi loại 2 (Hoán vị hai dòng)
Cho ma trận:$$B=\begin{pmatrix} 2 & -3 & 1 & 5 \\ 4 & 1 & -2 & 0 \\ 0 & 5 & 3 & -1 \\ -6 & 2 & 4 & 7 \end{pmatrix}$$
Thực hiện phép biến đổi hoán đổi dòng 1 và dòng 3: $(1) \leftrightarrow (3)$. Viết ma trận kết quả $B'$.

**Giải**: – Phép biến đổi loại 2 (Hoán vị hai dòng)
Yêu cầu: Đổi chỗ toàn bộ dòng 1 và dòng 3 cho nhau ($(1) \leftrightarrow (3)$).Ma trận kết quả $B'$:$$B'=\begin{pmatrix} 0 & 5 & 3 & -1 \\ 4 & 1 & -2 & 0 \\ 2 & -3 & 1 & 5 \\ -6 & 2 & 4 & 7 \end{pmatrix}$$



-----
-----
-----


Bài 1.4 – Phép biến đổi loại 3 (Thay dòng bằng tổ hợp tuyến tính)
Cho ma trận:$$C=\begin{pmatrix} 1 & 2 & -3 \\ 3 & 4 & 1 \\ -2 & 1 & 5 \end{pmatrix}$$
Áp dụng các phép biến đổi: $(2) \rightarrow (2) - 3\cdot(1)$ và $(3) \rightarrow (3) + 2\cdot(1)$. Viết ma trận kết quả $C'$.

**Giải**: – Phép biến đổi loại 3 (Thay dòng bằng tổ hợp tuyến tính)
Phép toán 1: $R_2 \rightarrow R_2 - 3R_1$$$(3 - 3\cdot1 \quad 4 - 3\cdot2 \quad 1 - 3\cdot(-3)) = (0 \quad -2 \quad 10)$$
Phép toán 2: $R_3 \rightarrow R_3 + 2R_1$$$(-2 + 2\cdot1 \quad 1 + 2\cdot2 \quad 5 + 2\cdot(-3)) = (0 \quad 5 \quad -1)$$

-----
-----
-----


Bài 1.5 – Chuỗi phép biến đổi đưa ma trận về dạng tam giác
Cho ma trận:$$D=\begin{pmatrix} 3 & 6 & 9 \\ 1 & 4 & 5 \\ -1 & 2 & 4 \end{pmatrix}$$
Áp dụng tuần tự các phép biến đổi:$(1) \rightarrow \frac{1}{3}(1)$$(2) \rightarrow (2) - (1)$$(3) \rightarrow (3) + (1)$
Viết ma trận kết quả ở mỗi bước và ma trận cuối cùng $D'$.BUỔI 02: Bán chuẩn hóa, hạng của ma trận, giải hệ phương trình bằng phương pháp Gauss

**Giải**: – Chuỗi phép biến đổi đưa ma trận về dạng tam giác
Bước 1: $R_1 \rightarrow \frac{1}{3}R_1$ (Chia dòng 1 cho 3)$$D_1 = \begin{pmatrix} 1 & 2 & 3 \\ 1 & 4 & 5 \\ -1 & 2 & 4 \end{pmatrix}$$
Bước 2: $R_2 \rightarrow R_2 - R_1$ (Lấy dòng 2 trừ dòng 1 mới)$$D_2 = \begin{pmatrix} 1 & 2 & 3 \\ 0 & 2 & 2 \\ -1 & 2 & 4 \end{pmatrix}$$
Bước 3: $R_3 \rightarrow R_3 + R_1$ (Lấy dòng 3 cộng dòng 1 mới)$$D' = \begin{pmatrix} 1 & 2 & 3 \\ 0 & 2 & 2 \\ 0 & 4 & 7 \end{pmatrix}$$



-----
-----
-----

Bài 2.1 – Tìm hạng của ma trận cấp $4 \times 5$
Tìm hạng của ma trận sau bằng phương pháp biến đổi về dạng bậc thang:$$A=\begin{pmatrix} 1 & -2 & 1 & 3 & 2 \\ -1 & 3 & 0 & -1 & 1 \\ 2 & -1 & 5 & 4 & 3 \\ -3 & 4 & -7 & -2 & -1 \end{pmatrix}$$


**Giải**: – Tìm hạng của ma trận cấp $4 \times 5$
Ta dùng các phép biến đổi dòng để đưa $A$ về dạng bậc thang:
Giữ dòng 1. Khử cột 1 của các dòng còn lại:
- $R_2 \rightarrow R_2 + R_1 \rightarrow (0 \quad 1 \quad 1 \quad 2 \quad 3)$
- $R_3 \rightarrow R_3 - 2R_1 \rightarrow (0 \quad 3 \quad 3 \quad -2 \quad -1)$
- $R_4 \rightarrow R_4 + 3R_1 \rightarrow (0 \quad -2 \quad -4 \quad 7 \quad 5)$
Khử tiếp cột 2 dựa vào dòng 2 mới:
- $R_3 \rightarrow R_3 - 3R_2 \rightarrow (0 \quad 0 \quad 0 \quad -8 \quad -10)$
- $R_4 \rightarrow R_4 + 2R_2 \rightarrow (0 \quad 0 \quad -2 \quad 11 \quad 11)$
Đổi chỗ dòng 3 và dòng 4 để tạo dạng bậc thang chuẩn:$$\begin{pmatrix} 1 & -2 & 1 & 3 & 2 \\ 0 & 1 & 1 & 2 & 3 \\ 0 & 0 & -2 & 11 & 11 \\ 0 & 0 & 0 & -8 & -10 \end{pmatrix}$$

Kết luận: Ma trận có 4 dòng khác không. Vậy $\text{rank}(A) = 4$.

-----
-----
-----

Bài 2.2 – Tìm hạng của ma trận cấp $5 \times 4$
Tìm hạng của ma trận sau bằng phương pháp đưa về dạng bậc thang:$$A=\begin{pmatrix} 1 & -2 & 3 & 0 \\ -2 & 5 & -4 & 1 \\ 3 & -7 & 8 & -2 \\ 1 & 1 & 6 & -5 \\ -1 & 4 & -2 & 5 \end{pmatrix}$$

**Giải**: – Tìm hạng của ma trận cấp $5 \times 4$
Biến đổi tương tự để đưa về dạng bậc thang:
Triệt tiêu cột 1:$R_2 \rightarrow R_2 + 2R_1, \; R_3 \rightarrow R_3 - 3R_1, \; R_4 \rightarrow R_4 - R_1, \; R_5 \rightarrow R_5 + R_1$
Thu được cột 1 có các số 0 ở dưới phần tử đầu tiên.
Tiếp tục triệt tiêu các cột tiếp theo, ma trận bậc thang cuối cùng nhận được có dạng:$$\begin{pmatrix} 1 & -2 & 3 & 0 \\ 0 & 1 & 2 & 1 \\ 0 & 0 & 1 & -1 \\ 0 & 0 & 0 & -11 \\ 0 & 0 & 0 & 0 \end{pmatrix}$$

Kết luận: Có 4 dòng khác không hoàn toàn. Vậy $\text{rank}(A) = 4$.


-----
-----
-----


Bài 2.3 – Biện luận hạng ma trận cấp $3 \times 3$ theo tham số $m$
Tìm và biện luận hạng của ma trận sau theo tham số $m \in \mathbb{R}$:$$A=\begin{pmatrix} m & 2m & -m \\ 3m & m & 4m \\ -2m & -m & -2m \end{pmatrix}$$

**Giải**: – Biện luận hạng ma trận cấp $3 \times 3$ theo tham số $m$
Trường hợp 1: $m = 0$: Tất cả các phần tử của ma trận đều bằng 0. Do đó, $\text{rank}(A) = 0$.
Trường hợp 2: $m \neq 0$: Ta có thể chia tất cả các dòng cho $m$, ma trận trở thành:$$\begin{pmatrix} 1 & 2 & -1 \\ 3 & 1 & 4 \\ -2 & -1 & -2 \end{pmatrix}$$
Biến đổi sơ cấp:
- $R_2 \rightarrow R_2 - 3R_1 \rightarrow (0 \quad -5 \quad 7)$
- $R_3 \rightarrow R_3 + 2R_1 \rightarrow (0 \quad 3 \quad -4)$
- $R_3 \rightarrow 5R_3 + 3R_2 \rightarrow (0 \quad 0 \quad 1)$

Ma trận có 3 dòng khác 0 độc lập. Do đó, $\text{rank}(A) = 3$.



-----
-----
-----


Bài 2.4 – Biện luận hạng ma trận cấp $4 \times 4$ theo tham số $m$
Tìm và biện luận hạng của ma trận sau theo tham số $m \in \mathbb{R}$:$$A=\begin{pmatrix} 1 & 2 & -1 & 3 \\ 2 & 3 & 1 & 4 \\ 3 & 5 & 0 & 7 \\ m & 1 & 2 & 2 \end{pmatrix}$$

**Giải**: – Biện luận hạng ma trận cấp $4 \times 4$ theo tham số $m$
Biến đổi dòng để đưa về dạng bậc thang:
- $R_2 \rightarrow R_2 - 2R_1 \rightarrow (0 \quad -1 \quad 3 \quad -2)$
- $R_3 \rightarrow R_3 - 3R_1 \rightarrow (0 \quad -1 \quad 3 \quad -2)$
Nhận thấy dòng 2 và dòng 3 giống hệt nhau $\rightarrow R_3 \rightarrow R_3 - R_2$ sẽ biến dòng 3 thành dòng toàn số 0.Đưa dòng toàn số 0 xuống dưới cùng, tiếp tục biến đổi dòng chứa $m$, ta thu được hàng bậc thang thứ 3 luôn có phần tử khác 0 độc lập với giá trị của $m$.

Kết luận: Với mọi $m \in \mathbb{R}$, ma trận luôn có 3 dòng khác không. Vậy $\text{rank}(A) = 3$.


-----
-----
-----



Bài 2.5 – Giải hệ phương trình tuyến tính bằng phương pháp Gauss
Giải hệ phương trình tuyến tính sau trên tập số thực $\mathbb{R}$ bằng phương pháp Gauss:$$\begin{cases} x_1 - 2x_2 + 3x_3 = 4 \\ 2x_1 - 3x_2 + 5x_3 = 7 \\ 3x_1 -  x_2 + 2x_3 = 2 \end{cases}$$

**Giải**: – Giải hệ phương trình tuyến tính bằng phương pháp GaussLập ma trận bổ sung $\bar{A}$:$$\bar{A} = \begin{pmatrix} 1 & -2 & 3 & | & 4 \\ 2 & -3 & 5 & | & 7 \\ 3 & -1 & 2 & | & 2 \end{pmatrix}$$
Biến đổi dòng:
- $R_2 \rightarrow R_2 - 2R_1 \rightarrow (0 \quad 1 \quad -1 \quad | \quad -1)$
- $R_3 \rightarrow R_3 - 3R_1 \rightarrow (0 \quad 5 \quad -7 \quad | \quad -10)$
- $R_3 \rightarrow R_3 - 5R_2 \rightarrow (0 \quad 0 \quad -2 \quad | \quad -5)$

Hệ phương trình tương đương:
$$\begin{cases} x_1 - 2x_2 + 3x_3 = 4 \\ x_2 - x_3 = -1 \\ -2x_3 = -5 \end{cases} \implies \begin{cases} x_3 = \frac{5}{2} \\ x_2 = -1 + \frac{5}{2} = \frac{3}{2} \\ x_1 = 4 + 2(\frac{3}{2}) - 3(\frac{5}{2}) = -\frac{1}{2} \end{cases}$$

Kết luận: Hệ có nghiệm duy nhất $(x_1, x_2, x_3) = \left(-\frac{1}{2}, \frac{3}{2}, \frac{5}{2}\right)$.




-----
-----
-----




Bài 3.1 – Tìm ma trận nghịch đảo bằng phương pháp phụ hợp (Đề số 1)
Hỏi ma trận $A$ sau có khả nghịch không? Nếu có, hãy tìm $A^{-1}$ bằng phương pháp ma trận phụ hợp:$$A=\begin{pmatrix} 1 & 2 & 3 \\ 0 & 1 & 4 \\ 5 & 6 & 0 \end{pmatrix}$$


**Giải**:– Tìm ma trận nghịch đảo bằng phương pháp phụ hợp (Đề số 1)
1/ Tính định thức: $\det(A) = 1(0 - 24) - 2(0 - 20) + 3(0 - 5) = -24 + 40 - 15 = 1 \neq 0$. Vậy ma trận khả nghịch.
2/ Tìm các phần bù đại số $C_{ij}$ và lập ma trận phụ hợp $P_A = C^T$:$$P_A = \begin{pmatrix} -24 & 18 & 5 \\ 20 & -15 & -4 \\ -5 & 4 & 1 \end{pmatrix}$$
3/ Tính $A^{-1} = \frac{1}{\det(A)} P_A$:$$A^{-1} = \begin{pmatrix} -24 & 18 & 5 \\ 20 & -15 & -4 \\ -5 & 4 & 1 \end{pmatrix}$$



-----
-----
-----



Bài 3.2 – Tìm ma trận nghịch đảo bằng phương pháp phụ hợp (Đề số 2)
Hỏi ma trận $A$ sau có khả nghịch không? Nếu có, hãy tìm $A^{-1}$ bằng phương pháp ma trận phụ hợp:$$A=\begin{pmatrix} 2 & 1 & -1 \\ 1 & 3 & 2 \\ -1 & 2 & 4 \end{pmatrix}$$


**Giải**: – Tìm ma trận nghịch đảo bằng phương pháp phụ hợp (Đề số 2)
1/ Tính định thức: $\det(A) = 2(12-4) - 1(4+2) - 1(2+3) = 16 - 6 - 5 = 5 \neq 0 \rightarrow$ Ma trận khả nghịch.
2/ Ma trận phụ hợp thu được:$$P_A = \begin{pmatrix} 8 & -6 & 5 \\ -6 & 7 & -5 \\ 5 & -5 & 5 \end{pmatrix}$$
3/ Ma trận nghịch đảo:$$A^{-1} = \frac{1}{5}P_A = \begin{pmatrix} 1.6 & -1.2 & 1 \\ -1.2 & 1.4 & -1 \\ 1 & -1 & 1 \end{pmatrix}$$


-----
-----
-----



Bài 3.3 – Phương trình ma trận dạng $AX = B$
Giải phương trình ma trận sau để tìm ma trận ẩn $X$:$$\begin{pmatrix} 3 & 2 \\ 4 & 3 \end{pmatrix} X = \begin{pmatrix} 1 & -2 & 3 & 0 \\ 5 & 4 & -1 & 2 \end{pmatrix}$$


**Giải**: – Phương trình ma trận dạng $AX = B$
Công thức nghiệm: $X = A^{-1}B$.
Với $A = \begin{pmatrix} 3 & 2 \\ 4 & 3 \end{pmatrix} \implies \det(A) = 1 \implies A^{-1} = \begin{pmatrix} 3 & -2 \\ -4 & 3 \end{pmatrix}$
Tính tích ma trận:$$X = \begin{pmatrix} 3 & -2 \\ -4 & 3 \end{pmatrix} \begin{pmatrix} 1 & -2 & 3 & 0 \\ 5 & 4 & -1 & 2 \end{pmatrix} = \begin{pmatrix} -7 & -14 & 11 & -4 \\ 11 & 20 & -15 & 6 \end{pmatrix}$$


-----
-----
-----



Bài 3.4 – Phương trình ma trận dạng $XA = B$
Giải phương trình ma trận sau để tìm ma trận ẩn $X$:$$X \begin{pmatrix} 2 & 5 \\ 1 & 3 \end{pmatrix} = \begin{pmatrix} 1 & 4 \\ -3 & 2 \\ 0 & 5 \\ 2 & -1 \end{pmatrix}$$


**Giải**: – Phương trình ma trận dạng $XA = B$
Công thức nghiệm: $X = BA^{-1}$.Với $A = \begin{pmatrix} 2 & 5 \\ 1 & 3 \end{pmatrix} \implies \det(A) = 1 \implies A^{-1} = \begin{pmatrix} 3 & -5 \\ -1 & 2 \end{pmatrix}$
Tính tích ma trận:$$X = \begin{pmatrix} 1 & 4 \\ -3 & 2 \\ 0 & 5 \\ 2 & -1 \end{pmatrix} \begin{pmatrix} 3 & -5 \\ -1 & 2 \end{pmatrix} = \begin{pmatrix} -1 & 3 \\ -11 & 19 \\ -5 & 10 \\ 7 & -12 \end{pmatrix}$$


-----
-----
-----



Bài 3.5 – Phương trình ma trận dạng $AXC = B$
Giải phương trình ma trận sau để tìm ma trận ẩn $X$:$$\begin{pmatrix} 2 & 1 \\ 5 & 3 \end{pmatrix} X \begin{pmatrix} 3 & 4 \\ 2 & 3 \end{pmatrix} = \begin{pmatrix} 1 & 2 \\ -1 & 0 \end{pmatrix}$$

**Giải**: – Phương trình ma trận dạng $AXC = B$
Công thức nghiệm: $X = A^{-1}BC^{-1}$.Tìm được $A^{-1} = \begin{pmatrix} 3 & -1 \\ -5 & 2 \end{pmatrix}$ và $C^{-1} = \begin{pmatrix} 3 & -4 \\ -2 & 3 \end{pmatrix}$
Nhân từng bước:$$A^{-1}B = \begin{pmatrix} 4 & 6 \\ -7 & -10 \end{pmatrix} \implies X = (A^{-1}B)C^{-1} = \begin{pmatrix} 0 & 2 \\ -1 & -2 \end{pmatrix}$$


-----
-----
-----



Bài 4.1 – Tính định thức cấp 3 bằng quy tắc SarrusTính định thức của ma trận $A$ sau bằng quy tắc Sarrus:$$A = \begin{pmatrix} 2 & -3 & 4 \\ 5 & 1 & -2 \\ -1 & 4 & 3 \end{pmatrix}$$

**Giải**: – Tính định thức cấp 3 bằng quy tắc Sarrus$$
\det(A) = [2\cdot1\cdot3 + (-3)\cdot(-2)\cdot(-1) + 4\cdot5\cdot4] - [(-1)\cdot1\cdot4 + 4\cdot(-2)\cdot2 + 3\cdot5\cdot(-3)]$$$$\det(A) = [6 - 6 + 80] - [-4 - 16 - 45] = 80 - (-65) = 145$$

-----
-----
-----



Bài 4.2 – Tính định thức cấp 3 bằng phương pháp khai triển theo hàng/cộtTính định thức của ma trận $A$ sau bằng cách khai triển theo hàng thứ nhất:$$A = \begin{pmatrix} 2 & -1 & 3 \\ 4 & 5 & -2 \\ -3 & 2 & 1 \end{pmatrix}$$

**Giải**: – Tính định thức cấp 3 bằng phương pháp khai triển theo hàng/cộtKhai triển theo hàng 1:$$\det(A) = 2\begin{vmatrix} 5 & -2 \\ 2 & 1 \end{vmatrix} - (-1)\begin{vmatrix} 4 & -2 \\ -3 & 1 \end{vmatrix} + 3\begin{vmatrix} 4 & 5 \\ -3 & 2 \end{vmatrix}$$$$\det(A) = 2(5 + 4) + 1(4 - 6) + 3(8 + 15) = 18 - 2 + 69 = 85$$


-----
-----
-----



Bài 4.3 – Tính định thức chứa tham số $(a, b, c)$
Tính và rút gọn định thức của ma trận sau:$$A = \begin{pmatrix} 1 & a^2 & bc \\ 1 & b^2 & ac \\ 1 & c^2 & ab \end{pmatrix}$$


**Giải**: – Tính định thức chứa tham số $(a, b, c)$
Sử dụng phép biến đổi định thức: $R_2 \rightarrow R_2 - R_1$ và $R_3 \rightarrow R_3 - R_1$. Sau khi đặt nhân tử chung ở các hàng và rút gọn, ta thu được định thức Vandermonde quen thuộc:$$\det(A) = (a-b)(b-c)(c-a)(a+b+c)$$


-----
-----
-----



Bài 4.4 – Giải hệ phương trình tuyến tính bằng phương pháp Cramer
Giải hệ phương trình tuyến tính sau bằng phương pháp Cramer:$$\begin{cases} 3x_1 + 2x_2 + x_3 = 5 \\ 2x_1 + 3x_2 + x_3 = 1 \\ 2x_1 + x_2 + 3x_3 = 11 \end{cases}$$


**Giải**: – Giải hệ phương trình tuyến tính bằng phương pháp CramerTính các định thức:
$D = \begin{vmatrix} 3 & 2 & 1 \\ 2 & 3 & 1 \\ 2 & 1 & 3 \end{vmatrix} = 12$, $D_1 = \begin{vmatrix} 5 & 2 & 1 \\ 1 & 3 & 1 \\ 11 & 1 & 3 \end{vmatrix} = 24$, $D_2 = -24$, $D_3 = 36$Nghiệm của hệ: $x_1 = \frac{D_1}{D} = 2, \; x_2 = \frac{D_2}{D} = -2, \; x_3 = \frac{D_3}{D} = 3$.


-----
-----
-----



Bài 4.5 – Tìm ma trận nghịch đảo bằng phương pháp định thức
Cho ma trận $A$. Xác định $A$ có khả nghịch không và tìm $A^{-1}$ bằng công thức đại số phần bù:$$A = \begin{pmatrix} 2 & 3 & 1 \\ 1 & 2 & 3 \\ 3 & 1 & 2 \end{pmatrix}$$

**Giải**: – Tìm ma trận nghịch đảo bằng phương pháp định thức
Tính được $\det(A) = 18 \neq 0 \rightarrow$ Ma trận khả nghịch.
Áp dụng công thức đại số phần bù, ta hoán vị và đổi dấu để tìm ma trận phụ hợp, kết quả cuối cùng:$$A^{-1} = \frac{1}{18} \begin{pmatrix} 1 & -5 & 7 \\ 7 & 1 & -5 \\ -5 & 7 & 1 \end{pmatrix}$$


-----
-----
-----



Bài 5.1 – Kiểm chứng không gian vectơ con (1 phương trình ràng buộc)
Trên không gian vectơ $V = \mathbb{R}^3$, xét tập hợp $W = \{(x, y, z) \in \mathbb{R}^3 \mid 2x - 3y + 4z = 0\}$. 
Chứng minh rằng $W$ là một không gian vectơ con của $V$.

**Giải**: – Kiểm chứng không gian vectơ con (1 phương trình ràng buộc)
1/ Để chứng minh $W$ là không gian vectơ con của $\mathbb{R}^3$, ta kiểm tra 3 điều kiện:Chứa vectơ không: $(0,0,0) \in W$ vì $2(0) - 3(0) + 4(0) = 0$ (Đúng).
2/ Tính đóng đối với phép cộng: Với mọi $u, v \in W$, tổng $u+v$ cũng thỏa mãn phương trình ràng buộc.
3/ Tính đóng đối với phép nhân vô hướng: Với mọi $u \in W, k \in \mathbb{R}$, tích $ku$ cũng thỏa mãn phương trình.$$\rightarrow \text{\textbf{Kết luận: }} W \le \mathbb{R}^3.$$


-----
-----
-----



Bài 5.2 – Kiểm chứng không gian vectơ con (Hệ phương trình ràng buộc)
Trên không gian vectơ $V = \mathbb{R}^3$, xét tập hợp $W = \{(x, y, z) \in \mathbb{R}^3 \mid x + 2y - z = 0 \text{ và } 2x - y + 3z = 0\}$. 
Chứng minh rằng $W \le V$.

**Giải**: – Kiểm chứng không gian vectơ con (Hệ phương trình ràng buộc)
Tương tự bài 5.1, tập nghiệm của một hệ phương trình tuyến tính thuần nhất luôn luôn tạo thành một không gian vectơ con của $\mathbb{R}^3$. Do đó $W \le \mathbb{R}^3$.


-----
-----
-----




Bài 5.3 – Không gian vectơ con trong không gian ma trận $M_2(\mathbb{R})$
Trên không gian các ma trận vuông cấp 2 $V = M_2(\mathbb{R})$, xét tập hợp:$$W = \left\{ A = \begin{pmatrix} a + b & 2a \\ -3b & a - 2b \end{pmatrix} \;\middle|\; a, b \in \mathbb{R} \right\}$$
Chứng minh $W$ là một không gian vectơ con của $V$.


**Giải**: – Không gian vectơ con trong không gian ma trận $M_2(\mathbb{R})$
Ta có thể tách ma trận trong tập hợp thành dạng:$$A = a\begin{pmatrix} 1 & 2 \\ 0 & 1 \end{pmatrix} + b\begin{pmatrix} 1 & 0 \\ -3 & -2 \end{pmatrix}$$
Vì $W$ được sinh ra từ tổ hợp tuyến tính của hai ma trận cố định, nên $W$ chính là một không gian vectơ con của $M_2(\mathbb{R})$.

-----
-----
-----




Bài 5.4 – Chứng minh một tập hợp không phải là không gian vectơ con
Trên không gian ma trận $V = M_2(\mathbb{R})$, xét tập hợp:$$W = \left\{ A = \begin{pmatrix} a^2 & b \\ 2b & a+b \end{pmatrix} \;\middle|\; a, b \in \mathbb{R} \right\}$$
Chứng minh rằng $W$ không phải là không gian vectơ con của $V$ bằng cách chỉ ra một phản ví dụ vi phạm tính đóng của phép cộng.


**Giải**: – Chứng minh một tập hợp không phải là không gian vectơ con
Phản ví dụ vi phạm tính đóng của phép cộng:
Chọn ma trận $A_1 \in W$ (với $a=1, b=0$) và $A_2 \in W$ (với $a=-1, b=0$).$$A_1 = \begin{pmatrix} 1 & 0 \\ 0 & 1 \end{pmatrix}, \quad A_2 = \begin{pmatrix} 1 & 0 \\ 0 & -1 \end{pmatrix}$$
Cộng hai ma trận lại: $A_1 + A_2 = \begin{pmatrix} 2 & 0 \\ 0 & 0 \end{pmatrix}$.
Để ma trận tổng này thuộc $W$ thì phải tồn tại $a, b$ sao cho $a^2 = 2$ và $a+b = 0 \implies a = -b$. 
Tuy nhiên ở vị trí ô $(2,2)$ ta có $a+b=0$, điều này thỏa mãn nhưng lại không duy trì được cấu trúc tuyến tính chuẩn khi nhân hệ số tự do. Cụ thể hơn, phép nhân hằng số $2A_1 = \begin{pmatrix} 2 & 0 \\ 0 & 2 \end{pmatrix}$ yêu cầu $a^2=2$ và $a+b=2 \implies$ vô nghiệm.$$\rightarrow \text{\textbf{Kết luận: }} W \text{ không phải là không gian con.}$$

-----
-----
-----




Bài 5.5 – Kiểm tra tính độc lập tuyến tính hay phụ thuộc tuyến tính
Trong không gian vectơ $\mathbb{R}^3$, cho tập hợp các vectơ:$$S = \{\alpha_1 = (1, 2, -1), \alpha_2 = (2, 5, 1), \alpha_3 = (1, 1, -4), \alpha_4 = (3, 7, -1)\}$$
Hỏi tập hợp $S$ độc lập tuyến tính hay phụ thuộc tuyến tính? Vì sao?


**Giải**: – Kiểm tra tính độc lập tuyến tính hay phụ thuộc tuyến tính
Mẹo nhanh: Tập hợp $S$ gồm 4 vectơ trong không gian số thực 3 chiều ($\mathbb{R}^3$). Theo lý thuyết số chiều, số vectơ trong một tập hợp độc lập tuyến tính không bao giờ vượt quá số chiều của không gian đó ($4 > 3$).
Do đó, tập hợp $S$ chắc chắn phụ thuộc tuyến tính.

-----
-----
-----



Bài 6.1 – Tìm cơ sở và số chiều của không gian sinh bởi tập hợp trên $\mathbb{R}^3$
Trong không gian $\mathbb{R}^3$, cho tập hợp $S = \{\alpha_1 = (1, 2, -1), \alpha_2 = (0, 1, 3), \alpha_3 = (2, 5, 1)\}$ và không gian con $W = \langle S \rangle$. Tìm một cơ sở và xác định số chiều của $W$.


**Giải**: – Tìm cơ sở và số chiều của không gian sinh bởi tập hợp trên $\mathbb{R}^3$
Xếp các vectơ thành các hàng của ma trận và biến đổi về dạng bậc thang:$$\begin{pmatrix} 1 & 2 & -1 \\ 0 & 1 & 3 \\ 2 & 5 & 1 \end{pmatrix} \rightarrow \begin{pmatrix} 1 & 2 & -1 \\ 0 & 1 & 3 \\ 0 & 0 & 0 \end{pmatrix}$$
Cơ sở của $W$: Bằng các dòng khác không của ma trận bậc thang: $\{(1, 2, -1), (0, 1, 3)\}$.Số chiều: $\dim(W) = 2$.


-----
-----
-----




Bài 6.2 – Tìm cơ sở và số chiều của không gian sinh bởi tập hợp trên $\mathbb{R}^4$Trong không gian $\mathbb{R}^4$, cho tập hợp $S = \{\alpha_1 = (1, -1, 2, 0), \alpha_2 = (2, 1, -1, 3), \alpha_3 = (1, 5, -8, 6)\}$ và không gian con $W = \langle S \rangle$. Tìm một cơ sở và số chiều của $W$.


**Giải**: – Tìm cơ sở và số chiều của không gian sinh bởi tập hợp trên $\mathbb{R}^4$
Xếp hàng và biến đổi tương tự bài 6.1, dòng thứ 3 bị triệt tiêu thành dòng các số 0.
Cơ sở của $W$: $\{(1, -1, 2, 0), (0, 3, -5, 3)\}$.
Số chiều: $\dim(W) = 2$.


-----
-----
-----




Bài 6.3 – Tìm hệ sinh, cơ sở và số chiều của không gian phụ thuộc tham số
Trong không gian $\mathbb{R}^4$, cho tập hợp:$$W = \{ \alpha = (a - b + 2c, 2a + b, -a + 3b + c, 3a + 3c) \mid a, b, c \in \mathbb{R} \}$$Chứng minh $W \le \mathbb{R}^4$, tìm một hệ sinh, một cơ sở và tính số chiều của $W$.

**Giải**: – Tìm hệ sinh, cơ sở và số chiều của không gian phụ thuộc tham số
Tách vectơ theo các tham số $a, b, c$:$$\alpha = a(1, 2, -1, 3) + b(-1, 1, 3, 0) + c(2, 0, 1, 3)$$
Hệ sinh: $S = \{(1, 2, -1, 3), (-1, 1, 3, 0), (2, 0, 1, 3)\}$.
Biến đổi ma trận tạo bởi các vectơ trên, ta thấy chúng độc lập tuyến tính.
Cơ sở: Chính là tập hợp $S$. Số chiều: $\dim(W) = 3$.



-----
-----
-----




Bài 6.4 – Tìm cơ sở và số chiều của không gian nghiệm hệ thuần nhất
Trong không gian $\mathbb{R}^3$, cho không gian con $W = \{(x, y, z) \in \mathbb{R}^3 \mid 2x - y + 3z = 0\}$. Tìm hệ sinh, cơ sở và số chiều của $W$.

**Giải**: – Tìm cơ sở và số chiều của không gian nghiệm hệ thuần nhất
Từ phương trình $2x - y + 3z = 0 \implies y = 2x + 3z$.
Vectơ nghiệm tổng quát có dạng: $(x, 2x+3z, z) = x(1, 2, 0) + z(0, 3, 1)$.Cơ sở: $\{(1, 2, 0), (0, 3, 1)\}$.
Số chiều: $\dim(W) = 2$.

-----
-----
-----




Bài 6.5 – Tìm tọa độ của vectơ đối với một cơ sở
Trong không gian $\mathbb{R}^3$:Chứng minh rằng tập hợp $S = \{\alpha_1 = (1, 1, 1), \alpha_2 = (1, 1, 0), \alpha_3 = (1, 0, 0)\}$ là một cơ sở của $\mathbb{R}^3$.Tìm tọa độ của vectơ $x = (4, 3, -1) \in \mathbb{R}^3$ đối với cơ sở $S$ (ký hiệu $[x]_S$).


**Giải**: – Tìm tọa độ của vectơ đối với một cơ sở
Định thức của ma trận lập bởi các vectơ trong $S$ bằng $-1 \neq 0 \implies S$ là một cơ sở của $\mathbb{R}^3$.
Giải hệ phương trình tổ hợp tuyến tính: $x = c_1\alpha_1 + c_2\alpha_2 + c_3\alpha_3$$$\begin{cases} c_1 + c_2 + c_3 = 4 \\ c_1 + c_2 = 3 \\ c_1 = -1 \end{cases} \implies \begin{cases} c_1 = -1 \\ c_2 = 4 \\ c_3 = 1 \end{cases}$$$$\rightarrow \text{\textbf{Tọa độ cần tìm: }} [x]_S = (-1, 4, 1)^T.$$

-----
-----
-----




Bài 7.1 – Công thức đổi tọa độ qua ma trận chuyển cơ sở
Trong không gian tuyến tính 3 chiều $U$, cho hai cơ sở $(a)$ và $(b)$ với ma trận chuyển cơ sở từ $(a)$ sang $(b)$ là:$$T = \begin{pmatrix} 1 & 1 & 2 \\ 2 & 3 & 1 \\ 3 & 4 & 4 \end{pmatrix}$$
Biết tọa độ của phần tử $X$ trong cơ sở thứ nhất $(a)$ là $[x]_a = (2, -1, 3)^T$. Hãy xác định tọa độ $[x]_b$ của $X$ trong cơ sở thứ hai $(b)$.

**Giải**: – Công thức đổi tọa độ qua ma trận chuyển cơ sở
Theo công thức đổi tọa độ chuẩn: $[x]_a = T \cdot [x]_b \implies [x]_b = T^{-1} \cdot [x]_a$.
Tìm ma trận nghịch đảo $T^{-1}$ của $T$:$$T^{-1} = \begin{pmatrix} 8 & 4 & -5 \\ -5 & -2 & 3 \\ -1 & -1 & 1 \end{pmatrix}$$
Tính tọa độ $[x]_b$:$$[x]_b = \begin{pmatrix} 8 & 4 & -5 \\ -5 & -2 & 3 \\ -1 & -1 & 1 \end{pmatrix} \begin{pmatrix} 2 \\ -1 \\ 3 \end{pmatrix} = \begin{pmatrix} -3 \\ 1 \\ 2 \end{pmatrix}$$

-----
-----
-----




Bài 7.2 – Xác định ma trận chuyển cơ sở khi biết mối liên hệ biểu diễn
Trong không gian tuyến tính 3 chiều $U$, cho hai cơ sở $(a) = \{a_1, a_2, a_3\}$ và $(b) = \{b_1, b_2, b_3\}$ thỏa mãn hệ thức:$$\begin{cases} b_1 = a_1 - 2a_2 + 3a_3 \\ b_2 = 2a_1 + a_2 - a_3 \\ b_3 = 3a_1 - a_2 + 2a_3 \end{cases}$$
Hãy tìm ma trận chuyển cơ sở $T_{a \rightarrow b}$.

**Giải**: – Xác định ma trận chuyển cơ sở khi biết mối liên hệ biểu diễn
Ma trận chuyển cơ sở $T_{a \rightarrow b}$ được lập bằng cách xếp các hệ số biểu diễn của các vectơ cơ sở mới $(b)$ đối với cơ sở cũ $(a)$ thành các cột tương ứng:$$T_{a \rightarrow b} = \begin{pmatrix} 1 & 2 & 3 \\ -2 & 1 & -1 \\ 3 & -1 & 2 \end{pmatrix}$$


-----
-----
-----




Bài 7.3 – Tính ma trận chuyển cơ sở thông qua cơ sở chính tắc
Trong không gian $\mathbb{R}^3$, cho hai cơ sở $(a) = \{a_1, a_2, a_3\}$ và $(b) = \{b_1, b_2, b_3\}$ với:$$a_1 = (1, 1, 0), a_2 = (0, 1, 1), a_3 = (1, 0, 1)$$$$b_1 = (2, 1, 1), b_2 = (1, 2, 1), b_3 = (1, 1, 2)$$
Hãy tìm ma trận chuyển cơ sở $T_{a \rightarrow b}$ bằng cách bắc cầu qua cơ sở chính tắc.

**Giải**: – Tính ma trận chuyển cơ sở thông qua cơ sở chính tắc
Gọi $E$ là cơ sở chính tắc. Ta có ma trận biểu diễn các vectơ cơ sở $A$ (từ cơ sở $a$) và $B$ (từ cơ sở $b$). Ma trận chuyển cơ sở từ $a$ sang $b$ được tính theo công thức bắc cầu: $T_{a \rightarrow b} = A^{-1}B$.
Sau khi tính toán ta thu được kết quả:$$T_{a \rightarrow b} = \begin{pmatrix} 1 & 1 & 0 \\ 0 & 1 & 1 \\ 1 & 0 & 1 \end{pmatrix}$$


-----
-----
-----




Bài 7.4 – Kiểm tra trị riêng của ma trận vuông
Cho ma trận thực:$$A = \begin{pmatrix} 1 & 2 \\ 4 & 3 \end{pmatrix}$$Hỏi $c = 5$ có phải là một trị riêng của $A$ không? Vì sao?Hỏi $c = -2$ có phải là một trị riêng của $A$ không? Vì sao?

**Giải**: – Kiểm tra trị riêng của ma trận vuông
Giá trị $c$ là trị riêng của $A$ nếu và chỉ nếu $\det(A - cI) = 0$.Với $c = 5$: $\det(A - 5I) = \begin{vmatrix} -4 & 2 \\ 4 & -2 \end{vmatrix} = 0 \rightarrow$ 
Là trị riêng.
Với $c = -2$: $\det(A - (-2)I) = \begin{vmatrix} 3 & 2 \\ 4 & 5 \end{vmatrix} = 7 \neq 0 \rightarrow$ Không phải trị riêng.

-----
-----
-----




Bài 7.5 – Tìm đa thức đặc trưng và tất cả các trị riêng của ma trận
Cho ma trận thực:$$A = \begin{pmatrix} 1 & 2 \\ 4 & 3 \end{pmatrix}$$Tìm đa thức đặc trưng $p_A(\lambda)$ và xác định toàn bộ các trị riêng của ma trận $A$.

**Giải**: – Tìm đa thức đặc trưng và tất cả các trị riêng của ma trận
Đa thức đặc trưng:$$p_A(\lambda) = \det(A - \lambda I) = \begin{vmatrix} 1-\lambda & 2 \\ 4 & 3-\lambda \end{vmatrix} = \lambda^2 - 4\lambda - 5$$Trị riêng: Giải phương trình đặc trưng $\lambda^2 - 4\lambda - 5 = 0$, ta thu được hai trị riêng là $\lambda_1 = -1$ và $\lambda_2 = 5$.

-----
-----
-----




Bài 8.1 – Kiểm tra một ánh xạ có là tích vô hướng hay không
Trên không gian $V = \mathbb{R}^2$, xét ánh xạ:$$\langle \alpha, \beta \rangle = 3x_1y_1 + 2x_2y_2$$với $\alpha = (x_1, x_2)$ và $\beta = (y_1, y_2)$. Chứng minh ánh xạ này định nghĩa một tích vô hướng hợp lệ trên $\mathbb{R}^2$.

**Giải**: – Kiểm tra một ánh xạ có là tích vô hướng hay không
Ta lần lượt kiểm tra 4 tiên đề của tích vô hướng: tính tuyến tính đối với biến thứ nhất, tính đối xứng ($\langle \alpha, \beta \rangle = \langle \beta, \alpha \rangle$), và tính xác định dương ($\langle \alpha, \alpha \rangle = 3x_1^2 + 2x_2^2 \ge 0$, bằng $0$ khi và chỉ khi $\alpha = 0$). Ánh xạ này thỏa mãn đầy đủ tất cả các tiên đề trên nên nó là một tích vô hướng hợp lệ.



-----
-----
-----




Bài 8.2 – Chứng minh ánh xạ không phải là tích vô hướng
Trên không gian $V = \mathbb{R}^2$, xét ánh xạ:$$\langle \alpha, \beta \rangle = 2x_1y_2 - 3x_2y_1 + x_1^2$$
Hỏi ánh xạ này có phải là một tích vô hướng trên $\mathbb{R}^2$ hay không? Tại sao? (Hãy chỉ ra tính chất bị vi phạm).

**Giải**: – Chứng minh ánh xạ không phải là tích vô hướng
Ta chỉ ra tính chất bị vi phạm dễ thấy nhất là Tính đối xứng.
Thử với $\alpha = (1, 0)$ và $\beta = (0, 1)$: $\langle \alpha, \beta \rangle = 2(1)(1) - 3(0)(0) + 1^2 = 3$.
Đổi ngược lại: $\langle \beta, \alpha \rangle = 2(0)(0) - 3(1)(1) + 0^2 = -3$.Vì $\langle \alpha, \beta \rangle \neq \langle \beta, \alpha \rangle$, ánh xạ này không phải là một tích vô hướng.


-----
-----
-----




Bài 8.3 – Trực chuẩn hóa tập hợp bằng phương pháp Gram-Schmidt
Trong không gian Euclide $\mathbb{R}^3$ với tích vô hướng tiêu chuẩn, hãy áp dụng thuật toán Gram-Schmidt để trực chuẩn hóa tập hợp các vectơ sau:$$S = \{u_1 = (1, 1, 0), u_2 = (1, 0, 1), u_3 = (0, 1, 1)\}$$


**Giải**: – Trực chuẩn hóa tập hợp bằng phương pháp Gram-Schmidt
Áp dụng thuật toán Gram-Schmidt từng bước cho hệ $S = \{u_1, u_2, u_3\}$:$v_1 = u_1 = (1, 1, 0) \implies q_1 = \frac{v_1}{\|v_1\|} = \left(\frac{1}{\sqrt{2}}, \frac{1}{\sqrt{2}}, 0\right)$$v_2 = u_2 - \langle u_2, q_1 \rangle q_1 = \left(\frac{1}{2}, -\frac{1}{2}, 1\right) \implies q_2 = \frac{v_2}{\|v_2\|} = \left(\frac{1}{\sqrt{6}}, -\frac{1}{\sqrt{6}}, \frac{2}{\sqrt{6}}\right)$$v_3 = u_3 - \langle u_3, q_1 \rangle q_1 - \langle u_3, q_2 \rangle q_2 = \left(-\frac{2}{3}, \frac{2}{3}, \frac{2}{3}\right) \implies q_3 = \left(-\frac{1}{\sqrt{3}}, \frac{1}{\sqrt{3}}, \frac{1}{\sqrt{3}}\right)$


-----
-----
-----



Bài 8.4 – Trực chuẩn hóa một hệ vectơ đã trực giao sẵn (Độ dài chuẩn = 9)
Trong không gian Euclide $\mathbb{R}^3$ với tích vô hướng tiêu chuẩn, cho tập hợp các vectơ đã vuông góc từng đôi một:$$S = \{\alpha_1 = (1, 4, 8), \alpha_2 = (8, 4, -1), \alpha_3 = (4, -8, 4)\}$$
Hãy trực chuẩn hóa tập hợp $S$.

**Giải**: Độ dài của các vectơ đều bằng $9$ (Ví dụ: $\|\alpha_1\| = \sqrt{1^2+4^2+8^2} = 9$).
Hệ trực chuẩn là:$$q_1 = \left(\frac{1}{9}, \frac{4}{9}, \frac{8}{9}\right), \quad q_2 = \left(\frac{8}{9}, \frac{4}{9}, -\frac{1}{9}\right), \quad q_3 = \left(\frac{4}{9}, -\frac{8}{9}, \frac{4}{9}\right)$$


-----
-----
-----




Bài 8.5 – Trực chuẩn hóa một hệ vectơ đã trực giao sẵn (Độ dài chuẩn = 5)
Trong không gian Euclide $\mathbb{R}^3$ với tích vô hướng tiêu chuẩn, cho tập hợp các vectơ:$$S = \{\alpha_1 = (3, 4, 0), \alpha_2 = (-4, 3, 0), \alpha_3 = (0, 0, 5)\}$$
Hãy tiến hành trực chuẩn hóa tập hợp $S$.

**Giải**:: Độ dài của các vectơ đều bằng $5$ (Ví dụ: $\|\alpha_1\| = \sqrt{3^2+4^2+0} = 5$).
Hệ trực chuẩn là:$$q_1 = \left(\frac{3}{5}, \frac{4}{5}, 0\right), \quad q_2 = \left(-\frac{4}{5}, \frac{3}{5}, 0\right), \quad q_3 = (0, 0, 1)$$