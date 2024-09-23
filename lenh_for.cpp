#include<iostream>	
using namespace std;
int main(){
	cout<<"CAC LENH DIEU KHIEN CHUONG TRINH\n"
	    <<"cau truc dieu khien 3: for\n"
	    <<"cu phap: for([khoi_khoi_tao]; [khoi_dieu_kien]; [khoi_dem]){Khoi_lenh_thuc_hien;}\n"
	    <<"dau [] boc 1 thanh phan KO BAT BUOC, dau ; ko nam trong [] => 2 dau la BAT BUOC\n";
	    
	//vi du: liet ke cac so nguyen to trong khoang tu A->B.
	//thuat toan: 
	// input : nhap 2 so nguyen A và B
	// output: in ra man hinh CAC so nguyen la so nguyen to nam trong doan A den B
	// so nguyen to la so thoa man dk gì? THIS IS MATH
	
	//dang duc phuc: 10d trong list diem thanh phan => snt la so ONLY chia het cho 1 va chinh no
	
	//=> THUAT TOAN DE KIEM TRA 1 SO NGUYEN N CO PHAI SNT HAY KO?
	//KIEM TRA TÍNH CHIA HET CUA N CHO CÁC SO NGUYEN i NAM TRONG KHOANG (2..N-1)
	//NEU N CHIA HET CHO 1 GIA TRI i NAO DO (2..n-1) => N KO PHAI LA SNT; NGUOC LAI: N LA SNT
	
	//SU DUNG 1 VONG LAP FOR: DE KIEM TRA TINH CHIA HET : TOAN TU % LIEN QUAN CHIA LAY DU
	//n CHIA HET i <==> (n%i => DC SO DU, SO DU NAY ==0): IF(n%i==0) {Do_SOMETHING khi n chia het cho i } 
	cout<<"\nBAI TOAN: liet ke cac so nguyen to trong khoang tu A->B. \n";
	int a,b; //chu thuong cho nhanh
	cout<<"NHap 2 so nguyen A va B: ";
	cin>>a>>b;
	cout<<"   So nguyen to la: ";
	bool tontai=false;  //dau bai bo Sung:  neu ko co snt nao trong khoang a..b thi in ra: chang co snt nao
	for(int n = a; n<=b; n++){		//duyet các so nguyen n trong khoang tu a..b
		bool ok=true;				//tam coi n la so nguyen to
		for(int i=2;i<=n-1;i++)
			if(n%i == 0){
				ok=false; 			//khang dinh: n ko phai so nguyen to
				break;				//dung dc trong for: thoat ngay khoi lenh for(i) gan nhat boc no : ko can thu chia them cac so khac
			}
		//..for(i) chay xong, xong vi lenh break hoac chay het tu 2..n-1 ma ko break
		if(ok){
			tontai=true;   //ro rang co ton tai snt vi sap in no ra man hinh
	  		cout<<n<<" ";  //cout n ra man hinh khi ok van la true (n ko chia het cho i nao ca)
	  	}
	}
	if(!tontai)cout<<"chang co snt nao ca";
}
