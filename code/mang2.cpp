#include<iostream>	
using namespace std;
int main(){
	cout<<"Nhap mang co N phan tu so nguyen, dem/liet ke/tong/TBC cac so HOAN HAO trong mang\n";
	//so hoan hao la so = tong cac uoc cua no.
	
	int n;	//KHAI BAO BIEN CHUA SOLUONG PT
	cout<<"Nhap so luong phan tu cua mang: ";
	cin>>n; //DOI NGUOI DUNG NHAP GIA TRI CHO BIEN N
	int a[n];  //khai bao mang A co N phan tu so nguyen
	for(int i=0; i<n; i++){
		cout<<" a["<<i<<"] = ";
		cin>>a[i];
	}
	
	int dem=0,tong=0;
	cout<<"Cac so  hoan hao trong mang: "; //phuc vu liet ke
	for(int i=0; i<n; i++){
		int sum=0; //chua tong cac uoc cua i
		for(int k=1;k<=a[i]-1;k++)if(a[i]%k==0)sum+=k;  //duyet qua moi so 1..i-1: neu so nao bi i chia het=>no la uoc => cong vao SUM
		if(a[i]==sum){ //thoa tinh chat SO HOAN HAO
		  cout<<a[i]<<" ";	 //liet ke
		  tong+=a[i];		 //tinh tong
		  dem++;             //dem tang 1
		}
	}
	cout<<"\nSo luong cac so HOAN HAO la: "<<dem;
	cout<<"\nTong cac so HOAN HAO la: "<<tong;
	if(dem>0)
		cout<<"\nTBC cac so HOAN HAO la: "<<tong/(float)dem;
	else
		cout<<"\nKHONG CO SO HOAN HAO => KO TINH DC TBC";
}
	
