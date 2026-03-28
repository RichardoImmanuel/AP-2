#include <iostream>
using namespace std;

int main(){
    string kalimat;
    int i;

    system("CLS");

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    for (i = 0; i < kalimat.length(); i++){
        char c = kalimat[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            kalimat[i] = toupper(c);
        }
    }
    
    cout << "Hasil modifikasi huruf vokal: " << kalimat << endl;

    return 0;
}