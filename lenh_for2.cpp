#include<iostream>	
using namespace std;
int main(){
	cout<<"CAC LENH DIEU KHIEN CHUONG TRINH\n"
	    <<"cau truc dieu khien 3: for\n"
	    <<"cu phap: for([khoi_khoi_tao]; [khoi_dieu_kien]; [khoi_dem]){Khoi_lenh_thuc_hien;}\n"
	    <<"dau [] boc 1 thanh phan KO BAT BUOC, dau ; ko nam trong [] => 2 dau la BAT BUOC\n";
	    
	//vi du2: LIET KE CÁC SO CO 4 CHU SO MA CHIA CHO 8 DU 7 VÀ CHIA 125 THI DU 4.
	//BAI TOAN SO THI LOP 9->10 NAM 1995.
	
	//THUAT TOAN: SU DUNG VONG LAP FOR DE DUYET QUA TAT CA CAC SO NGUYEN CO 4 CHU SO
	//   for(int n=1000; n<=9999; n++) { LAM GI DO VOI n }
	// SO n THOA MAN 2 DIEU KIEN DONG THOI => SU DUNG TOAN TU AND (&&)
	
	//nguyen van vang: hoi 1 cau hoi xay dung bai: 10d
	//nguyen manh SON: 10d cho cau tra loi || thi se cho kq dung khi 1 trong 2 ben dung
	
	cout<<"CaC SO CO 4 CHU SO MA CHIA CHO 8 DU 7 Va CHIA 125 THI DU 4 la: ";
	for(int n=1000; n<=9999; n++){
		if ( (n%8==7) || (n%125 ==4) )
		  cout<<n<< " ";
	}
}
