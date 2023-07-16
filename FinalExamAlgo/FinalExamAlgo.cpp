#include <iostream>
#include <string>
using namespace std;
int mahasiswa[100];

const int MAX_MAHASISWA = 100;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;
string jurusan[MAX_MAHASISWA];


void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Jurusan : ";
		getline(cin, jurusan[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
}
bool empty() {
	if (jumlahMahasiswa == 0) {
		return true;
	}
	else {
		return false;
	}
}

void tampilkanSemuaMahasiswa() {
	if (empty()) {
		cout << "Data Mahasiswa Kosong" << endl;
	}
	else {
		while (jumlahMahasiswa != empty()){
			cout << "========== TAMBAH MAHASISWA ==========" << endl;
			cout << "NIM		:" << mahasiswa << endl;
			cout << "Nama		:" << nama[jumlahMahasiswa] << endl;
			cout << "Jurusan		:" << jurusan[jumlahMahasiswa] << endl;
			cout << "Tahun Masuk	:" << tahunMasuk[jumlahMahasiswa] << endl;
		}
		return;
	}
}

void algorithmacariMahasiswaByNIM() {
	if (empty()) {
		cout << "Data Mahasiswa Kosong" << endl;
	}
	else {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM		:" << NIM << endl;
		cout << "Nama		:" << nama[jumlahMahasiswa] << endl;
		cout << "Jurusan		:" << jurusan[jumlahMahasiswa] << endl;
		cout << "Tahun Masuk	:" << tahunMasuk[jumlahMahasiswa] << endl;
	}
}
//isi disini
void algorithmaSortByTahunMasuk() {
	if (empty()) {
		cout << "Data Mahasiswa Kosong" << endl;
	}
	else {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM		:" << NIM << endl;
		cout << "Nama		:" << nama[jumlahMahasiswa] << endl;
		cout << "Jurusan		:" << jurusan[jumlahMahasiswa] << endl;
		cout << "Tahun Masuk	:" << tahunMasuk[jumlahMahasiswa] << endl;
	}
}

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}


// 2. menggunakan quick sort, binary search, insertion, if esle, queue, linked list, array.
// 3. algoritma stack itu Last in Last out (LiFo) ibaratnya undo, kalau Queue itu First in First out (FiFo) ibaratnya shuttlecock dimasukin ke tempatnya.
// 4. kita bisa menggunakan algoritma stack saat kita melakukan kegiatan yang sering terjadi kesalahan dan bisa mengulangi dan memperbaiki kesalahan tersebut, seperti di paint, saat salah gambar kita bisa undo untuk memperbaiki kesalahan tersebut.
// 5. a. 4
// 5. b. benar