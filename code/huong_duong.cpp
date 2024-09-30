#include<iostream>	
using namespace std;
int main(){
	cout<<"PHAN MEM TINH SO NGAY HUONG DUONG\n";	//thông tin về chương trình này, bài toán này.
	cout<<"Nhap DATE1 (d1,m1,y1): ";		//thông báo trước khi nhập date1
	int d1,m1,y1,d2,m2,y2;				//khai báo trước khi nhập
	cin>>d1>>m1>>y1;				//đợi người dùng nhập 3 số nguyên vào 3 biến
	cout<<"Nhap Date2 (d2,m2,y2): ";		//khai báo trước khi nhập
	cin>>d2>>m2>>y2;				//đợi người dùng nhập 3 số nguyên vào 3 biến	
	int dem = 0;  					//Khởi tạo biến đếm  = 0 chứa số ngày sẽ đếm	
	while(!(d1==d2 && m1==m2 && y1==y2)){		//điều kiện lặp: Nếu date1 KHÔNG BẰNG date2	
		int max_ngay_trong_thang;		//biến này sẽ tính số ngày MAX của tháng m1
		switch(m1){				//áp dụng thuật toán tính số ngày của 1 tháng
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: max_ngay_trong_thang=31;	//những tháng này có 31 ngày
					 break;
			case 4:
			case 6:
			case 9:
			case 11: max_ngay_trong_thang=30;	//những tháng này có 30 ngày
					 break;
			case 2:  if((y1%4==0 && y1%100!=0)||(y1%400==0))	//năm y1 nhuận
					 	max_ngay_trong_thang=29;	//tháng 2: 29 ngày
					 else					//năm ko nhuận
					 	max_ngay_trong_thang=28;	//tháng 2: 28 ngày
					 break;
		} //end switch
		dem++;  				//đếm thêm được 1 ngày
		d1=d1+1;  				//tăng sang ngày mai (tomorow)
		if(d1>max_ngay_trong_thang){ 		//nếu ngày mai lại vượt quá ngày MAX của tháng
			d1=1;  				//thì đó là ngày 1 của tháng tiếp theo
			m1++;				//tháng tiếp theo là m1++
			if(m1>12){  			//m1 đang là 12 thì m++ sẽ thành 13
				m1=1;  			//thì cần chỉnh lại là tháng 1
				y1++;  			//của năm tiếp theo
			}//end if m1 over 12
		}//end if d1 over max
	}//end while
	cout<<"HUONG DUONG: "<<dem<<" ngay";		//thông báo kết quả ra màn hình sô ngày đếm được
}
