#include<iostream>	
#include<iomanip>
using namespace std;
int main(){
	int n;
	cout<<"Pleasa input number N = ";
	cin>>n;
	
	double s=2024;				//khoi tao S=2024
	for(int i=2; i<=n; i++){	//lap voi bien i di tu 2 =>n, moi lan tang 1 
		s += 1.0/i;             //moi lan lap: tinh phan so 1/i => cong them += vao s
	}
	
	cout<<"Result Sum S = "<<setprecision(22)<<s;
}
