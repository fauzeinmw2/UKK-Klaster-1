#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <cstring>
#include <iomanip>
#include <conio.h>
#include <windows.h>
#include <sstream>

using namespace std;

void judul();
void menu();
void inputNilai();
void dataNilai();
void editNilai();
void hapusNilai();

char pilmenu;
char pilmenu2;
int no;

vector<string> nama;
vector<int> uts;
vector<int> uas;
vector<int> tugas;
vector<int> na;
vector<string> ket;
vector<string> predikat;


void setcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

SetConsoleTextAttribute(hCon,color);
}


int main(int argc, char** argv) {
	
	system("color F0");	
//	nama.push_back("as");
//		nama.push_back("bk");
//		nama.push_back("jk");
//		
//		cout << nama[1] << endl;
//		
//		nama.erase(nama.begin()+1);
//		cout << nama[1] << endl;
					
	judul();
	menu();
	system("PAUSE");
	return 0;
}

void judul(){
	cout << "========================================================================" << endl;
	cout << "                     Program Menghitung Nilai Akhir Siswa               " << endl;
	cout << "                      UKK Klaster 1 : Pemrograman Dasar                 " << endl;
	cout << "========================================================================" << endl;
}

void menu(){
	cout << " " << endl;
	cout << "------------------------------------------------------------------------" << endl;
	cout << "                                Pilihan Menu                            " << endl;
	cout << "          1. Input Nilai                                                " << endl;
	cout << "          2. Lihat Data Nilai                                           " << endl;
	cout << "          3. Exit                                                       " << endl;
	cout << "------------------------------------------------------------------------" << endl;
	cout << "    Inputkan Pilihan Menu Anda  [1-3]  : "; cin >> pilmenu;
	cout << endl;
	cout << "------------------------------------------------------------------------" << endl;	
		
	switch (toupper(pilmenu)){
		case '1' : inputNilai();	  
		break;
		
		case '2': dataNilai(); 	
		break;
		
		case '3':
			system("cls");
			judul();
			cout << "\t\t Terimakasih Sudah Menggunakan Aplikasi Kami......" << endl << endl;
			cout << "Develop By, " << endl;
			cout << "Nama               : Fauzein Mulya Warman" << endl;
			cout << "Kelas              : XII-RPL" << endl;
			cout << "Sekolah Asal       : SMKN 2 Padang" << endl;
			cout << "------------------------------------------------------------------------" << endl;	
			cout << "Copyright 2022, FAMUWASOFT" << endl;
		break;
		
		default : 
			system("cls");
			judul();
			cout << "\t\t\t Pilihan Anda Tidak Terdaftar !!! ..." << endl;
			menu();
		break;
	}
}

void menu2(){
	cout << " " << endl;
	cout << "------------------------------------------------------------------------" << endl;
	cout << "                                Pilihan Menu                            " << endl;
	cout << "          1. Edit Data Nilai                                            " << endl;
	cout << "          2. Hapus Data Nilai                                           " << endl;
	cout << "          3. Kembali                                                    " << endl;
	cout << "          4. Exit                                                       " << endl;
	cout << "------------------------------------------------------------------------" << endl;
	cout << "    Inputkan Pilihan Menu Anda  [1-4]  : "; cin >> pilmenu2;
	cout << endl;
	cout << "------------------------------------------------------------------------" << endl;
	
	switch (toupper(pilmenu2)){
		case '1' : 
			editNilai();	  
		break;
		
		case '2' : 
			hapusNilai();	  
		break;
		
		case '3' : 
			system("cls");
			judul();
			menu();	  
		break;
		
		case '4':
			system("cls");
			judul();
			cout << "\t\t Terimakasih Sudah Menggunakan Aplikasi Kami......" << endl << endl;
			cout << "Develop By, " << endl;
			cout << "Nama               : Fauzein Mulya Warman" << endl;
			cout << "Kelas              : XII-RPL" << endl;
			cout << "Sekolah Asal       : SMKN 2 Padang" << endl;
			cout << "------------------------------------------------------------------------" << endl;	
			cout << "Copyright 2022, FAMUWASOFT" << endl;
		break;
		
		default : 
			system("cls");
			judul();
			cout << "\t\t\t Pilihan Anda Tidak Terdaftar !!! ..." << endl;
			menu();
		break;
	}
}

