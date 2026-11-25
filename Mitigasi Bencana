#include <iostream>
using namespace std;

int main(){
    char namaPengguna[100], jenisBencana[100];
    int tingkatKondisi;

    cout << "Masukkan nama Anda: ";
    cin >> namaPengguna;

    cout << "Masukkan kode jenis bencana: ";
    getline(cin, jenisBencana);

    cout << "Masukkan tingkat kondisi: ";
    cin >> tingkatKondisi;

    cout << "========================\n";
    cout << "MITIGASI BENCANA\n";
    cout << "========================\n";
    
    cout << "Nama\t\t: " << namaPengguna << "\n";
    cout << "Jenis Bencana\t: " << jenisBencana << "\n";
    
    string kondisi;
    if(tingkatKondisi == 1)
        kondisi = "NORMAL";
    else if(tingkatKondisi == 2)
        kondisi = "WASPADA";
    else if(tingkatKondisi == 3)
        kondisi = "SIAGA";
    else if(tingkatKondisi == 2)
        kondisi = "AWAS";
    

    cout << "Kondisi\t\t: " << kondisi << "\n\n";
    
    cout << "Tindakan:\n";

    string tindakan;
    switch (tingkatKondisi)
    {
    case 1:
        tindakan = "Tetap tenang dan lakukan aktivitas seperti biasa.";
        break;
    case 2:
        tindakan = "Tingkatkan kewaspadaan dan pantau informasi dari pihak berwenang.";
        break;
    case 3:
        tindakan = "Persiapkan perlengkapan darurat dan bersiap menuju lokasi evakuasi.";
        break;
    case 4:
        tindakan = "Segera lakukan evakuasi secepatnya menuju tempat yang aman.";
        break;
    default:
        tindakan = "Tingkat kondisi tidak valid.";
        break;
    }


    cout << tindakan << "\n\n\n" << "Tetap tenang, selalu waspada, dan utamakan keselamatan !";
    
}
