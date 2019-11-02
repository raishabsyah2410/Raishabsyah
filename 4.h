#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
string brg1,brg2,brg3;
int byk1,byk2,byk3,jml1,jml2,jml3,total,disc1,disc2,sum;
int ba=3000,bb=3500,bc=5000;

cout <<"======================================"<< endl;
cout <<" Toko RAIS HABSYAH"<< endl;
cout <<"======================================"<< endl;
cout <<"Barang A = Rp 3.000,-"<< endl;
cout <<"Barang B = Rp 3.500,-"<< endl;
cout <<"Barang C = Rp 5.000,-"<< endl;
cout <<"======================================"<< endl << endl;

cout <<"Input nama barang 1 : "; cin >> brg1;
cout <<"Banyak barang : "; cin >> byk1;
jml1 = byk1 * ba;
cout <<"Jumlah 1 : Rp. "<< jml1 << endl << endl;

cout <<"Input nama barang 2 : "; cin >> brg2;
cout <<"Banyak barang : "; cin >> byk2;
jml2 = byk2 * bb;
cout <<"Jumlah 2 : Rp. "<< jml2 << endl << endl;

cout <<"Input nama barang 3 : "; cin >> brg3;
cout <<"Banyak barang : "; cin >> byk3;
jml3 = byk3 * bc;
cout <<"Jumlah 3 : Rp. "<< jml3 << endl << endl;

cout <<"======================================"<< endl;
total = jml1+jml2+jml3;
cout <<"Total Pembelian = Rp. "<< total << endl;

if (byk1 > 11)
disc1 = 500*byk1;
else
disc1 = 0;

if (byk2 > 5)
disc2 = 0.5*jml3;
else
disc2 =0;
cout <<"Discount Barang A = Rp. "<< disc1 << endl;
cout <<"Discount Barang B = Rp. "<< disc2 << endl;
sum=disc1+disc2;
cout <<"Total Bayar = Rp. "<< total-sum << endl << endl;
cout <<"======================================="<< endl;
cout <<" Terima kasih atas kunjungan Anda ! "<< endl;
cout <<"======================================="<< endl;

getch();

}