void hapusNilai(){
	char konfirmasi;
	cout << "                                   Hapus Nilai Siswa                                " << endl << endl;
	cout << "    Pilih Nomor                             : "; cin >> no;
	cout << "    Yakin Ingin Menghapus Data Ini ? [y/n]   : "; cin >> konfirmasi;
	cout << "-----------------------------------------------------------------------------------" << endl;
	
	if(konfirmasi != 'n'){
		nama.erase(nama.begin()+no-1);
		uts.erase(uts.begin()+no-1);
		uas.erase(uas.begin()+no-1);
		tugas.erase(tugas.begin()+no-1);
		na.erase(na.begin()+no-1);
		ket.erase(ket.begin()+no-1);
		predikat.erase(predikat.begin()+no-1);
		
		cout << "     Data Berhasil Dihapus" << endl;
	}else{
		cout << "     Data Batal Dihapus" << endl;
	}
	
	menu();
	
}

void editNilai(){
	cout << "                                   Edit Nilai Siswa                                " << endl << endl;
	cout << "    Pilih Nomor                             : "; cin >> no;
	
	int i = no-1;
	
	system("cls");
	judul();
	cout << " " << endl;
	cout << "------------------------------------------------------------------------------------------------------" << endl;
	cout << "                                             Edit Nilai Siswa                                         " << endl;
	setcolor(224);
	cout << "------------------------------------------------------------------------------------------------------" <<endl;
	cout << setiosflags(ios::left) <<setw(4) << " | No";
	cout << setiosflags(ios::left) <<setw(25) << " | Nama";
	cout << setiosflags(ios::left) <<setw(8) << " | UTS";
	cout << setiosflags(ios::left) <<setw(8) << " | UAS";
	cout << setiosflags(ios::left) <<setw(8) << " | Tugas";
	cout << setiosflags(ios::left) <<setw(15) << " | Nilai Akhir";
	cout << setiosflags(ios::left) <<setw(20) << " | Keterangan";
	cout << setiosflags(ios::left) << "| Predikat | " << endl;
	cout << "------------------------------------------------------------------------------------------------------" <<endl;
	setcolor(240);
	
	if(nama.size() == 0){
		setcolor(252);
		cout << "\t\t\tData Masih Kosong !!! ..." << endl;
		setcolor(240);
		
	}else{
		cout << " | " << setiosflags(ios::left) <<setw(2) << "1";
		cout << " | " << setiosflags(ios::left) <<setw(22)  << nama[i];
			
		if(uts[i] < 70){
			setcolor(252);
			cout << " | " << setiosflags(ios::left) <<setw(5) << uts[i];
			setcolor(240);	
		}else{
			cout << " | " << setiosflags(ios::left) <<setw(5) << uts[i];
		}
			
		if(uas[i] < 70){
			setcolor(252);
			cout << " | " << setiosflags(ios::left) <<setw(5) << uas[i];
			setcolor(240);	
		}else{
			cout << " | " << setiosflags(ios::left) <<setw(5) << uas[i];
		}
		
		if(tugas[i] < 70){
			setcolor(252);
			cout << " | " << setiosflags(ios::left) <<setw(5) << tugas[i];
			setcolor(240);	
		}else{
			cout << " | " << setiosflags(ios::left) <<setw(5) << tugas[i];
		}
		
		if(na[i] < 70){
			setcolor(252);
			cout << " | " << setiosflags(ios::left) <<setw(12) << na[i];
			setcolor(240);	
		}else{
			cout << " | " << setiosflags(ios::left) <<setw(12) << na[i];
		}
		
		if(na[i] < 70){
			setcolor(252);
			cout << " | " << setiosflags(ios::left) <<setw(16) << ket[i];
			setcolor(240);	
		}else{
			cout << " | " << setiosflags(ios::left) <<setw(16) << ket[i];
		}
		
		if(na[i] < 70){
			setcolor(252);
			cout << " | " << setiosflags(ios::left) <<setw(8) << predikat[i]  << " | " <<endl;
			setcolor(240);	
		}else{
			cout << " | " << setiosflags(ios::left) <<setw(8) << predikat[i]  << " | " <<endl;
		}	
	}
	
	string inama, iket, ipredikat;
	char konfirmasi;
	string iuts, iuas, itugas;
	int utss, uass, tugass, ina;
	
	cout << "------------------------------------------------------------------------------------------------------" <<endl << endl;
	setcolor(252);
	cout << "                                  Inputkan Data yang akan diedit saja!!!                                " << endl << endl;
	setcolor(240);	
	cout << "    Nama Siswa (Maksimal 20 Karakter!...)   : "; cin.get(); getline(cin,inama);
	cout << "    Nilai UTS                               : "; getline(cin,iuts);
	cout << "    Nilai UAS                               : "; getline(cin,iuas);
	cout << "    Nilai Tugas                             : "; getline(cin,itugas);
	cout << endl;
	cout << "    Yakin Ingin Mengubah Data Ini ? [y/n]  : "; cin >> konfirmasi;
	cout << "-----------------------------------------------------------------------------------" << endl;
	
	
	
	if(konfirmasi != 'n'){
		
		if(inama != ""){
			nama[i] = inama;
		}
		
		if(iuts != "" && iuas != "" && itugas != ""){
 
 			stringstream(iuts) >> utss;
			stringstream(iuas) >> uass;
			stringstream(itugas) >> tugass;
			
			ina = ( utss + uass + tugass) / 3;
			
			if(ina > 90){
				iket = "Lulus";
				ipredikat = "A";
			}else if(ina >= 70){
				iket = "Lulus";
				ipredikat = "B";
			}else{
				iket = "Tidak Lulus";
				ipredikat = "C";
			}
			
			uts[i] = utss;
			uas[i] = uass;
			tugas[i] = tugass;
			na[i] = ina;
			ket[i] = iket;
			predikat[i] = ipredikat;
		}
		
		if(iuts != ""){
			
			stringstream(iuts) >> utss;
			
			ina = (utss + uas[i] + tugas[i]) / 3;
			
			if(ina > 90){
				iket = "Lulus";
				ipredikat = "A";
			}else if(ina >= 70){
				iket = "Lulus";
				ipredikat = "B";
			}else{
				iket = "Tidak Lulus";
				ipredikat = "C";
			}
			
			uts[i] = utss;
			na[i] = ina;
			ket[i] = iket;
			predikat[i] = ipredikat;
		}
		
		if(iuas != ""){
			stringstream(iuas) >> uass;
		  	
			ina = (uts[i] + uass + tugas[i]) / 3;
			
			if(ina > 90){
				iket = "Lulus";
				ipredikat = "A";
			}else if(ina >= 70){
				iket = "Lulus";
				ipredikat = "B";
			}else{
				iket = "Tidak Lulus";
				ipredikat = "C";
			}
			
			uas[i] = uass;
			na[i] = ina;
			ket[i] = iket;
			predikat[i] = ipredikat;
		}
		
		if(itugas != ""){
			
			stringstream(itugas) >> tugass;
		  	
			ina = (uts[i] + uas[i] + tugass) / 3;
			
			if(ina > 90){
				iket = "Lulus";
				ipredikat = "A";
			}else if(ina >= 70){
				iket = "Lulus";
				ipredikat = "B";
			}else{
				iket = "Tidak Lulus";
				ipredikat = "C";
			}
			
			tugas[i] = tugass;
			na[i] = ina;
			ket[i] = iket;
			predikat[i] = ipredikat;
		}
			
		cout << "     Data Berhasil Diedit" << endl;
	}else{
		cout << "     Data Batal Diedit" << endl;
	}
	
	menu();
}

