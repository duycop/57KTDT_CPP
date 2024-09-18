#include<iostream>	
#include<cmath>	
using namespace std;
int main(){
	//bt ap dung toan tu: && de kiem tra dk tao thanh tam giac
	
	//de bai: nhap 3 so thuc, tinh va in ra cv va dt tam giac
	double a,b,c;  //khai bao gop 3 bien cung 1 kieu
	cout<<"nhap 3 so thuc la 3 canh cua tam giac: "; //thong bao nhap
	cin>>a>>b>>c;  //1 lenh cin, nhap luon 3 bien
	
	//tesst nhap : done, remove by comment
	//cout<<"test ban vua nhap 3 so thuc: a="<<a<<" b="<<b<<" c="<<c;
	
	if(!(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)){
		cout<<"3 so vua nhap ko tao thanh tam giac";
	}else{		
		double cv=a+b+c;
		double p=cv/2;
		double dt=sqrt(p*(p-a)*(p-b)*(p-c));
		cout<<"Tam giac co cv="<<cv<<" dien tich = "<<dt;
	}
}
