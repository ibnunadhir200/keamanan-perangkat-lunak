#include <iostream>
using namespace std;
 
 
float luas_permukaan(float p, float l, float t){
    float L;
    L = 2 * ( (p*l) + (p*t) + (l*t) );
    return L;
}
 
float volume(float p, float l, float t){
    float V;
    V = p * l * t;
    return V;
}
 
float keliling(float p, float l, float t){
    float k;
    k = 4 * (p + l + t);
    return k;
}
 
int main() {
    float p, l, t;
    float luasnya, volumenya, kelilingnya;
    int pilihan;
 
    cout << "Program menghitung luas, volume, dan keliling balok \n";
    cout << "Masukan pilihan. 1. luas, 2. volume, 3. keliling: ";
    cin >> pilihan;
 
    cout << "masukan panjang balok: ";
    cin >> p;
 
    cout << "masukan lebar balok: ";
    cin >> l;
 
    cout << "masukan tinggi balok: ";
    cin >> t;
 
    if (pilihan == 1) {
        luasnya = luas_permukaan(p, l, t);
        cout << "Jadi luasnya: " << luasnya;
    }
    else if (pilihan == 2) {
        volumenya = volume(p, l, t);
        cout << "Jadi volumenya: " << volumenya;
    }
    else if (pilihan == 3) {
        kelilingnya = keliling(p, l, t);
        cout << "jadi kelilingnya: " << kelilingnya;
    }
 
    return 0;
}
