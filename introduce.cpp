#include <iostream>
using namespace std;

class mahasiswa{
    public :
    int nim;
    string nama;
    float nilai;

    void printdata(){
        cout << "Masukkan Nim" << nim << endl;
        cout << "Masukkan Nama" << nama << endl;
        cout << "Masukkan Nilai" << nilai << endl;
    }

};

int main(){
    mahasiswa mhs;

    mhs.nim = 136;
    mhs.nama = "Yuratama";
    mhs.nilai = 99;

    mhs.printdata();
}