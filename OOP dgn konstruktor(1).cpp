#include<iostream>
using namespace std;
//program OOP dengan konstruktor

class Contoh{
	public:
	Contoh()=default;
	Contoh(string s){
		cout<<s<<endl;
	}
};

int main(){
	//membuat objek dengan cara statis
	cout<<"Membuat objek dengan cara statis \n";
	Contoh obj;// deklarasi 
	
	//membuat objek dengan cara dinamis
	Contoh *obj2;
	obj2=new Contoh();
	delete obj2;
}
