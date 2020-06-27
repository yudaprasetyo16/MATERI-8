#include <iostream>
using namespace std;

string hasil [3] = {"yuda","agus","prasetyo"}; //variabel hasil sebagai variabel global

void tampil () {
	string hasil [3] = {"vanisa","veka","fioliana"}; //variabel hasil sebagai variabel lokal
	
	for (int i=0;i<3;i++){
		cout<<"Nama : "<<hasil [i]<<endl;
	}
}

int main ()
{
	tampil ();
	cout<<endl;
	for(int i=0;i<3;i++){
		cout<<"Nama : "<<  hasil[i]<<endl;
	}
	
	system ("pause");
	return 0;
}
