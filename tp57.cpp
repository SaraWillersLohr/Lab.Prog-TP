#include <bits/stdc++.h>
using namespace std;

string CambiarPalabra(string palabra, int posicion);
int main() {
    int posicion;
    string palabra;
    cout<<"ingrese una palabra"<<endl;
    getline(cin,palabra);
    cout<<"ingrese posicion"<<endl;
    cin>>posicion;
    cout<<CambiarPalabra(palabra,posicion)<<endl;
    return 0;
}

string CambiarPalabra(string palabra, int posicion) {
    if (posicion >= 0 && posicion < palabra.size()) {
        palabra[posicion] = 'x';
    }
    return palabra;
}