#include<iostream>	
using namespace std;
int main()
{
	cout<<"Hello All\n";
	cout<<"KIEU DU LIEU TRONG C++\n";
	cout<<"KIEU so nguyen CO DAU: char, short, int, long   : 1 NUA BD SO AM (BIT CAO NHAT=1), 1 NUA BD SO DUONG\n";
	char e = 65;  //-128..127
	short a=32768;  //max of short + 1
	signed int b=456; //signed co hay ko co la nhu nhau: CO DAU
	long long c=789; //long long int === long long
	cout<<"char e="<<e<<" size (e) = "<<sizeof(e)<<" bytes\n";
	cout<<"short a="<<a<<" size (a) = "<<sizeof(a)<<" bytes\n";
	cout<<"int b="<<b<<" size (b) = "<<sizeof(b)<<" bytes\n";
	cout<<"long long c="<<c<<" size (c) = "<<sizeof(c)<<" bytes\n";
	
	cout<<"KIEU so nguyen KHONG DAU: tien to unsigned + char, short, int, long  : toan bo cac bit deu bd so duong\n";
	unsigned char ue = -1;  //so nguyen ko dau 1 byte: mien gia tri 0..255
	unsigned short ua=32768;  //mien gia tri cua short: 0=> 2^16-1
	unsigned int ub=456;
	unsigned long long uc=789; //line comment: tu // den het dong la comment
	cout<<"unsigned char ue="<<(int)ue<<" size (ue) = "<<sizeof(ue)<<" bytes\n";
	cout<<"unsigned short ua="<<ua<<" size (ua) = "<<sizeof(ua)<<" bytes\n";
	cout<<"unsigned int ub="<<ub<<" size (ub) = "<<sizeof(ub)<<" bytes\n";
	cout<<"unsigned long long uc="<<uc<<" size (uc) = "<<sizeof(uc)<<" bytes\n";
	
	cout<<"KIEU ki tu: char \n";
	char x=66;  //gia tri gan cho bien x la ki tu B  : B dat trong cap nhay don
	cout<<"bien x="<<x<<"\n";
	x=x-1;
	cout<<"bien x="<<x<<"\n";
	x=x+32;
	cout<<"bien x="<<x<<"\n";
	
	cout<<"KIEU SO THUC: float, double, long double \n";
	float tf=3.14;
	double td=3.141592653589793;
	long double tld=1234567890865456789.0;
//	long float xxx=12345; => loi cu phap . hehehe
/* lam tho:
	anh yeu em tu chan den co
 	con cai dau vut to no di
 	
 	comment: trinh bien dich bo qua ko lam gi, giu nguyen
 	block comment: /* la bat dau  ket thuc la */
	
	cout<<"float tf="<<tf<<" size (tf) = "<<sizeof(tf)<<" bytes\n";
	cout<<"double td="<<tf<<" size (td) = "<<sizeof(td)<<" bytes\n";
	cout<<"long double tld="<<tf<<" size (tld) = "<<sizeof(tld)<<" bytes\n";
	
	cout<<"KIEU logic dung sai: bool \n";
	bool ok;
	ok=true;     //true la 1 hang gia tri cua kieu bool, quy ve so nguyen = 1
	//ok=false;  //false la 1 hang gia tri cua kieu bool, quy ve so nguyen = 0
	cout<<"gia tri bien L1: bool ok="<<ok<<" size (ok) = "<<sizeof(ok)<<" bytes\n";
	ok=3.14;
	cout<<"gia tri bien L2: bool ok="<<ok<<" size (ok) = "<<sizeof(ok)<<" bytes\n";
	ok = ok +1;
	cout<<"gia tri bien L3: bool ok="<<ok<<" size (ok) = "<<sizeof(ok)<<" bytes\n";
	ok = ok - 1;
	cout<<"gia tri bien L4: bool ok="<<ok<<" size (ok) = "<<sizeof(ok)<<" bytes\n";
	ok=0.0001;
	cout<<"gia tri bien L5: bool ok="<<ok<<" size (ok) = "<<sizeof(ok)<<" bytes\n";
	
	long double f1=0.1;
	long double f2=0.2;
	cout<<"f1="<<f1<<" f2="<<f2<<" f1+f2="<<(f1+f2)<<endl;
	long double f3=f1+f2;
	long double epsilon=1e-9;   // 10 mu -9  : cach viet dau phay dong
	cout<<"f1+f2=>f3 = "<<f3<<"\n";
	if(f3  >= 0.3-epsilon && f3<=0.3+epsilon)cout<<"giong nhau "; else cout<<" khac nhau ";
	
	float tien=1e+9;  //1 ty
	tien = tien/1000;  //1 ty chia deu cho 1000 nguoi => moi nguoi dc 1 trieu (1e+006)
	cout<<"so tien = "<<tien<<endl;
	return 0; //so nay de lam gi?
}
