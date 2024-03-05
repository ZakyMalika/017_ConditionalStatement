// Program kelulusan
// Buatlah program dimana pengguna akan memasukan nilai Matematika dan Bahasa dan fisika 
// Jika nilai rearat nilai lebih dari 60 atau Matematika lebih dari 70 maka dinyatakan lulus
// dan jika fisika lebih besar dari 90
// Selain daripada itu tidak lulus

#include <iostream>
using namespace std;

int main() {
	int nilMtk, nilBahasa, nilFisika;
	string status;
	float rerata;

	cout << "Nilai Matematika :" << endl;
	cin >> nilMtk;
	cout << "Nilai Bahasa :" << endl;
	cin >> nilBahasa;
	cout << "Nilai Fisika :" << endl;
	cin >> nilFisika;
	
	rerata = (nilMtk + nilBahasa + nilFisika) / 3;

	if(nilMtk>  70 || rerata > 60){
		status = "Lulus";
		// Kondisi Terbaru
		if (nilFisika >= 90);
		status = "Lulusan Terbaik";
	}
	else {
		status = "Tidak Lulus";
	}
	cout << "nilai matematika:" << nilMtk << endl;
	cout << "nilai bahasa:" << nilBahasa << endl;
	cout << "nilai fisika:" << nilFisika << endl;
	cout <<  "Status Kelulusan:" << status;

}