void inputNilai(){
	
	system("cls");
	judul();
	string inama, iket, ipredikat;
	char konfirmasi;
	int iuts, iuas, itugas, ina;
	
	cout << " " << endl;
	cout << "-----------------------------------------------------------------------------------" << endl;
	cout << "                                  Input Nilai Siswa                                " << endl << endl;
	cout << "    Nama Siswa (Maksimal 20 Karakter!...)   : "; cin.get(); getline(cin,inama);
	cout << "    Nilai UTS                               : "; cin >> iuts;
	cout << "    Nilai UAS                               : "; cin >> iuas;
	cout << "    Nilai Tugas                             : "; cin >> itugas;
	cout << endl;
	cout << "    Yakin Ingin Menyimpan Data Ini ? [y/n]  : "; cin >> konfirmasi;
	cout << "-----------------------------------------------------------------------------------" << endl;	
	
	if(konfirmasi != 'n'){
		ina = (iuts + iuas + itugas) / 3;
	
		if(ina > 90){
			iket = "Lulus";
			ipredikat = "A";
		}else if(ina >= 70){
			iket = "Lulus";
			ipredikat = "B";
		}else{
			iket = "Tidak Lulus";
			ipredikat = "C";
		}
		
		nama.push_back(inama);
		uts.push_back(iuts);
		uas.push_back(iuas);
		tugas.push_back(itugas);
		na.push_back(ina);
		ket.push_back(iket);
		predikat.push_back(ipredikat);
		
		cout << "     Data Berhasil Disimpan" << endl;
	}else{
		cout << "     Data Batal Disimpan" << endl;
	}
	
	cout << "-----------------------------------------------------------------------------------" << endl;	
	
	menu();
}

