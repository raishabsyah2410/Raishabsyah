#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,i,j,suma,sumb,sumc,sumd,sume;
	cout<<"masukan angka pertama = ";
	cin>>a;
	cout<<"masukan angka kedua = ";
	cin>>b;
	cout<<"masukan angka ketiga = ";
	cin>>c;
    cout<<"masukan angka keempat = ";
	cin>>d;
    cout<<"masukan angka kelima = ";
	cin>>e;
	suma = b+c+d+e;
	sumb = a+c+d+e;
    sumc = a+b+d+e;
    sumd = a+b+c+e;
    sume = a+b+c+d;
    cout<<"nilai = "<<a<<","<<b<<","<<c<<","<<d<<","<<e<<'\n';
	cout<<"angka 1 :"<<b<<":"<<c<<":"<<d<<":"<<e<<":"<<suma<<'\n';
    cout<<"angka 2 :"<<a<<":"<<c<<":"<<d<<":"<<e<<":"<<sumb<<'\n';
    cout<<"angka 3 :"<<a<<":"<<b<<":"<<d<<":"<<e<<":"<<sumc<<'\n';
    cout<<"angka 4 :"<<a<<":"<<b<<":"<<c<<":"<<e<<":"<<sumd<<'\n';
    cout<<"angka 5 :"<<a<<":"<<b<<":"<<c<<":"<<d<<":"<<sume<<'\n';
	cout<<"angka terkecil adalah "<<suma<<"dan"<<sume<<'\n';
	return 0;
}