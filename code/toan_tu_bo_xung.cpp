#include<iostream>	
using namespace std;
int main(){
	cout<<"liet ke cac toan tu C++\n"
	    <<" tinh toan: +, -, *, /, % \n"
	    <<" so sanh: >, <, >=, <=, ==, != \n"
	    <<" ghep noi cac nhom logic: &&, ||, ! (phu dinh, 1 ngoi) \n"
	    <<" thao tac voi cac cap bit: &, |, ^, ~ (phu dinh bit, 1 ngoi)\n"
	    <<" thao tac dich bit: >> , << \n"
	    <<" toan tu: ++ -- += -= *= /= %= >>= <<= ";
	    
	    cout<<"\nTEST TOAN TU ~ : PHU DINH BIT\n";
	    
	    {  //ta gap loi KHAI BAO LAI BIEN A => FIX CHO KHOI1 DUNG A: vao trong 1 khoi lenh { ... }
	       //moi bien khai bao trong khoi nay: chi dc dung trong khoi nay
 		    unsigned char a = 123;
		    
		    unsigned char b = ~a; //phu dinh moi bit , dao moi bit of a
		    
		    cout<<"a="<<(int)a<<" b="<<(int)b<<endl;
		    
		    cout<<"\nTEST TOAN TU >> : dich bit sang phai\n";
		    //a van dang la 123
		    cout<<"truoc khi dich phai 2 bit a="<<(int)a<<endl;  //0111 1011
		    a = a >> 2;
		    cout<<"  sau khi dich phai 2 bit a="<<(int)a<<endl;  //0001 1110
	    
		}//ket thuc khoi
		
		//cout<<"a="<<a; //ngoai khoi =>[Error] 'a' was not declared in this scope => a chi hoat dong trong khoi tren
	    
	    cout<<"\nTEST TOAN TU << : dich bit sang trai \n";
	    unsigned long long int a = 7;  //ngoai khoi C++ quen a truoc do => khai bao lai a OK	    
	    cout<<"truoc khi dich trai 30 bit a="<<a<<endl;  //0111 1011
	    a = a << 32;
	    cout<<"  sau khi dich trai 30 bit a="<<a<<endl;  //1110 1100
	    
	    cout<<"toan tu ++\nCO 2 CACH DUNG: TIEN TO ++i, HAU TO i++\n";
	    cout<<" TIEN TO: ++ DUONG TRUOC BIEN : TANG GIA TRI BIEN LEN TRUOC KHI DUNG\n";
	    cout<<"  HAU TO: ++ DUONG SAU   BIEN : DUNG GIA TRI CUA BIEN TRUOC, TANG GIA TRI BIEN LEN SAU\n";
	    cout<<"NEU ++ HAU TO HAY TIEN TO MA KO THAM GIA VAO BIEU THUC THI: NHU NHAU\n";
	    //VD:
	    a=10;
	    a++;   // a++ ko tham gia vao bieu thuc tinh toan nao
	    cout<<"a=10, sau khi dung a++ (HAU TO)thi a="<<a<<endl;
	    a=10;
	    ++a;  // ++a ko tham gia vao bieu thuc tinh toan nao
	    cout<<"a=10, sau khi dung ++a (tien to)thi a="<<a<<endl;
	    
	    a=10;
	    int b=a++;  //HAU TO
	    cout<<"a=10, b=? sau khi dung a++ (hauto) thi a="<<a<<" b="<<b<<endl;
	    
	    a=10;
	    b=++a;
	    cout<<"a=10, b=? sau khi dung ++a (tien to) thi a="<<a<<" b="<<b<<endl;
	    
	    int x=10, y=100, z=1000;	    
	    int t=x++ + y++ + z;
	    cout<<"x="<<x<<" y="<<y<<" z="<<z<<" t="<<t<<endl;
	    
	    //-- tuong duong
	    
	    /* a+=b  viet tat cua a=a+b
	       a-=b  a=a-b
	       a*=b  a=a*b
	       a*=1+2-3*4   <=> a = a *(1+2-3*4)
	       .... viet it hieu nhieu cho cac toan tu con lai: += -= *= /= %= >>= <<= 
		*/
		
		//ban gai phat hien thay thieu so: NGUYEN THI HUYEN 10D
}