void dataNilai(){
	system("cls");
	judul();
	cout << " " << endl;
	cout << "------------------------------------------------------------------------------------------------------" << endl;
	cout << "                                             Data Nilai Siswa                                         " << endl;
	setcolor(224);
	cout << "------------------------------------------------------------------------------------------------------" <<endl;
	cout << setiosflags(ios::left) <<setw(4) << " | No";
	cout << setiosflags(ios::left) <<setw(25) << " | Nama";
	cout << setiosflags(ios::left) <<setw(8) << " | UTS";
	cout << setiosflags(ios::left) <<setw(8) << " | UAS";
	cout << setiosflags(ios::left) <<setw(8) << " | Tugas";
	cout << setiosflags(ios::left) <<setw(15) << " | Nilai Akhir";
	cout << setiosflags(ios::left) <<setw(20) << " | Keterangan";
	cout << setiosflags(ios::left) << "| Predikat | " << endl;
	cout << "------------------------------------------------------------------------------------------------------" <<endl;
	setcolor(240);
	
	if(nama.size() == 0){
		setcolor(252);
		cout << "\t\t\tData Masih Kosong !!! ..." << endl;
		setcolor(240);
	} else{
		for(int i=0; i < nama.size(); i++){
			cout << " | " << setiosflags(ios::left) <<setw(2) << i+1;
			cout << " | " << setiosflags(ios::left) <<setw(22)  << nama[i];
			
			if(uts[i] < 70){
				setcolor(252);
				cout << " | " << setiosflags(ios::left) <<setw(5) << uts[i];
				setcolor(240);	
			}else{
				cout << " | " << setiosflags(ios::left) <<setw(5) << uts[i];
			}
			
			if(uas[i] < 70){
				setcolor(252);
				cout << " | " << setiosflags(ios::left) <<setw(5) << uas[i];
				setcolor(240);	
			}else{
				cout << " | " << setiosflags(ios::left) <<setw(5) << uas[i];
			}
			
			if(tugas[i] < 70){
				setcolor(252);
				cout << " | " << setiosflags(ios::left) <<setw(5) << tugas[i];
				setcolor(240);	
			}else{
				cout << " | " << setiosflags(ios::left) <<setw(5) << tugas[i];
			}
			
			if(na[i] < 70){
				setcolor(252);
				cout << " | " << setiosflags(ios::left) <<setw(12) << na[i];
				setcolor(240);	
			}else{
				cout << " | " << setiosflags(ios::left) <<setw(12) << na[i];
			}
			
			if(na[i] < 70){
				setcolor(252);
				cout << " | " << setiosflags(ios::left) <<setw(16) << ket[i];
				setcolor(240);	
			}else{
				cout << " | " << setiosflags(ios::left) <<setw(16) << ket[i];
			}
			
			if(na[i] < 70){
				setcolor(252);
				cout << " | " << setiosflags(ios::left) <<setw(8) << predikat[i]  << " | " <<endl;
				setcolor(240);	
			}else{
				cout << " | " << setiosflags(ios::left) <<setw(8) << predikat[i]  << " | " <<endl;
			}
		}
	}
	
	cout << "------------------------------------------------------------------------------------------------------" <<endl;
	cout << endl << endl;
	
	menu2();
}
