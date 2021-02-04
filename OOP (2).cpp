#include<iostream>
using namespace std;
//deklarasi kelas dengan fungsi
class Balok{
	public:
		int panjang;
		int lebar;
		int tinggi;
		//mendefinisikan fungsi anggota di kelas(member function
		int volume(){
			return panjang*lebar*tinggi;
		}
};

int main(){
	Balok *obj;//deklarasi pointer object dari kelas balok
	obj=new Balok();//membuat objek dari kelas balok
	//menginput nilai panjang,lebar dan tinggi
	cout<<"Input panjang: ";
	cin>>obj->panjang;
	cout<<"Input lebar: ";
	cin>>obj->lebar;
	cout<<"Input tinggi: ";
	cin>>obj->tinggi;
	cout<<endl;
	//menampilkan panjang,lebar dan tinggi
	cout<<"Panjang: "<<obj->panjang<<endl;
	cout<<"Lebar: "<<obj->lebar<<endl;
	cout<<"Tinggi: "<<obj->tinggi<<endl;
	int volume=obj->volume();
	cout<<"Volume: "<<volume;
}
