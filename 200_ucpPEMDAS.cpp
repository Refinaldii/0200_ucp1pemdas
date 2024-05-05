// JAWABAN 
//1. a. INT untuk menyimpan bilangan bulat seperti 1,2,3
//   B. string untuk menyimpan serangkaian karakter seperti "hello world"
//   c. char untuk menyimpan  huruf angka, tanda baca, simbol, maupun spasi kosonng seperti (A), (D), (D)
//2. Prosedur adalah  kode yang terdiri dari satu atau lebih pernyataan yang digunakan untuk menjalankan tugas tertentu dalam program void prosedur membuat prosedur 
//   fungsi mengembaiikan nilai yang telah di eksekusi contoh int hasil = tambah memanggil fungsi tambah
//
// 3. looping terdiri 3 jenis yaitu whilw, do while, FOR
// Perulangan while Merupakan salah satu pernyataan pengulangan, yang akan mengulangi sejumlah perintah berulang kali selama memiliki kondisi bernilai TRUE
//Perulangan do while sama seperti perulangan while bedanya Perulangan do while akan melakukan perintah kode blok sebanyak 1 kali terlebih dahulu baru mengecek kondisi yang ada di dalam kurung while
// FOR adalah perulangan yang dikhususkan untuk melakukan pengulangan, yang secara tepat mengetahui berapa kali pengulangan akan terjadi
//
// 4. gunakan if untuk menentukan kode yang akan di eksekusi, jika kondisinya sudah benar 
// 5. struct adalah tipe data yang memungkinkan untuk mengelompokkan beberapa variable dengan tipe data yanga berbeda beda menjadi satu unit
#include <iostream>
#include <string>
using namespace std;


int main()
{
    const int MAX_LOKASI = 100;
    string nama_kota;
    int status[MAX_LOKASI];
    char ulangi_program;
    int jumlah_lokasi = 0;

    do {
        cout << "Masukan Nama Kota: ";
        cin >> nama_kota[jumlah_lokasi];


        int nilai_sensor;
        bool tidak_sehat = false;
        for (int i = 0; i < 3; ++i) {
            cout << "Masukan Nilai sensor ke- " << i + 1 << " : ";
            cin >> nilai_sensor;
            if (nilai_sensor > 75 || nilai_sensor == 45) {
                tidak_sehat = true;
            }
        }
        status[jumlah_lokasi] = tidak_sehat ? 0 : 1;
        jumlah_lokasi++;
        cout << "Ingin mengulang program? (y/n): ";
        cin >> ulangi_program;
    } while (ulangi_program == 'y' || ulangi_program == 'Y');

    cout << "Nama kota\tStatus" << endl;
    for (int i = 0; i < jumlah_lokasi; ++i) {
        cout << nama_kota[i] << "\t\t";
        if (status[i] == 1) {
            cout << "Sehat" << endl;
        }
        else {
            cout << "Tidak sehat" << endl;
        }
    }
    int total_sehat = 0;
    int total_tidak_sehat = 0;
    for (int i = 0; i < jumlah_lokasi; ++i) {
        if (status[i] == 1) {
            total_sehat++;
        }
        else {
            total_tidak_sehat++;
        }
    }
    cout << "Total lokasi sehat: " << total_sehat << endl;
    cout << "Total lokasi tidak sehat: " << total_tidak_sehat << endl;

    return 0;
}
