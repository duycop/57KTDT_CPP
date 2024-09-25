# 57KTDT_CPP

**Buổi học 1** (9/9): Giới thiệu môn học, thống kê ABCDEF, cách học, cách thi, cách khai thác quyền lợi

**Buổi học 2** (11/9): Nghỉ do lụt

**Buổi học 3** (16/9): Không điểm danh, các buổi sau sẽ điểm danh.

  1. Bộ cài [Dev CPP 5.11](https://orwelldevcpp.blogspot.com/2015/04/dev-c-511-released.html)
  2. Các kiểu dữ liệu trong C++ => xem code [hello.cpp](code/hello.cpp)
  3. Cách khai báo hằng, khai báo biến trong C++ => xem code [khai_bao.cpp](code/khai_bao.cpp)
  4. Chém gió với [ChátGPT](https://chatgpt.com/share/66e7da28-e030-800a-a62e-0e1b4ee0fae7)

**Buổi học 4** (18/9): Không điểm danh, các buổi sau sẽ điểm danh.

  1. Cách khai báo thư viện toán học, trong thư viện này có M_PI, có nhiều hàm... [thu_vien.cpp](code/thu_vien.cpp)
  2. Cách nhập/xuất trong C++: **cin>>biến** để nhập từ bàn phím vào biến, **cout<<biểu_thức** để xuất biểu thức ra màn hình [nhap_xuat.cpp](code/nhap_xuat.cpp)
  3. Hiển thị số thực với độ chính xác được thiết lập với **#include<iomanip>** và **<<setprecision(22)** xem code [S1.cpp](code/S1.cpp)
  4. Các toán tử trong C++ : toán tử toán học (cộng +, trừ - , nhân *, chia /, chia lấy dư %), toán tử so sánh (>, <, >=, <=, ==, !=), toán tử gộp các điều kiện bool (AND &&, OR ||, NOT !), toán tử làm việc theo cặp bit (AND &, OR |, XOR ^) [toan_tu.cpp](code/toan_tu.cpp)
  5. Bài tập ứng dụng toán tử: Nhập 3 cạnh 1 tam giác, print ra màn hình chu vi và diện tích, xem code [tam_giac.cpp](code/tam_giac.cpp)
  6. Các cấu trúc điều khiển trong C++: xem code [if_else_switch_for_while_do.cpp](code/if_else_switch_for_while_do.cpp)

**Buổi học 5** (23/9): 
  1. Tiếp tục câu lệnh rẽ nhanh : if ko else, if có else, cần nhớ cú pháp, sơ đồ khối: xem file [if_else.cpp](code/if_else.cpp)
  2. Lệnh rẽ nhiều nhánh **switch**: cần nhớ cú pháp, sơ đồ khối, sơ đồ bé đứng tè: xem file [switch_case.cpp](code/switch_case.cpp)
  3. Lệnh **for**: cần nhớ cú pháp **for(khối_khởi_tạo; khối_điều_kiện; khối_đếm){ khối_thân_for; }** : xem file code [for1](code/lenh_for.cpp) và [for2](code/lenh_for2.cpp)
  4. Events trong buổi học: 1 bạn gặp vấn đề về sức khoẻ, đã được hotgirl y tế chăm sóc; 1 bạn làm thêm quá sức được người thân đưa về!
  5. Các điểm thưởng khi học(thưởng 10 điểm):

    - K235510303245 Đặng Đức Phúc: snt là số nguyên dương và ONLY chia hết cho 1 và chính nó    
    - K235520201152 Nguyễn Văn Vang: Có câu hỏi xây dựng bài    
    - K235520207054 Nguyễn Mạnh Sơn: Trả lời đúng về toán tử && (AND) và toán tử || (OR)
    
  6. Các ví dụ minh hoạ đều kèm đầu bài, phân tích thuật toán, code giải kèm chú thích. Đặc biệt các bạn nghe giảng được phép hỏi đáp và thưởng điểm!
   
**Buổi học 6** (25/9): 
  1. Dành 1 tiết nói lại về 2 file của buổi trước: for, for2
  2. Lệnh **while(điều_kiện){khối_lệnh;}** sẽ lặp mãi nếu đk luôn đúng, còn nếu đk sai ngay lần đầu thì khối lệnh ko đc thực hiện lần nào. Còn nếu lặp một số lần rồi mà đk chuyển sang sai thì thoát. Dịch nôm : Trong khi điều kiện còn đúng thì còn lặp. xem file [lenh_while.cpp](code/lenh_while.cpp)
  3. Lệnh **do{khối_lệnh;}while(điều_kiện);** lệnh này thực hiện khối lệnh trước, kiểm tra điều kiện sau, nếu điều kiện đúng thì lặp lại khối lệnh, nếu điều kiện sai thì thoát, kể cả là sai ngay từ lần đầu kiểm tra thì khối lệnh đã thực hiện được 1 lần. Xem file [do_while.cpp](code/do_while.cpp)
  4. trong file do_while.cpp thì có dùng toán tử += và ++, 1 bạn sv đã phát hiện ra thầy dạy sót => thưởng nóng 10đ cho bạn gái **K235520207028-Nguyễn Thị Huyền**
  5. Thầy bù đắp thiếu sót bằng cách giảng bổ xung về các toán tử còn thiếu: ~a phủ định bít của a, a >> n (dịch phải n bít), a << n (dịch trái n bít), ++ --,  += -= *= /= %= <<= >>= xem chi tiết file [toan_tu_bo_xung.cpp](code/toan_tu_bo_xung.cpp)
  6. vd về dùng lệnh lặp: nhập vào 1 số chính phương, nếu đúng thông báo OK, ngược lại thì bắt nhập lại. xem file [vd_lap.cpp](code/vd_lap.cpp)
  7. Chú ý khi đọc code: xem kỹ đoạn phân tích từ đầu bài => thuật toán => cách làm.
