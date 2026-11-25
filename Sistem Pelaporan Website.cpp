#include <iostream>
#include "string"
#include <stdio.h>
using namespace std;

int main(){
    char linkWebsite[100], alasan[100];
    int jenis, indikasi;
    char kirimkanLaporan;
    string nama;

    cout << "Masukkan nama Anda: ";
    getline(cin, nama);

    cout << "Masukkan Jenis Website: ";
    cin >> jenis;

    cout << "Masukkan Link Website: ";
    cin >> linkWebsite;

    cout << "Apakah website memiliki indikasi ilegal?: ";
    cin >> indikasi;

    cout << "Masukkan alasan pelaporan: ";
    cin >> alasan;

    cout << "Kirim Laporan (Y/N): ";
    cin >> kirimkanLaporan;

    string jenisWebsite;
    string indikasiChar;
    switch(jenis){
        case(1):
            jenisWebsite = "Judi Online";
            break;
        case(2):
            jenisWebsite = "Pinjaman Online Illegal";
            break;
        default:
            jenisWebsite = "Jenis Website Tidak Valid.";
    }

    switch(indikasi){
        case(1):
            indikasiChar = "Ya";
            break;
        case(2):
            indikasiChar = "Tidak";
            break;
        default:
            indikasiChar = "Tidak diketahui";
            break;
    }

    string statusLaporan;
    if(indikasi == 1){
        statusLaporan = "Laporan diteruskan untuk verifikasi.";
    } else if(indikasi == 2){
        statusLaporan = "Laporan tidak dilaporkan";
    } else{
        statusLaporan = "Pilihan indikasi tidak valid.";
    }
    
    if(kirimkanLaporan == 'Y'){
        cout << "===================================================\n";
        cout << "Sistem Pelaporan Website Illegal\n";
        cout << "===================================================\n";

        cout << "Nama Pengguna\t:" << nama << endl;
        cout << "Jenis Website\t:" << jenisWebsite << endl;
        cout << "Link Website\t:" << linkWebsite << endl;
        cout << "Indikasi\t:" << indikasiChar << endl;
        
        cout << "===================================================\n";
        cout << "Status Laporan: \n" << statusLaporan << endl;
        cout << "===================================================\n";

        cout << "Terima Kasih Telah Berpartisipasi Dalam\nPelaporan Website Terindikasi Ilegal.\n";
        cout << "====================================================";
    }

    return 1;
}
