#include <iostream>
using namespace std;



float luas_lingkaran(int r){
  float phi=3.14, luas;
  luas=phi*r*r;
  return luas;
}

float keliling_lingkaran(int r){
  float phi=3.14, keliling;
  keliling=2*phi*r;
  return keliling;
}

int main()
{

  int r;
  cout<<"Masukan Jari-jari  : ";
  cin>>r;
  
  cout<<"Luas Lingkaran     = "<<luas_lingkaran(r)<<endl;
  cout<<"Keliling Lingkaran = "<<keliling_lingkaran(r)<<endl;
}