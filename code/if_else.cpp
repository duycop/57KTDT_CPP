#include<iostream>	
using namespace std;
int main(){
	cout<<"CAC LENH DIEU KHIEN CHUONG TRINH\n"
	    <<"1. if, if else, if else long nhau\n"
	    <<"2. switch case\n"
	    <<"3. for\n"
	    <<"4. while ...\n"
		<<"5. do...while\n";
	/*lenh if cu phap day du nhu sau:
	dang 1: chi co if, ko co else
	if(bieu_thuc_bool){
		khoilenh1_of_if_neu_bool_is_true
	}
	
	dang 2: co ca if va else
	
	if(bieu_thuc_bool){
		khoilenh1_of_if_neu_bool_is_true
	}else{
		khoilenh2_of_if_neu_bool_is_false
	}
	*/	
	
	//vd if ko else : neu dk dung thi lam gì do', ko dung ko lam.
	//nhap 1 so nguyen, neu la so chan thi in ra man hinh : day la so chan
	int a;
	cout<<"Hay nhap 1 so nguyen: ";
	cin>>a;  //>> la toan tu NHAP : wait user input string from keyboard ENTER. convert string => int => value assign to a 
	if(a%2==0)  //chia lay du: a cho 2 : kiem tra so du == 0 ?
	{
		//dung : a la so chan
		cout<<"Day la so chan\n";
		cout<<"Day ko phai la so le\n";
	}else{
		cout<<"day la so LE\n";
		if(a%3==0){
			cout<<"so nay cung chia het cho 3\n";
		}
	}
	//cacs bai toan phuc tap: can if long nhau
	//hoac Su dung toan tu && || dau () mot cach hop ly
	cout<<"bye nhe";  //ko thuoc lenh if: luon chay sau khi if chay xong
		
	//neu dk dung: muon lam nhieu hon 1 lenh (khoi lenh) thi can thiet phai co cap {} boc khoi lenh
}
