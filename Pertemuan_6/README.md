Penjelasan Source Code 1 

Pada Source Code yang pertama ini mengenai umur yang dimana program ini dapat mencetak umur. 

Berikut Penjelasan Source Code :

#include <stdio.h>
void cetakUmur(int *umur){
 printf("Halo, Umur kamu adalah %d tahun", *umur);
}
int main(){
 int angka=20;
 cetakUmur(&angka);
 getchar();
 return 0;
}

#include<stdio.h> 
Adalah Library dalam bahasa pemrograman C yang digunakan untuk INPUT-OUTPUT , tanpa menggunakan library tersebut maka program C yang kita buat tidak bisa digunakan untuk menampilkan atau menginput sesuatu. Singkatan Stdio sendiri adalah Standard Input Output.

void cetakUmur(int *umur){
 printf("Halo, Umur kamu adalah %d tahun", *umur);
 adalah untuk memanggil variabel usia

int main(){
Merupakan fungsi (function) utama, fungsi yang akan dibaca oleh kompilator pertama kali secara otomatis, tidak akan ada function yang otomatis dibaca oleh kompilator kecuali fungsi utama int main(), fungsi utama bagaikan sebuah kepala dari sebuah program yang mengatur arah kompilator.

 int angka=20;
 Adalah mendeklarasikan umur didalam fungsi `main`

cetakUmur(&angka);
Merupakan memanggil `cetak` dengan mengirim isi umur

getchar();
Digunakan untuk membaca data yang bertipe karakter, penggunaan fungsi getchar harus diakhiri dengan penekanan tombol enter. Karakter yang dimasukkan akan terlihat pada layar dan pergantian baris akan dilakukan secara otomatis tanpa penekanan tombol enter.

return 0;
Menyatakan hasil keluaran dari fungsi main() adalah 0. Pada C++, return 0 dalam main() menyatakan bahwa program berakhir dengan normal.


Penjelasan Source Code 2

Pada Source Code ke dua ini, mengenai program untuk mencari nilai pangkat dan menghitung nilai faktorial.

#include <iostream>
using namespace std;

long int faktorial (int A);

int main(){
	
	int r,hasil;
	
	cout<<"MENGHITUNG NILAI FAKTORIAL DENGAN REKURSIF"<<endl;
	cout<<endl;
	cout<<"Masukan Nilai = ";
	cin>>r;
	
	hasil=faktorial(r);
	cout<<"Faktorial "<<r<<"!= "<<hasil<<endl;
}

long int faktorial (int A){
	if (A==1)
		return(A);
		else
		return (A*faktorial(A-1));
}

Pada coding diatas yaitu mencari nilai faktorial dari nilai yang dimasukan. Header yang digunakan hanya iostream terkait input/ouput ada program, Karena jenis program yang dibuat adalah program sekuensial maka memerlukan inisialisasi fungsi rekursifnya di awal sebelum fungsi main(). Pada fungsi main pengguna akan memasukan nilai dan disimpan pada variabel r nantinya akan dipanggil fungsi faktorial() dengan nilai parameter yang dibawah adalah nilai r tersebut, lalu kemudian disimpan pada variabel hasil.

long int faktorial (int A){
  if (A==1)
	return(A);
	else
	return (A*faktorial(A-1));
}

Disini membuat fungsi rekursif dimana jika nilai yang dimasukan adalah 1 maka nilai balik (return value) adalah nilai itu sendiri. Sementara jika tidak maka akan dihitung menggunakan rumus faktorial yaitu (A*faktorial(A-1)).