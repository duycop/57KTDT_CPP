#include<iostream>	
using namespace std;
int main(){
	cout<<"CAC LENH DIEU KHIEN CHUONG TRINH\n"
	    <<"cau truc thu 2: switch case\n\n";
	cout<<"bai toan: Tinh so ngay trong 1 thang\n";
	cout<<" input: thang\n";
	cout<<" output: so ngay cua thang do\n\n";
	int t;
	cout<<"Nhap vao thang muon tinh so ngay: ";
	cin>>t;
	switch(t){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: cout<<"Thang "<<t<<" co 31 ngay\n";
				 break;
		case 4:
		case 6:
		case 9:
		case 11: cout<<"Thang "<<t<<" co 30 ngay hehe\n";
				 break;
		case 2:  cout<<"Thang 2 co 28 ngay, nhung nam NHUAN co 29 ngay\n";
				 cout<<"Thang 2 nam nao? nhap so nam: ";
				 int n;
				 cin>>n;
				 if((n%4==0 && n%100!=0)||(n%400==0))
				 	cout<<"Thang 2 nam "<<n<<" co 29 ngay (nam nhuan)\n";
				 else
				 	cout<<"Thang 2 nam "<<n<<" co 28 ngay thoi(ko phai nam nhuan)\n";
				 break;
		default: cout<<"Thang phai trong khoang tu 1..12 nhe\n";
	}
			
}
