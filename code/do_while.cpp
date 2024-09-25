#include<iostream>	
using namespace std;
int main(){
	cout<<"CAC LENH DIEU KHIEN CHUONG TRINH\n"
	    <<"cau truc dieu khien 5: do...while\n"
	    <<"CU PHAP: do{Khoi_lenh} while(dk); ";
	    
	    //test 1 doan code su dung vong lap do..while: xem no in ra man hinh cai gi?
	    int a=1;
	    do{
	    	a+=10;  // toan tu += hoat dong ntn ?
	    	a++;    // toan tu ++ hoat dong ntn ?
	    	        // thay coi LOI : thieu sot trong qua trinh day cac toan tu
	    	cout<<a<<" ";  // chuog trinh in ra cac so: 12 23 34 45 56 67 78 89 100 111
		}while(a<=100);
		
		cout<<"\nDay la lenh kiem tra lai gia tri cua a. => a="<<a;
		
		//nhin vao SO DO KHOI of while vs do..while
		//neu dk luon dung (ko bao gio sai): Khoi lenh trong than 2 vong lap LAP VO HAN LAN, mai mai
		//=> chuong trinh ko thoat khoi vong lap => KO NEN (co the den treo may), lap trinh NHUNG luon co while(1)...
		//=> lap trinh C++ TNUT thi : tranh viec lap vo han: bt dk phai co kha nang thay doi gia tri
		
		//neu bieu thuc dk sai ngay tu lan dau tien kiem tra: 
		// thi: doi voi while: KL ko dc thuc hien lan nao
		// voi do..while     : KL dc thuoc hien 1 lan
		
		
		
}
