#include <iostream>
using namespace std;

void sapa(string nama){ // nama adalah Parameter Formal
    cout << "Halo " << nama << " Selamat Datang di AP 2!" << endl;
}

int main(){
    string namaPengguna = "Alya";
    
    sapa(namaPengguna); // namaPengguna adalah Parameter Aktual

    return 0;
}