#include <iostream>
using namespace std;

double penilaianAwal (double nilaiuts, double nilaiuas, double nilaitugas){
    cout << "\n--- HASIL PENILAIAN AWAL ---\n";

    double nilaiAwal = (nilaiuts + nilaiuas + nilaitugas) / 3;
    cout << "Nilai Akhir Awal: " << nilaiAwal << endl;

    return nilaiAwal;
}

void prosesRemedial(double &penilaian){
    double bonusRemedial = 0;

    cout << "\n--- PROSES REMEDIAL ---\n";
    cout << "Masukkan Nilai Bonus Remedial: "; cin >> bonusRemedial;
    cout << "[LOG] Bonus remedial " << bonusRemedial << " + poin ditambahkan.\n";

    penilaian += bonusRemedial;
}

int main(){
    double nilaiUTS, nilaiUAS, nilaiTugas;

    cout << "=== SOAL 3: SISTEM PENILAIAN AKADEMIK & REMEDIAL ===\n";
    cout << "Masukkan Nilai UTS (0-100): "; cin >> nilaiUTS;
    cout << "Masukkan Nilai UAS (0-100): "; cin >> nilaiUAS;
    cout << "Masukkan Nilai Tugas (0-100): "; cin >> nilaiTugas;

    double hasilPenilaianAwal = penilaianAwal(nilaiUTS, nilaiUAS, nilaiTugas);

    //if(hasilPenilaianAwal < 75)
    // prosesRemedial(hasilPenilaianAwal);

    prosesRemedial(hasilPenilaianAwal);

    if(hasilPenilaianAwal > 100)
        hasilPenilaianAwal = 100;

    cout << "\n--- HASIL PENILAIAN AKHIR ---\n";
    cout << "Nilai Akhir Setelah Remedial : " << hasilPenilaianAwal;

    return 1;
}