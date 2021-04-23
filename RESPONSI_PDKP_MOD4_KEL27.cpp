#include<string.h>
#include<iostream> 
using namespace std;

void enkripsi()
{
    
	string deskripsi, enkripsi;
    int i, k;
    char c;
    
    cout<<"======Nama Anggota Kelompok======= : "<<endl;
    cout<<"A. Kenza Vianda Dwiputra"<<endl;
    cout<<"B. Abram Darmaputra"<<endl;
    cout<<"C. Zefanya louis Ligat S"<<endl;
    cout<<"D. Qorry Amara Mardhatillah"<<endl;
    cout<<"Masukan Nama yang diinginkan atau bisa juga kalimat lain : ";
    cin.ignore(); getline (cin, deskripsi);
    enkripsi = " "; 
    
    for (i=0; i < deskripsi.length(); i++) 
    {
        c = deskripsi[i];
        if (isalpha(c)) 
        {
            c = toupper(c); 
            c = c - 65; 
            c = (c + 1) % 26; 
            c = c + 65;
        }
        enkripsi = enkripsi + c; 
    }
    cout << "Telah diubah Menjadi : "<<enkripsi<<endl; 
};
class MyClass {
public:
void dekripsi()
{
    
string plainteks, cipherteks;
    int i, k;
    char c;
    
    cout<<"======Nama Anggota Kelompok======= : "<<endl;
    cout<<"A. Kenza Vianda Dwiputra"<<endl;
    cout<<"B. Abram Darmaputra"<<endl;
    cout<<"C. Zefanya louis Ligat S"<<endl;
    cout<<"D. Qorry Amara Mardhatillah"<<endl;
    cout<<"Masukan Nama yang diinginkan atau bisa juga kalimat lain : ";
    cin.ignore(); getline (cin, cipherteks);
    plainteks = "";  
    
    for (i=0; i<cipherteks.length(); i++)
    {
        c = cipherteks[i];
        if (isalpha(c)) 
        {
            c = toupper(c); 
            c = c - 65; 
            if (c - 1 < 0)
                c = 26 + (c - 1);
            else
                c = (c - 1) % 26;
            c = c + 65; 
            c = tolower(c); 
        }
        plainteks = plainteks + c; 
    }
    cout<<"plainteks : "<<plainteks<<endl; 
	}
};
int main ()
{ 
    int pil;
    char pilih, ulang;
    
    do{ 
    	MyClass myObj;
		cout<<".\n";
    	
        cout<<"Menu : "<<endl;
        cout<<"1. enkripisi "<<endl;
        cout<<"2. dekripsi "<<endl;
        cout<<"Pilih menu : "; cin>>pil;
        switch(pil)
        {
            case 1 : enkripsi();break;
            	default :
				cout<< "Maaf angka yang anda pilih tidak tersedia dalam program ini\n;";
				case 2 : myObj.dekripsi();;break;
			}
		cout<<"\n\nIngin Mengulang Perhitungan ?(y/n)=";cin>>ulang;
        }
    	while(ulang=='y'||ulang=='Y');
}
