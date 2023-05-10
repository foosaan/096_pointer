#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); //deklarasi method
};

void mahasiswa::showNim() { //inplementasi method diluar class
	cout << "No Induk = " << nim << endl;
}

int main()
{
	mahasiswa  mhs{ 1 };	//objek mhs
	mhs.showNim();			//memeber acces operator

	mahasiswa& ref = mhs;	//pointer reference refMhs
	ref.nim = 2;			//member acces operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs;	//pointer derefence pMhs
	pMhs->nim = 3;			//arrow operator
	pMhs->showNim();
	system("pause");
	return 0;
}