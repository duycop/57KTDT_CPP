#include<iostream>	
#include<cmath>				//khai bao thu vien TOAN HOC, vi trong bai can dung no
#include<iomanip>	   //khi can print do chinh xac cua so thuc

using namespace std;

int main()
{
	cout<<"KHAI BAO THU VIEN: \n";
	cout<<"1. thu vien phai ton tai, ko phan biet HOA thuong\n";
	cout<<"2. KHONG KHAI BAO THUA: can dung HAM or HANG trong 1 thu vien thi moi khai bao\n";
	cout<<"3. DA khai bao thu vien: NEN dung nhung thu no da dinh nghia. d/n overwite OK\n";
	cout<<"SU DUNG 1 VAI HAM | HANG cua thu vien CMATH\n";
	cout<<"HANG SO PI (d/n voi ten M_PI) gia tri = "<<M_PI<<endl;
	cout<<"HANG SO E  (d/n voi ten M_E) gia tri = "<<M_E<<endl;
	cout<<"Cac ham luong giac (tham so o he RADIAN): sin, cos, tag, atag,...\n";
	cout<<"Cac ham mu : sqrt, exp, pow\n";
	cout<<"sqrt(x)  => x mu 1/2 (can bac 2 of x)    vd 3^(1/2) sqrt(3)= "<<sqrt(3)<<endl;	
	cout<<"exp(x)   => e mu x, vd: e^(3.5) exp(3.5)= "<<exp(3.5)<<endl;	
	cout<<"pow(x,y) => x mu y vd: 1.5^(0.6) pow(1.5, 0.6)= "<<pow(1.5, 0.6)<<endl;
	cout<<"Cac ham KHAC : abs, log, log10,.......... tra cuu tai https://cplusplus.com\n";
	cout<<"abs(x) => |x|  (tri tuyet doi), vd   abs(-3.6)= "<<abs(-3.6)<<endl;
	cout<<"log(x) => lograrit co so M_E, vd   log(M_E^2)= "<<log(M_E*M_E)<<endl;
	
	//bai thi:  cut = a*b*c*10^-7 : pow(10,-7)  ko nen
	//                              1e-7        NEN dung vi ko can thu vien
		
	cout<<"\nSo pi dc d/n voi do chinh xac rat cao, nhung print ra man hinh dc vai so sau dau phay\n";
	cout<<"DO chinh xac ko doi, DO CHINH XAC HIEN THI MAC DINH LA 6 SO SAU DAU PHAY\n";
	double x1=0.123656789;
	cout<<"test hien thi x1 = "<<x1<<endl;  //hien thi: 0.123457
	cout<<"test hien thi x1 = "<<setprecision(3)<<x1<<endl;  //hien thi: 0.123457
	double x2=0.999999789;
	cout<<"test hien thi x2 = "<<x2<<endl;  //hien thi: 1
	cout<<"test hien thi 1-x2 = "<<(1-x2)<<endl;  //hien thi:  2.11e-007
	
	cout<<"ham setbase trong tv iomanip: thiet lap co so se hien thi\n";
	cout<<"so 123 trong he 10="<<123<<endl;
	cout<<"so 123 trong he nhi phan KO DUOC="<<setbase(2)<<123<<endl;
	cout<<"so 123 trong he 16 OK ="<<setbase(16)<<123<<endl;
	cout<<"so 123 trong he 8 OK ="<<setbase(8)<<123<<endl;
}
