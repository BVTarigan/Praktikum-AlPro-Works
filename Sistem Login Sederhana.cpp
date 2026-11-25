#include <iostream>

using namespace std;

int main(){
    cout << "=== Layanan EMBEGE Online ===" << endl;
    cout << "Registrasi Terlebih Dahulu" << endl;

    string userAuth, passAuth;
    cout << "Username: ";
    cin >> userAuth;

    cout << "Password: ";
    cin >> passAuth;

    cout << "Berhasil registrasi !" << endl;;
    system("PAUSE");
    system("cls");

    cout << "=== Layanan EMBEGE Online ===" << endl;
    cout << "Silahkan masuk terlebih dahulu" << endl;

    string username, password;
    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    if(userAuth == username) {
        if (userAuth == password){
        cout << "\nSelamat Anda Berhasil Login !" << endl;

        string namaPanjang;
        cout << "Masukkan nama panjang anda: ";
        cin.ignore();
        getline(cin, namaPanjang);

        int jumlahCabang, saldoATM;
        cout << "Masukkan jumlah cabang anda: ";
        cin >> jumlahCabang;

        cout << "Masukkan saldo ATM anda: Rp. ";
        cin >> saldoATM;

        if(jumlahCabang >= 5 || saldoATM > 50000000)
            cout << namaPanjang << " adalah orang kaya !" << endl;
        else
            cout << namaPanjang << " tambah lagi cabangmu !" << endl;
    }else
        cout << "Password Salah !";
        
} else
cout << "Username Salah !";

}
