#include<iostream>
#include<string.h>
using namespace std;
//Object-oriented Porgramming(OOP) merupakan pemrograman yg berorientasi ke objek
class Mahasiswa{
	public:
		char NPM[10];
		string nama;
		string jurusan;
		int ipk;
};

int main(){
	Mahasiswa m1;//deklarasi objek dri m1
	//memasukkan nilai dari m1
	strcpy(m1.NPM,"12345");
	m1.nama="Arnold";
	m1.jurusan="Informatika";
	m1.ipk=3.84;
	//menampilkan data dari m1
	cout<<"NPM m1: "<<m1.NPM<<endl;
	cout<<"Nama: "<<m1.nama<<endl;
	cout<<"Jurusan: "<<m1.jurusan<<endl;
	cout<<"IPK: "<<m1.ipk<<endl;
}
