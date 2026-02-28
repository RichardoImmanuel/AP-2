#include <iostream>
using namespace std;

int main(){
    float v, l, r, pi = 3.14;

    cout << "Masukkan jari-jari bola: ";
    cin >> r;

    l = 4 * pi * r * r;
    v = float(4.0/3.0) * pi * r * r * r;

    cout << "Luas Permukaan Bola : " << l << endl;
    cout << "Volume Bola : " << v << endl;
}