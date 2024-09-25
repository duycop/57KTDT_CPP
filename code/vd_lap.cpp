#include<iostream>	
#include<cmath>	
using namespace std;
int main(){
	cout<<"VI DU SU DUNG LENH LAP\n";
	
	cout<<"BAI TOAN: nhap vao 1 so chinh phuong, neu dung THONG BAO: OK, neu ko phai so chinh phuong bat nhap lai\n\n";
	
	//thuat toan:
	//step1 nhap vao 1 so nguyen
	//step2 kiem tra xem so do co phai la scp hay ko?
	//   YES : thong bao: OK va thoat chuong trinh.
	//   NO  : quay lai step1 (lap lai)
	
	// toi se di kiem tra sau khi co so nguyen => lua chon lenh LAP ma kt sau : do..while
	
	//SO CHINH PHUONG la so thoa man tinh chat gi?
	//nong duy hoang: 10d  so nguyen duong ma la binh phuong cua 1 so nguyen khac.
	
	/*
	float a=3.914;
	cout<<"test xem float a=3.914; thi a="<<a<<endl;  //print ra 3.914
	
	int b=3.914;
	cout<<"test xem int b=3.914; thi b="<<b<<endl;   //print ra so 3
	
	tesst lai kien thuc: gan 1 gia tri THUC cho 1 bien NGUYEN (b) thi b chi nhan dc phan nguyen cua so thuc do
	*/
	
	//thuat toan de phat hien 1 so nguyen la SCP ?
	//1 lay can bac 2 cua no => dc 1 so thuc => luu vao 1 bien kieu NGUYEN => chi nhan dc phan nguyen cua so thuc do
	//2 binh phuong so nguyen nhan dc : neu bang so can kiem tra => so kt la scp. vi ko mat thong tin
	
	//ok de roi, code thoi
	int n,b;
	do{	
		cout<<"Nhap so nguyen de kt xem co phai scp hay ko. N = ";
		cin>>n;
		b = sqrt(n);  //lenh nay XAM XIT : ep kieu tu dong GIA TRI THUC -> nguyen
		if(b*b == n)
		  cout<<"OK ban vua nhap SO CHINH PHUONG "<<n<<" = "<<b<<" binh phuong\n";
		else
		  cout<<"SO BAN VUA NHAP KO PHAI SO CHINH PHUONG\n NHAP LAI NHE\n";
	}while(!(b*b == n));
	cout<<"bye nhe!";
}


