#include<iostream>	
using namespace std;
int main(){
	cout<<"DU LIEU KIEU MANG TRONG C++\n";	
	
	/*
	KHAI BAO: kieu_du_lieu ten_mang[So_Luong];
	
	soluong : la HANG SO   => VD int a[10]
	soluong : la bien      =>    int a[n]  voi n la bien int da nhap gia tri
	khai bao 1 mang co So_Luong phan tu, cac phan tu deu thuoc kieu_du_lieu
	
	CACH SU DUNG: ten_mang[chi_so]
	vd: a[1], a[10]
	
	chi so: MIN=0, MAX = soluong-1
	
	
	*/
	
	/*
	//demo nhap 10 phan tu
	int a[10]; //khai bao mang a, co 10 phan tu, moi phan tu deu kieu int
	
	//nhap so luong cho 10 phan tu
	for(int i=0; i<10; i++){
		cout<<"NHap gia tri a["<<i<<"] = ";
		cin>>a[i];
	}
	*/
	
	//yeu cau Nhap mang co N phan tu so nguyen
	//liet ke cac so chan trong mang =>
	
	//step1: N la 1 so nguyen ma nguoi dung phai nhap vao
	//step2: vong lap: N lan, nhap dc cac phan tu luu vao mang
	//step3: duyet mang
	//step4:  voi so dang duyet a[i]: thoa t/c SO CHAN thi print no ra
	
	cout<<"Nhap mang co N phan tu so nguyen, liet ke cac so chan trong mang\n";
	int n;
	cout<<"Nhap so luong phan tu cua mang: ";
	cin>>n;
	int a[n];  //khai bao mang A co N phan tu so nguyen
	cout<<"test xem a co dung la n phan tu ko: kich thuoc mang A trong bo nho: "<<sizeof(a)<<" bytes\n";
	for(int i=0; i<n; i++){
		cout<<"NHap gia tri a["<<i<<"] = ";
		cin>>a[i];
	}
	
	cout<<"Cac so chan trong mang: ";
	for(int i=0; i<n; i++){
		if(a[i] %2 ==0) //so chan
		  cout<<a[i]<<" ";	
	}
}
	
