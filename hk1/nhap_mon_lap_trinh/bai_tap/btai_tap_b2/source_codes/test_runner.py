import os
import subprocess
import sys

# Mapping of file paths to their corresponding inputs
inputs_map = {
    # Hàm bài tập
    "ham/bai1.cpp": "10\n",               # SNT nho hon 10
    "ham/bai2.cpp": "12 18\n",            # UCLN/BCNN 12 va 18
    "ham/bai3.cpp": "5 10 15 2\n",        # Min 4 so
    "ham/bai4.cpp": "1 -5 6\n",           # PT bac 2: x^2 - 5x + 6 = 0
    "ham/bai5.cpp": "0 0\n0 3\n4 0\n",    # Toa do A(0,0), B(0,3), C(4,0)
    "ham/bai6.cpp": "3 4 5\n",            # Kiem tra tam giac 3 4 5
    "ham/bai7.cpp": "15 5 2024\n",        # Ngay 15 thang 5 nam 2024
    "ham/bai8.cpp": "25\n",               # Doc so 25

    # Mảng 1 chiều
    "mang1d/bai1.cpp": "5\n1 2 3 4 5\n",
    "mang1d/bai2.cpp": "5\n",              # Khoi tao ngau nhien
    "mang1d/bai3.cpp": "5\n1 2 3 4 5\n",
    "mang1d/bai4.cpp": "5\n10 2 8 1 5\n",
    "mang1d/bai5.cpp": "5\n-2 3 -1 2 5\n",
    "mang1d/bai6.cpp": "5\n-2 -5 3 -1 0\n",
    "mang1d/bai7.cpp": "5\n1 2 3 4 5\n2\n", # Xoa vi tri k=2
    "mang1d/bai8.cpp": "5\n1 3 2 3 5\n3\n", # Xoa gia tri X=3
    "mang1d/bai9.cpp": "5\n1 2 3 4 5\n",
    "mang1d/bai10.cpp": "5\n1 2 3 4 5\n3\n",# Tim kiem x=3
    "mang1d/bai11.cpp": "5\n5 2 4 1 3\n",
    "mang1d/bai12.cpp": "5\n1 2 3 4 5\n",
    "mang1d/bai13.cpp": "5\n1 2 3 4 5\n10\n2\n", # Them x=10 vao k=2
    "mang1d/bai14.cpp": "5\n-1 2 -3 4 5\n",
    "mang1d/bai15.cpp": "5\n1 2 3 2 1\n",
    "mang1d/bai16.cpp": "5\n1 2 3 4 5\n",
    "mang1d/bai17.cpp": "5\n2 3 4 5 6\n",
    "mang1d/bai18.cpp": "3\n1 3 5\n3\n2 4 6\n", # Noi 2 mang

    # Mảng 2 chiều
    "mang2d/bai1.cpp": "2\n3\n1 2 3\n4 5 6\n",
    "mang2d/bai2.cpp": "2\n3\n1 2 3\n4 5 6\n",
    "mang2d/bai3.cpp": "2\n3\n10 2 30\n4 50 6\n",
    "mang2d/bai4.cpp": "3\n3\n9 8 7\n6 5 4\n3 2 1\n",
    "mang2d/bai5.cpp": "3\n3\n9 8 7\n6 5 4\n3 2 1\n",
    "mang2d/bai6.cpp": "2\n3\n1 2 3\n4 5 6\n10 20 30\n",
    "mang2d/bai7.cpp": "2\n3\n1 2 3\n4 5 6\n10 20 30\n1\n",
    "mang2d/bai8.cpp": "3\n3\n1 2 3\n4 5 6\n7 8 9\n1\n",
    "mang2d/bai9.cpp": "3\n3\n1 2 3\n4 5 6\n7 8 9\n",
    "mang2d/bai10.cpp": "2\n2\n1 2\n3 4\n5 6\n7 8\n",
    "mang2d/bai11.cpp": "2\n3\n1 2 3\n4 5 6\n",
    "mang2d/bai12.cpp": "3\n1 2 3\n4 5 6\n7 8 9\n",
    "mang2d/bai13.cpp": "3\n3\n1 2 3\n4 5 6\n7 8 9\n1\n",
    "mang2d/bai14.cpp": "3\n3\n1 2 3\n4 5 6\n7 8 9\n",
}

