#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

main() {
   char tanya[50] = " Siapakah Nama Anda ?";
   cout << "kalimat tanya : " << tanya << endl;
   strcat(tanya, "  Nama Saya Edward Pieters");
   cout << "kalimat tanya dengan jawaban: " << tanya << endl;
   getch();
}