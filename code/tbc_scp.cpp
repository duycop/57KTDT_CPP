#include<iostream>	
#include<cmath>
using namespace std;
int main(){
	cout<<"Tinh tbc cac so chinh phuong trong khoang A => B\n";	
	/*
	phan tich
		input: a,b   (a<b)
		output: trung binh cong cac scp co trong a..b
		tinh than moi bai toan tinh TBC:
			neu dem>0 thi moi tinh tbc
				tbc = tong/dem
			else: thong bao loi KHONG CO SCP NAO
		
		step1: khoi tao tong=0,dem=0
		step2: duyet qua moi so trong khoang a..b
		step3: 	neu so dang duyet (i) la scp : tong+=i; dem++
		step4: neu dem==0: bao loi; else tbc=tong/dem
			
	*/
	
	//code: 
	int a,b;
	cout<<"NHap 2 so nguyen a va b: ";
	cin>>a>>b;
	
	int tong=0, dem=0;
	for(int i=a; i<=b; i++){
		//check i co phai la scp =>YES
		int b = sqrt(i);  ///=> nho ra la phai khai bao cmath
		if(b*b==i){
			tong+=i;
			dem++;
		}
	}//duyet xong
	if(dem==0)
		cout<<"KHONG CO SCP NAO => KO TINH DC TBC NHE!";
	else 
		cout<<"tbc la : "<<(tong/dem);
}
