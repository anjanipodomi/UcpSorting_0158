#include <iostream>
using namespace std;

//UCP 1
// ANJANI DIHAPSARI PODOMI - 20230140158
// SOAL TYPE 1 Algoritma Insertion Sort

//1. Algoritma insertion sort membandingkan dan menukar setiap element dengan cara...
//   contoh:
//   n = 5
//   pass = 4 (n - 1)
//   pertama bagi daftar menjadi 2, diurutkan dan yang tidak diurutkan. daftar yang diurutkan memiliki element pertama (hanya 1 saja) dan sisanya daftar yang tidak terurut memiliki 4 element.
//   cara mengurutkannya, tempatkan setiap element satu persatu pada posisi yang benar dalam daftar yang diurutkan. setelah 4 pass terlewati maka nilai sudah terurut dari nilai paling kecil hingga nilai paling besar.

//2. Algoritma selection sort menukar setiap elementnya dengan cara mencari nilai minimum (paling kecil) lalu menukar nilai minimum itu dengan setiap indeks secara berurut.

//3. n-1 (rumus mencari pass/langkah)
//   contoh:
//   n=5
//   pass/langkah ada 4, karena n-1 = 5-1
//   5-1 = 4

int anjani[58];
int n;

void input() {
    while (true)
    {
        cout << "masukkan jumlah data pada array : ";
        cin >> n;

        if (n <= 58) {
            break;
        }
        else
        {
            cout << "n\Array yang anda masukkan maksimal 58 element\n.";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukkan element array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "data ke- " << (i + 1) << ":";
        cin >> anjani[i];
    }
}

void insertionsort() {

    int temp;
    int i, j;

    for (i = 1; i <= n - 1; i++) {

        temp = anjani[i];

        j = i - 1;

        while (j >= 0 && anjani[j] > temp)
        {
            anjani[j + 1] = anjani[j];
            j--;
        }
        anjani[j + 1] = temp;

        cout << "\nPass " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << anjani[k] << " ";
        }
    }
}

void display() {
    cout << endl;
    cout << "====================" << endl;
    cout << "Element array yang telah tersusun" << endl;
    cout << "====================" << endl;

    for (int j = 0; j < n; j++) {
        cout << anjani[j] << endl;
    }
    cout << endl;


}

int main()
{
    input();
    insertionsort();
    display();

    return 0;
}
