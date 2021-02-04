#include<iostream>
using namespace std;
//deklarasi kelas
class Balok{
	public:
		int panjang;
		int lebar;
		int tinggi;
};

int main(){
	Balok *obj;//deklarasi pointer object dari kelas balok
	obj=new Balok();//membuat objek dari kelas balok
	obj->panjang=6;
	obj->lebar=4;
	obj->tinggi=2;
	//menampilkan panjang,lebar dan tinggi
	cout<<"Panjang: "<<obj->panjang<<endl;
	cout<<"Lebar: "<<obj->lebar<<endl;
	cout<<"Tinggi: "<<obj->tinggi<<endl;
	//melakukan operasi hitung
	int volume= obj->panjang*obj->lebar*obj->tinggi;
	//menampilkan volume
	cout<<"Volume balok: "<<volume<<" meter ";
}
