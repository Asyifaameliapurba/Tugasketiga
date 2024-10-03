//Dibuat oleh asyifa amelia purba
//Tanggal dibuat 3 okt 2024
#include <iostream>
#include <vector>
using namespace std;

double htngKomisi(double penjln) {
    double komisi = 0.0;
    if (penjln <= 500000) {
        komisi = penjln * 0.10;
    } else {
        komisi = 500000 * 0.10 + (penjln - 500000) * 0.15; 
    }
    return komisi;
}

int main() {
    const int jmlhSalesman = 10;
    vector<double> penjln(jmlhSalesman);
    vector<double> komisi(jmlhSalesman);
    double totalKomisi = 0.0;

    for (int i = 0; i < jmlhSalesman; i++) {
        cout << "Masukkan jmlh penjln untuk salesman ke-" << (i + 1) << ": ";
        cin >> penjln[i];
        komisi[i] = htngKomisi(penjln[i]);
        totalKomisi += komisi[i];
    }
    cout << "\nKomisi yang diterima oleh setiap salesman:\n";
    for (int i = 0; i < jmlhSalesman; i++) {
        cout << "Salesman ke-" << (i + 1) << ": Komisi = " << komisi[i] << endl;
    }
    cout << "\nTotal komisi yang dibayarkan oleh PT. MURAH HATI: " << totalKomisi << endl;

    return 0;
}