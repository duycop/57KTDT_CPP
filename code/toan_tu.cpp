#include<iostream>	
using namespace std;
int main(){
	
	cout<<"CAC TOAN TU TRONG C++\n"
	    <<"TOAN TU +-*/ %\n"
	    <<"1+2="<<1+2<<endl
	    <<"1-2="<<1-2<<endl
	    <<"1*2="<<1*2<<endl
	    <<"10/3="<<10/3<<" nguyen/nguyen <=> chia nguyen => kq nguyen"<<endl
	    <<"1.0/2="<<1.0/2<<" TU la so thuc => kq thuc"<<endl
	    <<"1/2.0="<<1/2.0<<" MAU la so thuc => kq thuc"<<endl
	    <<"1.0/2.0="<<1.0/2.0<<" TU va MAU la so thuc => kq thuc"<<endl

	    <<"\ntoan tu % la chia lay du: 10 banh, chia 6 nguoi: moi ng dc 1 banh, du 4 cai\n"
	    <<"moi ng dc chia: "<<10/6<<" cai banh, con du "<<10%6 <<" cai banh\n"
	    <<"test 123%2= "<<123%2<<" CHAN LY: SO LE %2 = 1, SO CHAN %2 =0\n"
	    <<"\nTOAN TU SO SANH: > < >= <= == !=    TRA VE GIA TRI true/false (1/0)\n"
	    <<"vd: 11>2 => "<<(11>2)<<endl
	    <<"vd: 2==2 => "<<(2==2)<<endl
	    <<"\nTOAN TU LOGIC: && || ! : dung de noi ghep cac bieu thuc logic lai voi nhau\n"
	    <<"toan tu || nghia la OR (HOAC) vd: (1>2)||(3<4) => "<<((1>2)||(3<4))<<endl
	    <<"toan tu && nghia la AND (VA) vd: (1>2)&&(3<4) => "<<((1>2)&&(3<4))<<endl
		<<"! la toan tu phu dinh, vd: !(1>2) => "<<(!(1>2))<<endl
		
		<<"\nTOAN TU THAO TAC TREN CAP BIT: & | ^\n"
		<<"toan tu &  AND theo cap  bit: vd 5 & 6 = "<<(5 & 6)<<endl
		<<"toan tu |   OR theo cap  bit: vd 5 | 6 = "<<(5 | 6)<<endl
		<<"toan tu ^  XOR theo cap  bit: vd 5 ^ 6 = "<<(5 ^ 6)<<endl
		
		<<"\nTOAN TU 1 NGOI: ! (PHU DINH)\n"
		<<"TOAN TU 2 NGOI: +-*/% && || < > >= <= == != & | ^\n"
		<<"\nTOAN TU 3 NGOI: ? : \n"
		<<"  cu phap: BT1 ? BT2 : BT3 \n"
		<<"  neu BT1 dung thi tra ve BT2 nguoc lai tra ve BT3\n"
		<<" 1>2?100:200 => "<<(1>2?100:200);
	int a=1000;
	cout<<"\n a==100?\"a is 100\":\"a not is 100\" => "<<(a==100?"a is 100":"a not is 100");
		
}

