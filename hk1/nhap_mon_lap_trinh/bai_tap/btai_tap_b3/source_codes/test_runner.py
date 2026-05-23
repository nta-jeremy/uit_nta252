import os
import subprocess

inputs_map = {
    # chuoi_ky_tu
    "chuoi_ky_tu/bai1.cpp": "abcdcba\n",
    "chuoi_ky_tu/bai2.cpp": "hello world\n",
    "chuoi_ky_tu/bai3.cpp": "abcdef\n",
    "chuoi_ky_tu/bai4.cpp": "hello world\no\n",
    "chuoi_ky_tu/bai6.cpp": "hello world\nworld\n",
    "chuoi_ky_tu/bai7_9.cpp": "hello world\nl\nx\n",
    "chuoi_ky_tu/bai8.cpp": "hello world\nl\n",
    "chuoi_ky_tu/bai10.cpp": "HeLlO WoRlD\n",
    "chuoi_ky_tu/bai11.cpp": "hello world\n",
    "chuoi_ky_tu/bai12.cpp": "hello world\n",
    "chuoi_ky_tu/bai13.cpp": "hello world\nworld\n",

    # kieu_du_lieu_cau_truc
    "kieu_du_lieu_cau_truc/bai1.cpp": "2\nBD\nBinh Duong\n2500000\n2694.4\nHCM\nHo Chi Minh\n9000000\n2061.2\n",
    "kieu_du_lieu_cau_truc/bai2.cpp": "2\nSV01\nNguyen Van A\nNam\nBD\n10 10 10 10 10 10\nSV02\nTran Thi B\nNu\nHCM\n4 4 4 4 4 4\n",
    "kieu_du_lieu_cau_truc/bai3.cpp": "1 2\n3 4\n",
    "kieu_du_lieu_cau_truc/bai4.cpp": "28 2 2024\n"
}

def main():
    source_dir = os.path.dirname(os.path.abspath(__file__))
    
    topics = ["chuoi_ky_tu", "kieu_du_lieu_cau_truc"]
    files = []
    
    for topic in topics:
        topic_dir = os.path.join(source_dir, topic)
        if os.path.isdir(topic_dir):
            topic_files = [os.path.join(topic, f) for f in os.listdir(topic_dir) if f.endswith(".cpp")]
            
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
        test_input = inputs_map.get(rel_filepath, "\n")
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
