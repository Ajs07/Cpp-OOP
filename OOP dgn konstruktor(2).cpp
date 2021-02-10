#include<iostream>
using namespace std;
//program OOP dengan konstruktor

class Contoh{
	public:
	//Contoh()=default;
	Contoh(){
		cout<<"Ini merupakan konstruktor standar \n";
	}
	Contoh(string s){
		cout<<s<<endl;
	}
};

int main(){
	cout<<"Membuat objek dengan konstruktor standar \n";
	Contoh obj1;//akan memanggil konstruktor standar
	cout<<endl;
	//memanggil konstruktor lain
	Contoh obj2("Membuat objek dengan parameter");
}