def main():
    source_dir = os.path.dirname(os.path.abspath(__file__))
    
    topics = ["ham", "mang1d", "mang2d"]
    files = []
    
    for topic in topics:
        topic_dir = os.path.join(source_dir, topic)
        if os.path.isdir(topic_dir):
            topic_files = [os.path.join(topic, f) for f in os.listdir(topic_dir) if f.endswith(".cpp")]
            
            # Sắp xếp theo số của bài cho đẹp (e.g. bai1, bai2, bai10)
            def get_sort_key(rel_path):
                filename = os.path.basename(rel_path)
                num_part = "".join(c for c in filename if c.isdigit())
                return int(num_part) if num_part else 0
                
            topic_files.sort(key=get_sort_key)
            files.extend(topic_files)

    print(f"=== PHÁT HIỆN {len(files)} FILE C++ CẦN BIÊN DỊCH VÀ CHẠY TEST ===\n")
    
    results = []
    
    for idx, rel_filepath in enumerate(files, 1):
        filepath = os.path.join(source_dir, rel_filepath)
        binpath = os.path.splitext(filepath)[0]
        
        print(f"[{idx}/{len(files)}] Đang xử lý {rel_filepath}...", end="", flush=True)
        
        # 1. Biên dịch (Compile)
        compile_cmd = ["g++", "-O2", "-std=c++17", "-Wall", "-Wextra", "-o", binpath, filepath]
        compile_proc = subprocess.run(compile_cmd, capture_output=True, text=True)
        
        if compile_proc.returncode != 0:
            print(" ❌ LỖI BIÊN DỊCH!")
            results.append({
                "name": rel_filepath,
                "compile": "FAIL",
                "run": "N/A",
                "details": compile_proc.stderr
            })
            continue
        
        # 2. Chạy thử (Run test)
        test_input = inputs_map.get(rel_filepath, "5\n1 2 3 4 5\n")
        try:
            run_proc = subprocess.run(
                [binpath],
                input=test_input,
                capture_output=True,
                text=True,
                timeout=2.0
            )
            
            if run_proc.returncode == 0:
                print("  THÀNH CÔNG!")
                results.append({
                    "name": rel_filepath,
                    "compile": "PASS",
                    "run": "PASS",
                    "output": run_proc.stdout.strip(),
                    "details": ""
                })
            else:
                print(" ❌ LỖI KHI CHẠY (RUNTIME ERROR)!")
                results.append({
                    "name": rel_filepath,
                    "compile": "PASS",
                    "run": "RUNTIME_ERROR",
                    "details": f"Exit code: {run_proc.returncode}\nStderr: {run_proc.stderr}\nStdout: {run_proc.stdout}"
                })
        except subprocess.TimeoutExpired as e:
            print(" ❌ QUÁ THỜI GIAN CHẠY (TIMEOUT)!")
            results.append({
                "name": rel_filepath,
                "compile": "PASS",
                "run": "TIMEOUT",
                "details": f"Stdout so far: {e.stdout}\nStderr so far: {e.stderr}"
            })
        except Exception as e:
            print(f" ❌ LỖI HỆ THỐNG: {e}")
            results.append({
                "name": rel_filepath,
                "compile": "PASS",
                "run": "SYSTEM_ERROR",
                "details": str(e)
            })

    # In kết quả dưới dạng bảng Markdown
    print("\n" + "="*50)
    print("BÁO CÁO KẾT QUẢ CHẠY TEST TOÀN BỘ FILE")
    print("="*50 + "\n")
    
    headers = ["STT", "Đường Dẫn File", "Biên Dịch", "Chạy Thử", "Kết Quả Chi Tiết"]
    rows = []
    
    success_count = 0
    fail_compile_count = 0
    fail_run_count = 0
    
    for i, res in enumerate(results, 1):
        name = res["name"]
        comp = "✅ ĐẠT" if res["compile"] == "PASS" else "❌ LỖI"
        
        if res["run"] == "PASS":
            run_status = "✅ THÀNH CÔNG"
            success_count += 1
            output_lines = res["output"].splitlines()
            preview = "... \n" + "\n".join(output_lines[-2:]) if len(output_lines) > 2 else "\n".join(output_lines)
            preview = preview.replace("\n", " | ")
            detail = f"Output: `{preview}`"
        elif res["run"] == "N/A":
            run_status = "➖ KHÔNG CHẠY"
            fail_compile_count += 1
            detail = f"Lỗi biên dịch: `{res['details'].strip().splitlines()[0]}`"
        else:
            run_status = f"❌ LỖI ({res['run']})"
            fail_run_count += 1
            detail = f"Chi tiết: {res['details'].strip().replace('\n', ' | ')}"
            
        rows.append(f"| {i} | `{name}` | {comp} | {run_status} | {detail} |")
        
    print(f"| " + " | ".join(headers) + " |")
    print("|" + "|".join(["---" for _ in headers]) + "|")
    for r in rows:
        print(r)
        
    print(f"\n👉 TỔNG HỢP:")
    print(f"- Tổng số file: {len(files)}")
    print(f"- Biên dịch & Chạy thành công: {success_count}/{len(files)} ({(success_count/len(files))*100:.1f}%)")
    if fail_compile_count > 0:
        print(f"- Lỗi biên dịch: {fail_compile_count} file")
    if fail_run_count > 0:
        print(f"- Lỗi khi chạy: {fail_run_count} file")

if __name__ == "__main__":
    main()
