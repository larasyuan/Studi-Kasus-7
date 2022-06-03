#include <iostream>
#include <string.h>
using namespace std;

class sorting {
	public :
        int input();
        int sortdata();
        int descending();
        int searching();

	private :
        int nim[25];
        string nama[20], sortHuruf;
        string prodi[25];
        int nomor[20];
    	  int srt[5];
    	  int temp;
		    int banyakdata,i,b, cari, nimtersedia;
};  

int sorting::input() {
  cout << "Masukkan banyaknya data : ";
  cin >> banyakdata;
  for(i=0; i<banyakdata; i++){
    cout <<endl;
    cout <<"Data ke-"<<(i+1)<<":"<<endl;
    cout <<"NIM Mahasiswa      : ";
    cin >> nim[i];
    cout <<"Nama Mahasiswa     : ";
    cin.ignore();
    getline(cin, nama[i]);
    cout <<"Prodi              : ";
    cin.ignore();
	getline(cin, prodi[i]);
    cout <<"Nomor Telepon      : ";
    cin>> nomor[i];
    cout <<endl;
  }
  sortdata();
}

int sorting::sortdata() {
  cout<<"Data Mahasiswa"<<endl;
  cout<<"========================================================="<<endl;
  cout<<"|   NIM    |  Nama Mahasiswa   |   Prodi  |   No. Telp  |"<<endl;
  cout<<"========================================================="<<endl;
    for(i=0;i<banyakdata;i++){
      cout<<"| "<<nim[i]<<"\t"<<"  | "<<nama[i]<<"\t\t "<<"| "<<prodi[i]<<"\t\t"<<"| "<<nomor[i]<<"\t\t"<<" | "<<endl;
  }
  for(i=0; i<banyakdata; i++){
    for(b=0; b<banyakdata-1; b++){
      if(nim[b] < nim[b+1]){
        temp = nim[b];
        nim[b] = nim[b+1];
        nim[b+1] = temp;

        sortHuruf = nama[b];
        nama[b] = nama[b+1];
        nama[b+1] = sortHuruf;

        sortHuruf = prodi[b];
        prodi[b] = prodi[b+1];
        prodi[b+1] = sortHuruf;
        
        temp = nomor[b];
        nomor[b]=nomor[b+1];
        nomor[b+1]=temp;
      }
    }     
  }
  cout<<endl;
  descending();
}

int sorting::descending() {
  cout<<endl;
  cout <<"Setelah data diurutkan berdasarkan NIM terbesar : "<<endl;
  cout <<"==================================================================="<<endl;
  cout <<"|    NIM      |   Nama Mahasiswa   |     Prodi     |   No. Telp   |"<<endl;
  cout <<"==================================================================="<<endl;
  for(b=0;b<banyakdata;b++){
  cout <<"| "<<nim[b]<<"\t\t"<<" | "<<nama[b]<<"\t\t"<<"| "<<prodi[b]<<"\t"<<"| "<<nomor[b]<<"|"<<endl;
  }
  cout <<endl;
  searching();
}

int sorting::searching() {
  cout<<endl;
  cout <<"Masukan NIM Mahasiswa : ";
  cin >> cari;
  nimtersedia = 0;
  
  for(b=0;b<banyakdata;b++) {
    if(nim[b] == cari){
       nimtersedia = 1;
        cout<<"===================================================================="<<endl;
        cout<<"|     Nama Mahasiswa     |       Prodi       |       No.Telp       | "<<endl;
        cout<<"===================================================================="<<endl;
        cout<<"| "<<nama[b]<<"\t"<<"| "<<prodi[b]<<"\t"<<"| "<<nomor[b]<<"\t"<<" |"<<endl;
      }
    }
  cout<<"--------------------------------------------------"<<endl;
  if (nimtersedia == 0){
    cout<<"Data Tidak ditemukan"<<endl;
  }
}

int main() {
  sorting srt;
  srt.input();
}