#include<iostream>	
using namespace std;
int main(){
	cout<<"CAC LENH DIEU KHIEN CHUONG TRINH\n"
	    <<"cau truc dieu khien 4: while\n"
	    <<"CU PHAP: while(bt_dk){khoi_lenh} \n"
	    <<"nhan xet: while tuong duong voi for: khi khoi khoi tao = rong. khoi Dem=rong\n";
	    
	    //vd: liet ke cac so nguyen tu 1..20;
	    
	    cout<<"\nLenh while:  liet ke cac so nguyen tu 1..20: ";
	    int i=1; // ~ khoi khoi tao cua FOR
	    while(i<=20){		// bt tuong duong khoi DIEU KIEN of FOR
	    	cout<<i<<" ";   // ~ khoi thuc hien cua FOR
	    	i++;            //tang 1 don vi ~ khoi dem of FOR
		}
		
		cout<<"\nLenh FOR  :  liet ke cac so nguyen tu 1..20: ";
		for(i=1 ; i<=20; i++){
			cout<<i<<" ";
		}
		
		cout<<"\nNhan xet: WHILE giong FOR => hieu FOR => thay WHILE cung de!";
 	    
}
	    
