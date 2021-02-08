#include <iostream>
using namespace std;

class balok
{
	private:
		double panjang;
		double lebar;
		double tinggi;
	//metode yang bersifat private
	public:
		//menggunakan metode set n get ketika variabel di private
		void setpanjang(double nilai) {
			panjang = nilai;
		}
		double getPanjang() {
			return panjang;
		}
		void setlebar(double nilai) {
			lebar = nilai;
		}
		double getLebar() {
			return lebar;
		}
		void settinggi(double nilai) {
			tinggi = nilai;
		}
		double getTinggi() {
			return tinggi;
		}
		
		double volume(){
		return panjang*lebar*tinggi;
		}
		
		void cetakVolume() {
			cout<<endl;
			cout<<"Volume balok = "<<volume()<<" meter "<<endl;
		}		
};

int main(){
	balok*obj;
	obj = new balok();
		
	//mengisi nilai-nilai atribut dengan set melalui fungsi
	obj->setpanjang(20);
	obj->setlebar(16);
	obj->settinggi(12);
	
	//Mengampilkan nilai-nilai atribut dengan get
	cout<<"Panjang: "<<obj->getPanjang()<<endl;
	cout<<"Lebar: "<<obj->getLebar()<<endl;
	cout<<"Tinggi: "<<obj->getTinggi()<<endl;
	
	//menampilkan volume dengan memanggil fungsi cetak Volume
	obj->cetakVolume();
}
