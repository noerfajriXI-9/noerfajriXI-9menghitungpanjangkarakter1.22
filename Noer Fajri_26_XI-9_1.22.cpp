#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
 //mendeklarasikan teks1 dan teks2
 char teks1[10], teks2[10];
 int jIhdepan, jIhkel, jIhhuruf;
 
 //menampilkan pesan u/ meminta masukan dari pengguna
 cout << "Masukkan Nama Depan Anda?: ";
 cin >> teks1;
 cout << "Masukkan Nama Keluarga Anda?: ";
 cin >> teks2;
 //menghitung panjang teks
 jIhdepan = strlen(teks1);
 jIhkel = strlen(teks2);
 jIhhuruf = jIhdepan + jIhkel;
 
 //menampilkan hasil ke pengguna
cout << "Nama Lengkap Anda: " << teks1 << " " << teks2 <<
endl;
cout << "Jumlah Huruf Nama Anda : " << jIhhuruf << " Huruf"
<<endl;
 system ("PAUSE");
 return 0;
}
