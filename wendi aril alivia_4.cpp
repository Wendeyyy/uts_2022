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

    cout << "Program menghitung luas, volume, dan keliling balok \n";
    cout << "masukan panjang balok: ";
    cin >> p;

    cout << "masukan lebar balok: ";
    cin >> l;

    cout << "masukan tinggi balok: ";
    cin >> t;

    luasnya = luas_permukaan(p, l, t);
    volumenya = volume(p, l, t);
    kelilingnya = keliling(p, l, t);

    cout << "jadi luasnya yaitu: " << luasnya << " Volumenya: " << volumenya << " dan kelilingnya: " << kelilingnya;

    return 0;
}