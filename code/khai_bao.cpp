#include<iostream>	
using namespace std;
#define PI 3.14L

//so thuc: so.so  => kieu double
//so thuc: so.sod (hau to ki tu d) la so thuc : double
//so thuc: so.soL (hau to ki tu L) la so thuc : long double
//so thuc: so.sof (hau to ki tu f) la so thuc : float

int main()
{
	//KHAI BAO BIEN, KHAI BAO HANG
	//KDL tenbien;
	int a;
	//KDL tenbien1, tenbien2;
	int b,c;
	
	//kdl tenbien=giatri; //khai bao co khoi tao
	int d=3;
	
	//hon hop
	
	double e,f=4,z;  //khi ko khoi tao thi gia tri THUONG = 0, KO PHAT MOI TRUONG HOP
	
	cout<<"e="<<e<<" f="<<f<<" z="<<z<<endl;
	
	//LUON KHOI TAO GIA TRI CHO BIEN TRUOC KHI DUNG NO O VE PHAI CUA TOAN TU GAN (=)
	
	double t;  //t ko khoi tao van OK vi t ko o ben phai =. 
	t=e+z+f;  //e va z la o ve phai cua toan tu tu gan (=). ben phai = thi DOC gia tri ra de do_something
	cout<<"tong t = "<<t<<endl;
	if(t == 4)cout<<"TOng equal 4\n"; else cout<<"tong not equal 4\n";
	if(e>0)cout<<"e duong" ; else cout<<"e ko duong";
	
	
	//KHAI BAO HANG
	//const KDL tenHang=GiaTri;
	const int p=3;
	
	cout<<"\nHang p="<<p<<" size p = "<<sizeof(p)<<"bytes"<<endl;
	
	cout<<"Hang PI="<<PI<<" size PI = "<<sizeof(PI)<<"bytes"<<endl;  //PI khai bao #define PI 3.14 o tren dau chuong trinh
	
	//p=4;  //loi thay doi gia tri cua hang so
	//p=3; //em ko doi => VAN LOI
	
	//khai bao HANG nhu nây van OK
	 int const n=99;  //khai bao bien ten: namespace, kieu du lieu so nguyen 4 byte co dau, khoi tao gia tri  = 99
	
	
	//int m const =99;   => nhu nay ko dc
}
