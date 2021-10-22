#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
using namespace std;
int main ()                           
{
                char y,t,kode_kota,kelas,gender,kembali;
                string fstname,lstname,email,no_hp;
                int umr,harga_tiket,PPN,jum_bayar;
                             {
                                printf("\n_______ HARGA TIKET PESAWAT SKUY AIRLINES______\n");
                                cout<<"\n==========================================================\n";
                                cout<<"Tujuan Anda        Kelas         Kelas        Kelas     \n";
                                cout<<"                   Ekonomi(E)    Bisnis(B)    Eksekutif(X)\n";
                                cout<<"\n________ Dari Jakarta ________\n";
                                cout<<"==========================================================\n";
                                cout<<"1. Bandung         Rp300000           Rp2000000          Rp3000000         \n";
                                cout<<"2. Bali            Rp400000           Rp4000000          Rp6000000         \n";
                                cout<<"3. Surabaya        Rp350000           Rp2500000          Rp5000000         \n";
                                cout<<"4. Lombok          Rp800000           Rp4200000          Rp6200000         \n";
                                cout<<"5. Semarang        Rp340000           Rp2700000          Rp5200000         \n";
                                cout<<"6. Malang          Rp370000           Rp2900000          Rp5900000         \n";

                                cout<<"==========================================================\n";
                                printf("\n_______ Data Pemesanan Penumpang ________\n");
                                
                                MENU:   //label Menu
								{
								cout<<"Nama Depan          : ";
                                cin>>fstname;
                                cout<<"Nama Belakang       : ";
                                cin>>lstname;
                                cout<<"Pilih Gender L/P    : ";
                                cin>>gender;
                                
                                switch(gender)
								{
                                	case 'L':
                                		break;
                                		
                                	case 'P':
                                		break;
                     		
								}
		
                    			cout<<"Masukan Email Anda  : ";
                    			cin>>email;
                    			cout<<"Masukan No Hp Anda  : ";
                    			cin>>no_hp;
                    			}
								int rute;
								{	
                                printf("\n_______ Pilih Kota Tujuan ________\n");
                                cout<<"\nMasukan Kode Kota [1-7]             : ";
                                cin>>kode_kota;
                               
                                switch(kode_kota)
                                {
                                     case '1':
                                           {
                                             cout<<"Kota Tujuan Anda                    : Bandung\n"<<endl;
                                     printf("_______ Pilih Kelas Pesawat _______");
                                              cout<<"\nMasukan Kode Kelas Pesawat [E/B/X]  : ";
                                              cin>>kelas;
                                              cout<<endl;
                                              if (kelas=='E' || kelas=='e')
                                                  {
                                                      harga_tiket=300000;
                                                       PPN=0.1*harga_tiket;
                                                       jum_bayar=harga_tiket+PPN;
                                                       cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                       cout<<"PPN          = Rp."<<PPN<<endl;
                                                       cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                    }
                                                     else if (kelas=='B' || kelas=='b')
                                                       {
                                                           harga_tiket=2000000 ;
                                                           PPN=0.1*harga_tiket;
                                                           jum_bayar=harga_tiket+PPN;
                                                           cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                           cout<<"PPN          = Rp."<<PPN<<endl;
                                                           cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                          }
                                                            else if (kelas=='X' || kelas=='x')
                                                            {
                                                               harga_tiket=3000000 ;
                                                                PPN=0.1*harga_tiket;
                                                                jum_bayar=harga_tiket+PPN;
                                                                cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                                cout<<"PPN          = Rp."<<PPN<<endl;
                                                                cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                               }
                                                                break;
                                           }
                                           case '2':
                                                 {
                                                    cout<<"Kota Tujuan Anda                    : Bali\n"<<endl;
                                     printf("_______ Pilih Kelas Pesawat _______");
                                                    cout<<"\nMasukan Kode Kelas Pesawat [E/B/X]  : ";
                                                    cin>>kelas;
                                                    cout<<endl;
                                                    if (kelas=='E' || kelas=='e')
                                                     {
                                                        harga_tiket=400000;
                                                        PPN=0.1*harga_tiket;
                                                         jum_bayar=harga_tiket+PPN;
                                                         cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                         cout<<"PPN          = Rp."<<PPN<<endl;
                                                          cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                       }
                                                         else if (kelas=='B' || kelas=='b')
                                                            {
                                                              harga_tiket=4000000;
                                                               PPN=0.1*harga_tiket;
                                                               jum_bayar=harga_tiket+PPN;
                                                               cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                               cout<<"PPN          = Rp."<<PPN<<endl;
                                                               cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                               }
                                                                 else if (kelas=='X' || kelas=='x')
                                                                {
                                                                   harga_tiket=6000000;
                                                                    PPN=0.1*harga_tiket;
                                                                     jum_bayar=harga_tiket+PPN;
                                                                     cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                                    cout<<"PPN          = Rp."<<PPN<<endl;
                                                                    cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                                  }
                                                                    break;
                                                         }
                                           case '3':
                                                 {
                                                    cout<<"Kota Tujuan Anda                    : Surabaya\n"<<endl;
                                     printf("_______ Pilih Kelas Pesawat _______");
                                                    cout<<"\nMasukan Kode Kelas Pesawat [E/B/X]  : ";
                                                    cin>>kelas;
                                                    cout<<endl;
                                                    if (kelas=='E' || kelas=='e')
                                                     {
                                                        harga_tiket=350000;
                                                        PPN=0.1*harga_tiket;
                                                         jum_bayar=harga_tiket+PPN;
                                                         cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                         cout<<"PPN          = Rp."<<PPN<<endl;
                                                          cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                       }
                                                         else if (kelas=='B' || kelas=='b')
                                                            {
                                                              harga_tiket=2500000;
                                                               PPN=0.1*harga_tiket;
                                                               jum_bayar=harga_tiket+PPN;
                                                               cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                               cout<<"PPN          = Rp."<<PPN<<endl;
                                                               cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                               }
                                                                 else if (kelas=='X' || kelas=='x')
                                                                {
                                                                   harga_tiket=5000000;
                                                                    PPN=0.1*harga_tiket;
                                                                     jum_bayar=harga_tiket+PPN;
                                                                     cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                                    cout<<"PPN          = Rp."<<PPN<<endl;
                                                                    cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                                  }
                                                                    break;
                                                         }
                                        case '4':
                                                 {
                                                    cout<<"Kota Tujuan Anda                    : Lombok\n"<<endl;
                                     printf("_______ Pilih Kelas Pesawat _______");
                                                    cout<<"\nMasukan Kode Kelas Pesawat [E/B/X]  : ";
                                                    cin>>kelas;
                                                    cout<<endl;
                                                    if (kelas=='E' || kelas=='e')
                                                     {
                                                        harga_tiket=800000;
                                                        PPN=0.1*harga_tiket;
                                                         jum_bayar=harga_tiket+PPN;
                                                         cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                         cout<<"PPN          = Rp."<<PPN<<endl;
                                                          cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                       }
                                                         else if (kelas=='B' || kelas=='b')
                                                            {
                                                              harga_tiket=4200000;
                                                               PPN=0.1*harga_tiket;
                                                               jum_bayar=harga_tiket+PPN;
                                                               cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                               cout<<"PPN          = Rp."<<PPN<<endl;
                                                               cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                               }
                                                                 else if (kelas=='X' || kelas=='x')
                                                                {
                                                                   harga_tiket=6200000;
                                                                    PPN=0.1*harga_tiket;
                                                                     jum_bayar=harga_tiket+PPN;
                                                                     cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                                    cout<<"PPN          = Rp."<<PPN<<endl;
                                                                    cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                                  }
                                                                    break;
                                                         }
                                        case '5':
                                                 {
                                                    cout<<"Kota Tujuan Anda                    : Semarang\n"<<endl;
                                     printf("_______ Pilih Kelas Pesawat _______");
                                                    cout<<"\nMasukan Kode Kelas Pesawat [E/B/X]  : ";
                                                    cin>>kelas;
                                                    cout<<endl;
                                                    if (kelas=='E' || kelas=='e')
                                                     {
                                                        harga_tiket=340000;
                                                        PPN=0.1*harga_tiket;
                                                         jum_bayar=harga_tiket+PPN;
                                                         cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                         cout<<"PPN          = Rp."<<PPN<<endl;
                                                          cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                       }
                                                         else if (kelas=='B' || kelas=='b')
                                                            {
                                                              harga_tiket=2700000;
                                                               PPN=0.1*harga_tiket;
                                                               jum_bayar=harga_tiket+PPN;
                                                               cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                               cout<<"PPN          = Rp."<<PPN<<endl;
                                                               cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                               }
                                                                 else if (kelas=='X' || kelas=='x')
                                                                {
                                                                   harga_tiket=5200000;
                                                                    PPN=0.1*harga_tiket;
                                                                     jum_bayar=harga_tiket+PPN;
                                                                     cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                                    cout<<"PPN          = Rp."<<PPN<<endl;
                                                                    cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                                  }
                                                                    break;
                                                         }
                                        case '6':
                                                 {
                                                    cout<<"Kota Tujuan Anda                    : Malang\n"<<endl;
                                     printf("_______ Pilih Kelas Pesawat _______");
                                                    cout<<"\nMasukan Kode Kelas Pesawat [E/B/X]  : ";
                                                    cin>>kelas;
                                                    cout<<endl;
                                                    if (kelas=='E' || kelas=='e')
                                                     {
                                                        harga_tiket=370000;
                                                        PPN=0.1*harga_tiket;
                                                         jum_bayar=harga_tiket+PPN;
                                                         cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                         cout<<"PPN          = Rp."<<PPN<<endl;
                                                          cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                       }
                                                         else if (kelas=='B' || kelas=='b')
                                                            {
                                                              harga_tiket=2900000;
                                                               PPN=0.1*harga_tiket;
                                                               jum_bayar=harga_tiket+PPN;
                                                               cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                               cout<<"PPN          = Rp."<<PPN<<endl;
                                                               cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                               }
                                                                 else if (kelas=='X' || kelas=='x')
                                                                {
                                                                   harga_tiket=5900000;
                                                                    PPN=0.1*harga_tiket;
                                                                     jum_bayar=harga_tiket+PPN;
                                                                     cout<<"Harga Tiket  = Rp."<<harga_tiket<<endl;
                                                                    cout<<"PPN          = Rp."<<PPN<<endl;
                                                                    cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;
                                                                  }
                                                                    break;
                                                         }
                                                default:
                                 				cout<<"Anda Salah Memasukan Kode"<<endl;
								 }             
                                }
                                cout<<"==========================================================\n";
								cout<<"==========================================================\n";
                                printf("\n_______ Detail Tiket _______\n");
                                cout<<"Nama Depan      :  "<<fstname<<endl;
                                cout<<"Nama Belakang   :  "<<lstname<<endl;
                                cout<<"Gender Anda     :  "<<gender<<endl;
                                cout<<"Email Anda      :  "<<email<<endl;
                                cout<<"No Hp Anda      :  "<<no_hp<<endl;
                                cout<<"Rute Perjalanan :  "<<kode_kota<<endl;
                                cout<<"Kelas Cabin     :  "<<kelas<<endl;
                                cout<<"Total Harga     :  "<<jum_bayar<<endl;
								
								printf("\nAnda Ingin Memesan Kembali [Y/T]   : ");
                                cin>>kembali; 
								switch(kembali)
								{
                                	case 'Y':
                                		cout<<"Silahkan Memasukan Data Lainnya \n";
                                		goto MENU;
                                		break;
                                		
                                	case 'T':
                                		cout<<"Terima Kasih Dan Sampai Jumpa\n";
                                		goto Akhir;
                                		break;
                     		
								}
                }
                Akhir:
				return 0;
}