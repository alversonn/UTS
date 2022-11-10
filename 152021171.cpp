#include<iostream>
using namespace std;

void menu1(){
string nama1, nama2, nama3;
  int x, y, z, jarak1, jarak2;
  
  cout << "Nama   : Alif Abdul Hakim "<<endl;
  cout << "NIM    : 152021171 "<<endl;
  cout << "Kelas  : DD "<<endl;
  cout << "Matkul : Pemrograman Dasar "<<endl;
  cout << "======================================="<<endl;

  cout << "Masukkan nama anak ke -1: ";
  cin >> nama1;
  cout << "Banyak Permen: ";
  cin >> x;
  cout << "===================" << endl;
  cout << "Masukkan nama anak ke -2: ";
  cin >> nama2;
  cout << "Banyak Permen: ";
  cin >> y;
  cout << "===================" << endl;
  cout << "Masukkan Nama Anak ke -3: ";
  cin >> nama3;
  cout << "Banyak Permen: ";
  cin >> z;
  cout << "===================" << endl;
  cout << endl;

  if (x == y && x == z) {
    cout << "Permen yang punya " << nama1 << ", " << nama2 << " dan " << nama3
         << " berjumlah sama";
  }

  else if (x == y && x > z) {
    cout << "Permen yang punya " << nama1 << " dan " << nama2 << " berjumlah sama"
         << endl;
    jarak1 = x - z;
    cout << "Jarak banyak permen antara " << nama1 << " dan " << nama2
         << " dengan " << nama3 << " adalah: " << jarak1;
  }

  else if (x == z && x > y) {
    cout << "Permen yang punya " << nama1 << " dan " << nama3 << " berjumlah sama"
         << endl;
    jarak1 = x - y;
    cout << "Jarak banyak permen antara " << nama1 << " dan " << nama3
         << " dengan " << nama2 << " adalah: " << jarak1;
  }

  else if (y == z && y > x) {
    cout << "Permen yang punya " << nama2 << " dan " << nama3 << " berjumlah sama"
         << endl;
    jarak1 = y - x;
    cout << "Jarak banyak permen antara " << nama2 << " dan " << nama3
         << " dengan " << nama1 << " adalah : " << jarak1;
  }

  else if (x > y && x > z) {
    cout << nama1 << " Mempunyai jumlah permen yang terbanyak" << endl;
    jarak1 = x - y;
    jarak2 = x - y;
    cout << "Jarak banyak permen antara " << nama1 << " dengan " << nama2
         << " adalah: " << jarak1 << endl;
    cout << "Jarak banyak permen antara " << nama1 << " dengan " << nama3
         << " adalah: " << jarak2 << endl;
  } else if (y > z && y > x) {
    cout << nama2 << " Mempunyai jumlah permen terbanyak" << endl;
    jarak1 = y - x;
    jarak2 = y - z;
    cout << "Jarak banyak permen antara " << nama2 << " dengan " << nama1
         << " adalah: " << jarak1 << endl;
    cout << "Jarak banyak permen antara " << nama2 << " dengan " << nama3
         << " adalah: " << jarak2 << endl;
  } else {
    cout << nama3 << " mempunyai jumlah permen terbanyak" << endl;
    jarak1 = z - x;
    jarak2 = z - y;
    cout << "Jarak banyak permen antara " << nama3 << " dengan " << nama1
         << " adalah: " << jarak1 << endl;
    cout << "Jarak banyak permen antara " << nama3 << " dengan " << nama2
         << " adalah: " << jarak2 << endl;
  }
  

  
}


void menu2() {    
   int i;  
   string kode_input;  
   string a;

  cout << "Nama   : Alif Abdul Hakim "<<endl;
  cout << "NIM    : 152021171 "<<endl;
  cout << "Kelas  : DD "<<endl;
  cout << "Matkul : Pemrograman Dasar "<<endl;
  cout << "======================================="<<endl;
   cout << "---------------"<<endl;   
   cout << "SELAMAT DATANG di ATM "<<endl;    
   cout << "---------------"<<endl;  
   string kode ="141002";        
   string login = "block";    
   i = 1;    
   
   do {        
       cout << "Masukkan Nomor PIN = "; cin>>kode_input;        
           
       if (kode_input == kode) {    
	   	           
           cout << "---------------"<<endl;           
           cout << "Berhasil Masuk" << endl;                
           i = 4;
           login = "berhasil";        } 
       else {            
           cout << "---------------"<<endl;           
           cout << "PIN Salah! ("<<i<<"x)"<<endl;
		       cout << "---------------"<<endl;;            
           i = i +1;
       }   
    } while (i <= 3);
	
    if(login != "berhasil"){
       cout<<"Anda telah 3x salah login."<<endl; 
       cout << "---------------"<<endl;
       cout << "Masukkan Nomor PIN = "; cin>>a;        
  cout<<"KARTU ANDA TELAH DIBLOKIR, SILAHKAN HUBUNGI BANK TERDEKAT";
	}   
  }

void menu3(){
  int jam;
  int d;
  int a,i;
  float todis,diskon,total;

  cout << "Nama   : Alif Abdul Hakim "<<endl;
  cout << "NIM    : 152021171 "<<endl;
  cout << "Kelas  : DD "<<endl;
  cout << "Matkul : Pemrograman Dasar "<<endl;
  cout << "======================================="<<endl;
  cout << "Berapa Belanjaan: "; 
  cin >>a;
  
    for (int i = 0; i < a; i++){
        
     cout << "Harga Item: "; 
cin>>d;
      total = total + d;
  cin.ignore();
      }

    
   cout<<"Jam Berapa Anda Belanja: ";
   cin>>jam;
      if(jam>1299 && jam<=1400)
      {
         cout<<"Anda mendapatkan diskon 20 persen"<<endl;
         diskon = (total*20)/100;
         todis = total-diskon;

        cout<<"Total Bayar: "<<todis<<endl;
      }
      else
      {
         cout<<"Ga dapat diskon"<<endl;
        cout<<"Total bayar: "<<total <<endl;
      }
}
  
 int main() { 

  menu1();     
   return 0;
}