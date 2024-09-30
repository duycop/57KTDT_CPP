#include<iostream>	
using namespace std;
int main(){
	cout<<"pm tinh so ngay huong tho\n"
	    <<"nhap d1,m1,y1: ";
	int d1,m1,y1,d2,m2,y2;
	cin>>d1>>m1>>y1;
	cout<<"nhap d2,m2,y2: ";
	cin>>d2>>m2>>y2;
	
	int dem  = 0;  //bien chua so ngay dem dc
	
	while(!(d1==d2 && m1==m2 && y1==y2)){ //dk lap: ngay1 not equal ngay2
		dem++;  //tang 1 ngay dem duoc
		d1=d1+1;  //tang gia tri bien NGAY
		
		int max_ngay_trong_thang;
		switch(m1){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: max_ngay_trong_thang=31;
					 break;
			case 4:
			case 6:
			case 9:
			case 11: max_ngay_trong_thang=30;
					 break;
			case 2:  if((y1%4==0 && y1%100!=0)||(y1%400==0))
					 	max_ngay_trong_thang=29;
					 else
					 	max_ngay_trong_thang=28;
					 break;
		} //end switch
		
		if(d1>max_ngay_trong_thang){ //neu qua ngay cuoi cung trong thang m1
			d1=1;  //thi do la ngay 1 cua thang tiep theo
			m1++;	//thang tiep theo la m1++
			if(m1==13){  //tiep theo cua thang 12 la thang 1, ko phai thang 13
				m1=1;  //tuc la thang 1 
				y1++;  //cua nam tiep theo
			}
		} 
	
	}//end while
	cout<<"HUONG DUONG: "<<dem<<" ngay";	
}
