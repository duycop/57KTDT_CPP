#include<iostream>	
using namespace std;
int main(){
	cout<<"Liet ke cac snt co 3 chu so: ";	
	/*
	thuat toan:
	khoi tao tong = 0 // de lam
	dung 1 vong lap de duyet qua tat ca cac so co 3 chu so // for(i=min=>max) min=100 max=999
	moi so dang duyet: kiem tra xem nó co phai la snt ko?  // chia thu cho cac so tu 2..i-1: neu ton tai so bi i chia het=> NO, ko ton tai so bi i chia het=> YES
		YES: show i ra man hinh
		NO: ko lam gi                 => dung lenh IF ko co else
	duyet xong: => het
	*/
	
	//code: ko can nhap gi
	
	for(int i = 100; i<= 999; i++){
		//check i co phai snt ko => YES
		bool yes = true;  //tam coi i la snt
		for(int k = 2; k<= i-1; k++)
			if(i%k==0){		//ton tai 1 so k nao do trong khoang 2..i-1 ma i chia het cho k
				yes = false;
				break;
			}
		if(yes){
			cout<<i<<" ";
		}
	}

}
