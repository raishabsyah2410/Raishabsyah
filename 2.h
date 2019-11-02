//creat by Rais Habsyah
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
main()
{
int uang;
int a,a1,b,b1,c,c1,d,d1,e,e1,f,f1,g,g1,h,h1,i,i1,j,j1,k,k1,min;

cout<<"inputkan jumlah uang kembalian : ";
cin>>uang;
min=uang-4500;
a=min%100000;
a1=min/100000;
b=a%50000;
b1=a/50000;
c=b%20000;
c1=b/20000;
d=c%10000;
d1=c/10000;
e=d%5000;
e1=d/5000;
f=e%2000;
f1=e/2000;
g=f%1000;
g1=f/1000;
h=g%500;
h1=g/500;
i=h%200;
i1=h/200;
j=i%100;
j1=i/100;
k=j%50;
k1=j/50;
cout<<"========================================="<<endl;
cout<<a1<<" lembar Rp.100000"<<endl;
cout<<b1<<" lembar Rp.50000"<<endl;
cout<<c1<<" lembar Rp.20000"<<endl;
cout<<d1<<" lembar Rp.10000"<<endl;
cout<<e1<<" lembar Rp.5000"<<endl;
cout<<f1<<" lembar Rp.2000"<<endl;
cout<<g1<<" lembar Rp.1000"<<endl;
cout<<h1<<" Koin Rp.500"<<endl;
cout<<i1<<" Koin Rp.200"<<endl;
cout<<j1<<" Koin Rp.100"<<endl;
cout<<k1<<" Koin Rp.50"<<endl;
cout<<"disumbangkan 4500 \n";
cout<<"========================================="<<endl;

cout<<"\nTrimakasih atas kunjungan anda :D"<<endl;
getch();
}