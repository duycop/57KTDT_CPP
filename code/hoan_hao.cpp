#include<iostream>	
using namespace std;
int main(){
	cout<<"lietke/dem/tong/tbc Cac so HOAN HAO tu 2..10000:\n";
	int dem=0,tong=0;
	cout<<"Liet ke: ";
	for(int i=2; i<10000; i++){
		int sum=0; //chua tong cac uoc cua i
		for(int k=1;k<=i-1;k++)if(i%k==0)sum+=k;  //duyet qua moi so 1..i-1: neu so nao bi i chia het=>no la uoc => cong vao SUM
		if(i==sum){ //thoa tinh chat SO HOAN HAO
		  cout<<i<<" ";	 //liet ke
		  tong+=i;		 //tinh tong
		  dem++;             //dem tang 1
		}
	}
	cout<<"\nSo luong dem dc: "<<dem;
	cout<<"\nTong: "<<tong;
	if(dem>0)
		cout<<"\nTBC: "<<tong/(float)dem;
	else
		cout<<"\nKHONG CO SO HOAN HAO => KO TINH DC TBC";
}
