#include <iostream>
#include <string.h>
using namespace std;

string formatHasil(float number);
string calculator();

int main() {
    string hasil;
    char is_still_want_to_ngitung = 'y';

    while (true) {
        hasil = calculator();
        cout << hasil << endl;

        cout << "Apakah anda ingin menhitung kembali? (y/n) ";
        cin >> is_still_want_to_ngitung;
        if (is_still_want_to_ngitung == 'y' || is_still_want_to_ngitung == 'Y') {
            continue;
        } else if (is_still_want_to_ngitung == 'n' || is_still_want_to_ngitung == 'N') {
            break;
        }
    }
    
    return 0;
}

string formatHasil(float number) {
    return "Hasil perhitungan: " + to_string(number);
}

string calculator() {
    float angka_pertama;
    char operand;
    float angka_kedua;

    cout << "Mohon dimasukan angka pertama anda: ";
    cin >> angka_pertama;

    cout << "Mohon masukan operasi yang anda ingin gunakan (+, -, /, *): ";
    cin >> operand;

    cout << "Mohon masukan angka kedua anda: ";
    cin >> angka_kedua;

    if (operand == '+'){
        return formatHasil(angka_pertama + angka_kedua);
    } else if (operand == '-') {
        return formatHasil(angka_pertama - angka_kedua);
    } else if (operand == '/') {
        return formatHasil(angka_pertama / angka_kedua);
    } else if (operand == '*') {
        return formatHasil(angka_pertama * angka_kedua);
    }
    return "Terjadi kesalahan dalam pemograman input anda, mohon inputkan ulang";
}