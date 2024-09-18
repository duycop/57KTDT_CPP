#include<iostream>	
using namespace std;
int main(){
	cout<<"NHAP XUAT TRONG C++\n";
	cout<<"NHAP tu ban phim, XUAT ra man hinh\n";
	//xuat du lieu: dung cout<<BIEU_THUC_BAT_KY;
	//xuat BIEU_THUC_BAT_KY la 1 xau ki tu: cout<<"noi dung doan ki tu";
	//xuat 1 ki tu: cout<<'X'; //xuat dc ki tu X ra man hinh
	//xuat 1 so nguyen a  => cout<<a
	int a=12345;
	cout<<"ket qua la: "<<a<<endl; //in chuoi, in so nguyen a, xuong dong
	
	//so thuc giong nhu vay
	//so thuc: neu muon DEP voi do chinh xac fix: dung tv iomanip, setprecision
	//ko can vd nua vi vd qua nhieu ve COUT roi
	
	cout<<"NHAP DU LIEU TU BAN PHIM\n";
	cout<<"NGUYEN TAC: nhap du lieu SE luu vao bien ==> can khai bao bien truoc\n";
	int tuoi;				//khai bai bien chua du lieu, chua tuoi se nhap
	cout<<"Nhap tuoi: ";	//dong thong bao y/c nguoi dung nhap cai gi
	cin>>tuoi;				//cin>>bien: cho doi vo thoi han NGUOI dung go ban phim chuoi so lieu ENTER
	cout<<"Ban vua nhap tuoi = "<<tuoi<<endl; // print bien tuoi ra man hinh
}
